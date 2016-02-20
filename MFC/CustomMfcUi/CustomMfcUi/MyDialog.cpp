// MyDialog.cpp : implementation file
//

#include "stdafx.h"
#include "MyDialog.h"
#include "afxdialogex.h"

// CMyDialog dialog

IMPLEMENT_DYNAMIC(CMyDialog, CDialog)

CMyDialog::CMyDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDialog::IDD, pParent)
{
}

CMyDialog::~CMyDialog()
{
}

void CMyDialog::DoDataExchange(CDataExchange* pDX)
{
  CDialog::DoDataExchange(pDX);
  DDX_Control(pDX, IDC_MYLIST, myListBox);
}

BEGIN_MESSAGE_MAP(CMyDialog, CDialog)
  ON_WM_ACTIVATE()
END_MESSAGE_MAP()

// CMyDialog message handlers

void CMyDialog::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
  CDialog::OnActivate(nState, pWndOther, bMinimized);

  // TODO: Add your message handler code here
  myListBox.AddString(L"Item1");
  myListBox.AddString(L"Item2");
  myListBox.AddString(L"Item3");
}
