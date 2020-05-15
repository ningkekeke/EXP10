
// mainView.h : CmainView 类的接口
//

#pragma once


class CmainView : public CView
{
protected: // 仅从序列化创建
	CmainView();
	DECLARE_DYNCREATE(CmainView)

// 特性
public:
	CmainDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CmainView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // mainView.cpp 中的调试版本
inline CmainDoc* CmainView::GetDocument() const
   { return reinterpret_cast<CmainDoc*>(m_pDocument); }
#endif

