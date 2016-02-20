#pragma once

#include "afxwin.h"
#include "resource.h"

// CMyDialog dialog

class CMyDialog : public CDialog
{
	DECLARE_DYNAMIC(CMyDialog)

public:
	CMyDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMyDialog();

// Dialog Data
	enum { IDD = IDD_MYDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
  CListBox myListBox;
  afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
};
