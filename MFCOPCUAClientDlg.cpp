
// MFCOPCUAClientDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFCOPCUAClient.h"
#include "MFCOPCUAClientDlg.h"
#include "afxdialogex.h"
#include <stdio.h>
#include <string>
#include <sstream>




UA_Client* client = UA_Client_new();
UA_Variant* myVariant = UA_Variant_new();
CString status;
CString strName;
double dPosition;
int nMode;
bool bStatus;
double dTemperature;
double dValue;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
	
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};


CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCOPCUAClientDlg dialog



CMFCOPCUAClientDlg::CMFCOPCUAClientDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCOPCUACLIENT_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCOPCUAClientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_BTStart, btnStart);
	DDX_Control(pDX, IDC_BTStop, btnStop);
	DDX_Control(pDX, IDC_EDMode, edMode);
	DDX_Control(pDX, IDC_EDName, edName);
	DDX_Control(pDX, IDC_EDPos, edPos);
	DDX_Control(pDX, IDC_EDStt, edStt);
	DDX_Control(pDX, IDC_EDTemp, edTemp);
	DDX_Control(pDX, IDC_STSttMsg, stSttMsg);
	DDX_Control(pDX, IDC_BTCh1, btnChData);
}

BEGIN_MESSAGE_MAP(CMFCOPCUAClientDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTStart, &CMFCOPCUAClientDlg::OnBnClickedBtstart)
	ON_BN_CLICKED(IDC_BTStop, &CMFCOPCUAClientDlg::OnBnClickedBtstop)
	ON_BN_CLICKED(IDC_BTCh1, &CMFCOPCUAClientDlg::OnBnClickedBtch1)
END_MESSAGE_MAP()


// CMFCOPCUAClientDlg message handlers

BOOL CMFCOPCUAClientDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCOPCUAClientDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCOPCUAClientDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCOPCUAClientDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCOPCUAClientDlg::OnBnClickedBtstart()
{
	// TODO: Add your control notification handler code here
		
	UA_ClientConfig_setDefault(UA_Client_getConfig(client));
	UA_Client_connect(client, "opc.tcp://localhost:4880");  //connect to server
	status = _T("Logging Started and Connected to OPC Server");
	stSttMsg.SetWindowText(status);

}


void CMFCOPCUAClientDlg::OnBnClickedBtstop()
{
	// TODO: Add your control notification handler code here
}


void CMFCOPCUAClientDlg::OnBnClickedBtch1()
{
	// TODO: Add your control notification handler code here
	CString strName = _T("");
	edName.GetWindowText(strName);
	std::string sName((LPCTSTR)strName); 
	UA_Variant_setScalarCopy(myVariant, &UA_String_fromChars(strName), &UA_TYPES[UA_TYPES_STRING]);
	UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/Name"), myVariant);
	
	  // Set Mode
	CString strMode = _T("");
	edMode.GetWindowText(strMode);
	UA_Int32 valMode = 0;
	valMode= _ttoi(strMode);
	UA_Variant_setScalarCopy(myVariant, &valMode, &UA_TYPES[UA_TYPES_INT32]);
	UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/Mode"), myVariant);
	
	//
	////Set Position
	CString strPos = _T("");
	edPos.GetWindowText(strPos);
	UA_Double valPos = 0;
	valPos = _tstof(strPos);
	UA_Variant_setScalarCopy(myVariant, &valPos, &UA_TYPES[UA_TYPES_DOUBLE]);
	UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/Position"), myVariant);
	
	////Set Status
	CString strStt = _T("");
	edStt.GetWindowText(strStt);
	UA_Boolean valStt = 0;
	std::string s((LPCTSTR)strStt);
	std::istringstream(s) >> valStt;
	UA_Variant_setScalarCopy(myVariant, &valStt, &UA_TYPES[UA_TYPES_BOOLEAN]);
	UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/Status"), myVariant);
	//Set Temperature
	CString strTemp = _T("");
	edTemp.GetWindowText(strTemp);
	UA_Double valTemp = 0;
	valTemp = _tstof(strTemp);
	UA_Variant_setScalarCopy(myVariant, &valTemp, &UA_TYPES[UA_TYPES_DOUBLE]);
	UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/Temperature"), myVariant);

}
