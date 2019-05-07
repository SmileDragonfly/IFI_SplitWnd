#pragma once


// CFromRight dialog

class CFromRight : public CDialogEx
{
	DECLARE_DYNAMIC(CFromRight)

public:
	CFromRight(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CFromRight();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORM_RIGHT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
