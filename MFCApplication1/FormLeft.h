#pragma once


// CFormLeft dialog

class CFormLeft : public CDialogEx
{
	DECLARE_DYNAMIC(CFormLeft)

public:
	CFormLeft(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CFormLeft();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORM_LEFT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
