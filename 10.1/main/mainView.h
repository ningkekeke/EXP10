
// mainView.h : CmainView ��Ľӿ�
//

#pragma once


class CmainView : public CView
{
protected: // �������л�����
	CmainView();
	DECLARE_DYNCREATE(CmainView)

// ����
public:
	CmainDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CmainView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // mainView.cpp �еĵ��԰汾
inline CmainDoc* CmainView::GetDocument() const
   { return reinterpret_cast<CmainDoc*>(m_pDocument); }
#endif

