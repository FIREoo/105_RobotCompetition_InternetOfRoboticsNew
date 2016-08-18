
// MFC_SystemDlg.h : 標頭檔
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include"..//Kinect2Capture//Kinect2Capture.h"
#include "CvvImage.h"
struct CMythreadParam
{
public:
	HWND hWnd;
	LPVOID m_lpPara;
	UINT   m_case;
	BOOL m_blthreading;
};
// CMFC_SystemDlg 對話方塊
class CMFC_SystemDlg : public CDialogEx
{
// 建構
public:
	CMFC_SystemDlg(CWnd* pParent = NULL);	// 標準建構函式

// 對話方塊資料
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_SYSTEM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	HICON m_hIcon;

	// 產生的訊息對應函式
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void ShowImage(IplImage * Image, CWnd * pWnd, int channels);
	/*******************************/
	static UINT MythreadFun(LPVOID LParam);
	void Thread_Image_Depth(LPVOID lParam);
	void Thread_Image_RGB(LPVOID lParam);
	CMythreadParam m_threadPara;
	CWinThread*  m_lpThread;
	/*********************************/
	static IplImage* img_rgbS;
	static IplImage* img_depthS;

	/**********************************/
	CStatic m_Img_RGBLive;
	CStatic m_Img_DepthLive;
	CTabCtrl m_Tab;
	afx_msg void OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
