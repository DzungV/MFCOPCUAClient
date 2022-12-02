
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
#include "ProgramCommand.h"





UA_Client* client = UA_Client_new();

UA_Variant* myVariant = UA_Variant_new();
UA_Variant value;
CString status;
CString strName;
CString strPos;
CString strStt;
CString strTemp;

double dPos = 0;
int nMode;
bool bStatus;
double dTemp;
double dValue;
byte blen;
std::string strCmd;
std::string CMD;
int Arg[5];
char STX = '2';
char ETX = '3';

CString StrPackData;
int CRC;
int CRCpre = 0;
int cnt = 1;
int fin = 0;
int finp = 0;

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
	ON_WM_TIMER()
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

// convert UAString to stdstring
std::string get_str_to_variant(UA_Variant* var)
{
	auto str = (UA_String*)var->data;
	return ((char*)str->data);
}

// get length of UAString
byte getlength(UA_Variant* var)
{
	auto str = (UA_String*)var->data;
	return (str->length);
}



//function to generate protocol from packetdata, calculate and insert CRC to protocol
std::string MakeCrc(std::string &strPacketData)
{
	int usCheckSum = 0;
	unsigned short usPacketSize;
	int i;
	char ch;
	std::size_t pos = strPacketData.find(";");
	std::string strGetCrc = strPacketData.substr(1,pos);
	usPacketSize = strGetCrc.length()-1;
	
	for (i = 0; i < usPacketSize; i++)
	{
		ch = strGetCrc.at(i);
		usCheckSum = usCheckSum ^ strGetCrc.at(i);
	}
	
	
	strPacketData.erase(strPacketData.length() - 1);
	pos = strPacketData.find(";");
	std::string strChSumSend = strPacketData.substr(pos + 1);
	int nChSumSend = stoi(strChSumSend);
	if (usCheckSum == nChSumSend)
	{
		strGetCrc += strPacketData.substr(pos + 1);
		return strGetCrc;
	}	
	else
		return "reception failed";
}
// Get Command Argument
std::string GetCmd(std::string &Cmd)
{
	
	std::string command = Cmd.substr(0, 4);
	return command;
}
int GetServoStt(std::string& Cmd)
{
	std::string stt = Cmd.substr(5, 1);
	int status = stoi(stt);
	return status;
}
int GetCoord(std::string& Cmd)
{
	std::string coo = Cmd.substr(5, 1);
	int coord = stoi(coo);
	return coord;
}
int GetJoint(std::string& Cmd)
{
	std::string joi = Cmd.substr(7, 1);
	int joint = stoi(joi);
	return joint;
}
int GetJoint1(std::string& Cmd)
{
	std::string joi = Cmd.substr(5, 1);
	int joint = stoi(joi);
	return joint;
}
int GetDirection(std::string& Cmd)
{
	std::string dir = Cmd.substr(9, 2);
	int direct = stoi(dir);
	return direct;
}
int GetCrc(std::string& Cmd)
{
	std::size_t p = Cmd.find(";");
	std::string Crc = Cmd.substr(p + 1);
	int Checksum = stoi(Crc);
	return Checksum;
	
}

int GetCurline(std::string& Cmd)
{
	std::size_t no = Cmd.find(",");
	no = Cmd.find(",", no + 1);
	std::string noln = Cmd.substr(no+1);
	int noline = stoi(noln);
	return noline;
}
std::string GetCMD(std::string& Cmd)
{
	std::size_t n = Cmd.find(";");
	std::string cmd = Cmd.substr(0, n );
	return cmd;
}
std::string Gettxt(std::string& Cmd)
{
	std::size_t no = Cmd.find(",");
	no = Cmd.find(",", no + 1);
	std::string noln = Cmd.substr(5, no);
	return noln;
}
std::string Gettxt1(std::string& Cmd)
{
	std::size_t no = Cmd.find(",");
	std::string noln = Cmd.substr(0, no);
	return noln;
}
int GetSpeed(std::string& Cmd)
{
	std::size_t n = Cmd.find(",");
	std::string sp = Cmd.substr(n + 1, 1);
	int spd = stoi(sp);
	return spd;
}
	


void CMFCOPCUAClientDlg::OnBnClickedBtstart()
{
	// TODO: Add your control notification handler code here
	AfxMessageBox(_T("Please open server first"), MB_OK | MB_ICONINFORMATION);
	UA_ClientConfig_setDefault(UA_Client_getConfig(client));
	UA_Client_connect(client, "opc.tcp://localhost:4880");  //connect to server
	status = _T("Logging Started and Connected to OPC Server");
	stSttMsg.SetWindowText(status);
	ProgramCommand ProgCMD;
	ProgCMD.clearProgramCommand();
	
	/*std::string msg;
	while (msg != "Starting transmitting data")
	{
		
		UA_Client_readValueAttribute(client, UA_NODEID("ns=4;s=Robot1/StartMsg"), &value);
		int len = getlength(&value);
		msg = get_str_to_variant(&value);
		msg.resize(len);
	}
	
	CString reply;
	reply = _T("ACK,OK,READY");
	UA_Variant_setScalarCopy(myVariant, &UA_String_fromChars(reply), &UA_TYPES[UA_TYPES_STRING]);
	UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/StartMsg"), myVariant);

	UA_Int32 valRep = 5;
	UA_Variant_setScalarCopy(myVariant, &valRep, &UA_TYPES[UA_TYPES_INT32]);
	UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/Startchar"), myVariant);*/
}


