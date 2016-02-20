// CustomMfcUi.h : main header file for the CustomMfcUi DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include "MyDialog.h"

void showDialog();

// CCustomMfcUiApp
// See CustomMfcUi.cpp for the implementation of this class
//

class CCustomMfcUiApp : public CWinApp
{
public:
	CCustomMfcUiApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};



