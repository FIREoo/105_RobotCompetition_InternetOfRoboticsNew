
// MFC_System.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CMFC_SystemApp: 
// �аѾ\��@�����O�� MFC_System.cpp
//

class CMFC_SystemApp : public CWinApp
{
public:
	CMFC_SystemApp();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CMFC_SystemApp theApp;