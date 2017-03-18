{ Parsed from UIKit.framework UIPageControl.h }

{$ifdef TYPES}
type
  UIPageControlPtr = ^UIPageControl;
{$endif}

{$ifdef CLASSES}

type
  UIPageControl = objcclass external (UIControl)
  public
    procedure setNumberOfPages(newValue: NSInteger); message 'setNumberOfPages:';
    function numberOfPages: NSInteger; message 'numberOfPages';
    procedure setCurrentPage(newValue: NSInteger); message 'setCurrentPage:';
    function currentPage: NSInteger; message 'currentPage';
    procedure setHidesForSinglePage(newValue: boolean); message 'setHidesForSinglePage:';
    function hidesForSinglePage: boolean; message 'hidesForSinglePage';
    procedure setDefersCurrentPageDisplay(newValue: boolean); message 'setDefersCurrentPageDisplay:';
    function defersCurrentPageDisplay: boolean; message 'defersCurrentPageDisplay';
    procedure updateCurrentPageDisplay; message 'updateCurrentPageDisplay';
    function sizeForNumberOfPages (pageCount: NSInteger): CGSize; message 'sizeForNumberOfPages:';
    procedure setPageIndicatorTintColor(newValue: UIColor); message 'setPageIndicatorTintColor:';
    function pageIndicatorTintColor: UIColor; message 'pageIndicatorTintColor';
    procedure setCurrentPageIndicatorTintColor(newValue: UIColor); message 'setCurrentPageIndicatorTintColor:';
    function currentPageIndicatorTintColor: UIColor; message 'currentPageIndicatorTintColor';
  end;
{$endif}

