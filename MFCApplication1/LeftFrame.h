#pragma once
#include <afxwin.h>
class CLeftFrame :
    public CFrameWnd
{
public:
    CLeftFrame();
    ~CLeftFrame();
    DECLARE_MESSAGE_MAP()
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
};