void CMFCOPCUAClientDlg::OnBnClickedBtstop()
{
	// TODO: Add your control notification handler code here
}


void CMFCOPCUAClientDlg::OnBnClickedBtch1()
{
	
	//AfxMessageBox(_T("Please open user client to send start request first"), MB_OK | MB_ICONINFORMATION);
	
	
	// TODO: Add your control notification handler code here
	SetTimer(TIMERCOUNT, 10, NULL);
	
	

}


void CMFCOPCUAClientDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	if (nIDEvent == TIMERCOUNT)
	{
		//Get Control Command


			/*dPos = dPos + 2.5;
			strPos.Format(_T("%f"), dPos);
			edPos.SetWindowText(strPos);
			UA_Double valPos = 0;
			valPos = _tstof(strPos);
			UA_Variant_setScalarCopy(myVariant, &valPos, &UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/Position"), myVariant);*/

		UA_Client_readValueAttribute(client, UA_NODEID("ns=4;s=Robot1/CMDSend"), &value);
		blen = getlength(&value);
		strCmd = get_str_to_variant(&value);
		strCmd.resize(blen);
		CString CstrCmd(strCmd.c_str());
		edName.SetWindowText(CstrCmd);
		if (strCmd != "No Command Sent yet")
		{
			strCmd = MakeCrc(strCmd);
			CMD = GetCmd(strCmd);
			CString cstrCMD(CMD.c_str());
			edPos.SetWindowText(cstrCMD);
			CString cstr(strCmd.c_str());
			/*CRC = GetCrc(strCmd);
			cstr.Format("%cACK,OK;%d%c", STX, CRC, ETX);
			UA_Variant_setScalarCopy(myVariant, &UA_String_fromChars(cstr), &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot2/Name"), myVariant);*/




			if (CMD == "SVON")
			{
				Arg[1] = GetServoStt(strCmd);
				strPos.Format(_T("%d"), Arg[1]);
				edMode.SetWindowText(strPos);

				CRC = GetCrc(strCmd);
				cstr.Format("%cACK,OK;%d%c", STX, CRC, ETX);
				UA_Variant_setScalarCopy(myVariant, &UA_String_fromChars(cstr), &UA_TYPES[UA_TYPES_STRING]);
				UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/CMDAck"), myVariant);
			}
			else if (CMD == "JOGJ")
			{
				Arg[1] = GetCoord(strCmd);
				strPos.Format(_T("%d"), Arg[1]);
				edMode.SetWindowText(strPos);
				Arg[2] = GetJoint(strCmd);
				strStt.Format(_T("%d"), Arg[2]);
				edStt.SetWindowText(strStt);
				Arg[3] = GetDirection(strCmd);
				strTemp.Format(_T("%d"), Arg[3]);
				edTemp.SetWindowText(strTemp);

				CRC = GetCrc(strCmd);
				cstr.Format("%cACK,OK;%d%c", STX, CRC, ETX);
				UA_Variant_setScalarCopy(myVariant, &UA_String_fromChars(cstr), &UA_TYPES[UA_TYPES_STRING]);
				UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/CMDAck"), myVariant);
			}
			else if (CMD == "STOP")
			{
				Arg[1] = GetJoint1(strCmd);
				strPos.Format(_T("%d"), Arg[1]);
				edMode.SetWindowText(strPos);

				CRC = GetCrc(strCmd);
				cstr.Format("%cACK,OK;%d%c", STX, CRC, ETX);
				UA_Variant_setScalarCopy(myVariant, &UA_String_fromChars(cstr), &UA_TYPES[UA_TYPES_STRING]);
				UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/CMDAck"), myVariant);
			}
			else if (CMD == "SPED")
			{
				Arg[1] = GetSpeed(strCmd);
				strPos.Format(_T("%d"), Arg[1]);
				edMode.SetWindowText(strPos);
				CRC = GetCrc(strCmd);
				cstr.Format("%cACK,OK;%d%c", STX, CRC, ETX);
				UA_Variant_setScalarCopy(myVariant, &UA_String_fromChars(cstr), &UA_TYPES[UA_TYPES_STRING]);
				UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/CMDAck"), myVariant);
			}
			else if (CMD == "ASMW")
			{
				std::string strCMD = GetCMD(strCmd);
				std::string Cmdtxt = Gettxt(strCMD);
				Cmdtxt = Gettxt1(Cmdtxt);
				Arg[1] = GetCurline(strCMD);


				if (cnt == Arg[1])
				{
					ProgramCommand ProgCmd;
					ProgCmd.recordProgramCommand(Cmdtxt);
					cnt++;

					CRC = GetCrc(strCmd);
					cstr.Format("%cACK,OK;%d%c", STX, CRC, ETX);
					UA_Variant_setScalarCopy(myVariant, &UA_String_fromChars(cstr), &UA_TYPES[UA_TYPES_STRING]);
					UA_Client_writeValueAttribute(client, UA_NODEID("ns=4;s=Robot1/CMDAck"), myVariant);
				}

				if (cnt != (Arg[1] + 1))
				{
					cnt = 1;
					ProgramCommand ProgCmd;
					ProgCmd.clearProgramCommand();
				}


			}
		}
		



	}
	CDialogEx::OnTimer(nIDEvent);
}




