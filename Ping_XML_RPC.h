
// Ping_XML_RPC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CPing_XML_RPCApp:
// �йش����ʵ�֣������ Ping_XML_RPC.cpp
//

class CPing_XML_RPCApp : public CWinAppEx
{
public:
	CPing_XML_RPCApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CPing_XML_RPCApp theApp;