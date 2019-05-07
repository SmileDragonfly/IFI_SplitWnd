// FormLeft.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "FormLeft.h"
#include "afxdialogex.h"


// CFormLeft dialog

IMPLEMENT_DYNAMIC(CFormLeft, CDialogEx)

CFormLeft::CFormLeft(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_FORM_LEFT, pParent)
{

}

CFormLeft::~CFormLeft()
{
}

void CFormLeft::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFormLeft, CDialogEx)
END_MESSAGE_MAP()


// CFormLeft message handlers
