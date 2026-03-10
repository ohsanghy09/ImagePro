
// ImagePro20241942View.cpp: CImagePro20241942View 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "ImagePro20241942.h"
#endif

#include "ImagePro20241942Doc.h"
#include "ImagePro20241942View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImagePro20241942View

IMPLEMENT_DYNCREATE(CImagePro20241942View, CScrollView)

BEGIN_MESSAGE_MAP(CImagePro20241942View, CScrollView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CScrollView::OnFilePrintPreview)
	ON_COMMAND(ID_TEST, &CImagePro20241942View::OnTest)
	ON_COMMAND(ID_TEST32773, &CImagePro20241942View::OnTestView)
END_MESSAGE_MAP()

// CImagePro20241942View 생성/소멸

CImagePro20241942View::CImagePro20241942View() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CImagePro20241942View::~CImagePro20241942View()
{
}

BOOL CImagePro20241942View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CScrollView::PreCreateWindow(cs);
}

// CImagePro20241942View 그리기

void CImagePro20241942View::OnDraw(CDC* pDC) //pDC를 사용해서 화면에 그리기 사용
{
	CImagePro20241942Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;


	pDC->TextOutA(100, 100, "첫번째 영상처리프로그램 예제입니다."); // 화면 그리기 예제

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}

void CImagePro20241942View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: 이 뷰의 전체 크기를 계산합니다.
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}


// CImagePro20241942View 인쇄

BOOL CImagePro20241942View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CImagePro20241942View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CImagePro20241942View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CImagePro20241942View 진단

#ifdef _DEBUG
void CImagePro20241942View::AssertValid() const
{
	CScrollView::AssertValid();
}

void CImagePro20241942View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CImagePro20241942Doc* CImagePro20241942View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImagePro20241942Doc)));
	return (CImagePro20241942Doc*)m_pDocument;
}
#endif //_DEBUG


// CImagePro20241942View 메시지 처리기

void CImagePro20241942View::OnTest()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	AfxMessageBox("테스트메뉴가 눌렸습니다.");
}

void CImagePro20241942View::OnTestView()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	AfxMessageBox("테스트메뉴가 눌렸습니다.");
}
