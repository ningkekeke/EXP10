
// mainView.cpp : CmainView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "main.h"
#endif

#include "win32.h"
#include "win.h"
#include "mainDoc.h"
#include "mainView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmainView

IMPLEMENT_DYNCREATE(CmainView, CView)

BEGIN_MESSAGE_MAP(CmainView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CmainView ����/����

CmainView::CmainView()
{
	// TODO: �ڴ˴���ӹ������

}

CmainView::~CmainView()
{
}

BOOL CmainView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CmainView ����

void CmainView::OnDraw(CDC* pDC)
{
	CmainDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	/*CString s; FAC w1;
	int t = w1.factorial(5);
	s.Format(_T("5�Ľ׳�ֵΪ��%d"),t);
	pDC->TextOutW(200, 150, s);
	float t1 = w1.convert(30.0);
	s.Format(_T("30��Ļ���Ϊ��%f"), t1);
	pDC->TextOutW(200, 200, s);*/ //��̬���ӿ�
	CString s; 
	s.Format(_T("5�Ľ׳�ֵΪ��%d"), factorial(5));
	pDC->TextOutW(200, 150, s);
	s.Format(_T("30��Ļ���Ϊ��%f"), convert(30.0));
	pDC->TextOutW(200, 200, s);//��̬���ӿ�
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CmainView ��ӡ

BOOL CmainView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CmainView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CmainView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CmainView ���

#ifdef _DEBUG
void CmainView::AssertValid() const
{
	CView::AssertValid();
}

void CmainView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmainDoc* CmainView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmainDoc)));
	return (CmainDoc*)m_pDocument;
}
#endif //_DEBUG


// CmainView ��Ϣ�������
