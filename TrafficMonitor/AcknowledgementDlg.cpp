// AcknowledgementDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "TrafficMonitor.h"
#include "AcknowledgementDlg.h"
#include "afxdialogex.h"


// CAcknowledgementDlg 对话框

IMPLEMENT_DYNAMIC(CAcknowledgementDlg, CDialog)

CAcknowledgementDlg::CAcknowledgementDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_ACKNOWLEDGEMENT_DIALOG, pParent)
{

}

CAcknowledgementDlg::~CAcknowledgementDlg()
{
}

void CAcknowledgementDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

void CAcknowledgementDlg::GetResourceString()
{
	HRSRC hRes = FindResource(NULL, MAKEINTRESOURCE(IDR_ACKNOWLEDGEMENT_TEXT), _T("TEXT"));
	if (hRes != NULL)
	{
		HGLOBAL hglobal = LoadResource(NULL, hRes);
		if (hglobal != NULL)
			m_donate_list.Format(_T("%s"), (LPVOID)hglobal);
	}
}


BEGIN_MESSAGE_MAP(CAcknowledgementDlg, CDialog)
END_MESSAGE_MAP()


// CAcknowledgementDlg 消息处理程序


BOOL CAcknowledgementDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化
	GetResourceString();
		SetDlgItemText(IDC_EDIT1, m_donate_list);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


BOOL CAcknowledgementDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类

	return CDialog::PreTranslateMessage(pMsg);
}
