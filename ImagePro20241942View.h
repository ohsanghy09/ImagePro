
// ImagePro20241942View.h: CImagePro20241942View 클래스의 인터페이스
//

#pragma once


class CImagePro20241942View : public CScrollView
{
protected: // serialization에서만 만들어집니다.
	CImagePro20241942View() noexcept;
	DECLARE_DYNCREATE(CImagePro20241942View)

// 특성입니다.
public:
	CImagePro20241942Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CImagePro20241942View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTest();
	afx_msg void OnTest32772();
	afx_msg void OnTestView();
};

#ifndef _DEBUG  // ImagePro20241942View.cpp의 디버그 버전
inline CImagePro20241942Doc* CImagePro20241942View::GetDocument() const
   { return reinterpret_cast<CImagePro20241942Doc*>(m_pDocument); }
#endif

