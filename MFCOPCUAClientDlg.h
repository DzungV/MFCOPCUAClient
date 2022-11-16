
// MFCOPCUAClientDlg.h : header file
//

#pragma once
#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>
#include <open62541/client_subscriptions.h>
#include <open62541/plugin/log_stdout.h>
#include <open62541/types_generated.h>
#include <open62541/types.h>
#define TIMERCOUNT 100 


// CMFCOPCUAClientDlg dialog
class CMFCOPCUAClientDlg : public CDialogEx
{
// Construction
public:
	CMFCOPCUAClientDlg(CWnd* pParent = nullptr);	// standard constructor
	
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCOPCUACLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit ceTimeStamp;
	CEdit ceName;
	CEdit cePosition;
	CEdit ceMode;
	CEdit ceStatus;
	CEdit ceTemperature;
	CButton btnStart;
	CButton btnStop;
	CEdit edMode;
	CEdit edName;
	CEdit edPos;
	CEdit edStt;
	CEdit edTemp;
	afx_msg void OnBnClickedBtstart();
	CStatic stSttMsg;
	afx_msg void OnBnClickedBtstop();
	CButton btnChData;
	afx_msg void OnBnClickedBtch1();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnEnChangeEdpos();
};
