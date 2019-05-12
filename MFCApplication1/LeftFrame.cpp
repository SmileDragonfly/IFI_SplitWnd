#include "stdafx.h"
#include "LeftFrame.h"


CLeftFrame::CLeftFrame()
{
}


CLeftFrame::~CLeftFrame()
{
}
BEGIN_MESSAGE_MAP(CLeftFrame, CFrameWnd)
    ON_WM_CREATE()
END_MESSAGE_MAP()


int CLeftFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
    if (CWnd::OnCreate(lpCreateStruct) == -1)
        return -1;

    // TODO:  Add your specialized creation code here

    return 0;
}


BOOL CLeftFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
    // TODO: Add your specialized code here and/or call the base class

    return CFrameWnd::OnCreateClient(lpcs, pContext);
}
