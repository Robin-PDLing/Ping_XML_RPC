
// Ping_XML_RPC.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "Ping_XML_RPC.h"
#include "Ping_XML_RPCDlg.h"
#include <curl/curl.h>

#pragma comment(lib, "ws2_32.lib")  
#pragma comment ( lib, "winmm.lib" )  
#pragma comment ( lib, "wldap32.lib" )  
#ifdef _DEBUG
#pragma comment ( lib, "libcurld.lib" )
#else
#pragma comment ( lib, "libcurl.lib" )
#endif// _DEBUG

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPing_XML_RPCApp

BEGIN_MESSAGE_MAP(CPing_XML_RPCApp, CWinAppEx)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CPing_XML_RPCApp ����

CPing_XML_RPCApp::CPing_XML_RPCApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CPing_XML_RPCApp ����

CPing_XML_RPCApp theApp;


// CPing_XML_RPCApp ��ʼ��

BOOL CPing_XML_RPCApp::InitInstance()
{
	curl_global_init(CURL_GLOBAL_ALL);
#ifdef _DEBUG
    AllocConsole( ); //��ʾ
#endif // _DEBUG



	// ���һ�������� Windows XP �ϵ�Ӧ�ó����嵥ָ��Ҫ
	// ʹ�� ComCtl32.dll �汾 6 ����߰汾�����ÿ��ӻ���ʽ��
	//����Ҫ InitCommonControlsEx()�����򣬽��޷��������ڡ�
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ��������Ϊ��������Ҫ��Ӧ�ó�����ʹ�õ�
	// �����ؼ��ࡣ
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();

	AfxEnableControlContainer();

	// ��׼��ʼ��
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
	// ����Ҫ���ض���ʼ������
	// �������ڴ洢���õ�ע�����
	// TODO: Ӧ�ʵ��޸ĸ��ַ�����
	// �����޸�Ϊ��˾����֯��
	SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));
    
	CPing_XML_RPCDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: �ڴ˷��ô����ʱ��
		//  ��ȷ�������رնԻ���Ĵ���
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: �ڴ˷��ô����ʱ��
		//  ��ȡ�������رնԻ���Ĵ���
	}

	// ���ڶԻ����ѹرգ����Խ����� FALSE �Ա��˳�Ӧ�ó���
	//  ����������Ӧ�ó������Ϣ�á�
	return FALSE;
}
