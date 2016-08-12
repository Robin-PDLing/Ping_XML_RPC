
// Ping_XML_RPCDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"


// CPing_XML_RPCDlg 对话框
class CPing_XML_RPCDlg : public CDialog
{
// 构造
public:
	CPing_XML_RPCDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_PING_XML_RPC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	// 控制状态
	void ControlStateControl( BOOL nBool );
	BOOL IsBegin( VOID );

	// 初始化URL数量
	void InitListURLNumber( );
	LRESULT InitListURLNumber( WPARAM wParam, LPARAM lParam );
	LRESULT ChangeListURLNumber( WPARAM wParam, LPARAM lParam );
	LRESULT ChangStat(WPARAM wParam, LPARAM lParam);
	LRESULT ChangeListURLNumberThreadError(WPARAM wParam, LPARAM lParam);// 整个线程失败_
public:
	// 保存List中数字信息
	UINT m_ArrayListNumber[5][3];
	// 是否运行
	BOOL m_bIsRun;

	// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// 启动的线程数量
	UINT m_nThreadNumber;
	// 数据列表
	CListCtrl m_wndListCtrl;
	// 文件路径
	CString m_strFilePath;

	afx_msg void OnBnClickedBegin();
	afx_msg void OnBnClickedEnd();
	afx_msg void OnBnClickedOpenfile();
	afx_msg void OnCheckButton( UINT nID );
	afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg void OnClose();
protected:
    virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
public:
    afx_msg void OnDestroy();
    virtual INT_PTR DoModal();
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
    virtual BOOL PreTranslateMessage(MSG* pMsg);
    virtual void WinHelp(DWORD dwData, UINT nCmd = HELP_CONTEXT);
};
