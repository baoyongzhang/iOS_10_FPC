{ Parsed from UIKit.framework UIScrollView.h }

{$ifdef TYPES}
type
  UIScrollViewPtr = ^UIScrollView;
  UIScrollViewDelegateProtocolPtr = ^UIScrollViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIScrollViewIndicatorStyle = NSInteger;
  UIScrollViewIndicatorStylePtr = ^UIScrollViewIndicatorStyle;

const
  UIScrollViewIndicatorStyleDefault = 0;
  UIScrollViewIndicatorStyleBlack = 1;
  UIScrollViewIndicatorStyleWhite = 2;

type
  UIScrollViewKeyboardDismissMode = NSInteger;
  UIScrollViewKeyboardDismissModePtr = ^UIScrollViewKeyboardDismissMode;

const
  UIScrollViewKeyboardDismissModeNone = 0;
  UIScrollViewKeyboardDismissModeOnDrag = 1;
  UIScrollViewKeyboardDismissModeInteractive = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIScrollViewDecelerationRateNormal: CGFloat { available in 3_0 }; cvar; external;
  UIScrollViewDecelerationRateFast: CGFloat { available in 3_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIScrollView = objcclass external (UIView, NSCodingProtocol)
  public
    procedure setContentOffset(newValue: CGPoint); message 'setContentOffset:';
    function contentOffset: CGPoint; message 'contentOffset';
    procedure setContentSize(newValue: CGSize); message 'setContentSize:';
    function contentSize: CGSize; message 'contentSize';
    procedure setContentInset(newValue: UIEdgeInsets); message 'setContentInset:';
    function contentInset: UIEdgeInsets; message 'contentInset';
    procedure setDelegate(newValue: UIScrollViewDelegateProtocol); message 'setDelegate:';
    function delegate: UIScrollViewDelegateProtocol; message 'delegate';
    procedure setDirectionalLockEnabled(newValue: boolean); message 'setDirectionalLockEnabled:';
    function isDirectionalLockEnabled: boolean; message 'isDirectionalLockEnabled';
    procedure setBounces(newValue: boolean); message 'setBounces:';
    function bounces: boolean; message 'bounces';
    procedure setAlwaysBounceVertical(newValue: boolean); message 'setAlwaysBounceVertical:';
    function alwaysBounceVertical: boolean; message 'alwaysBounceVertical';
    procedure setAlwaysBounceHorizontal(newValue: boolean); message 'setAlwaysBounceHorizontal:';
    function alwaysBounceHorizontal: boolean; message 'alwaysBounceHorizontal';
    procedure set__TVOS_PROHIBITED(newValue: BOOL pagingEnabled); message 'set__TVOS_PROHIBITED:';
    function isPagingEnabled: BOOL pagingEnabled; message 'isPagingEnabled';
    procedure setScrollEnabled(newValue: boolean); message 'setScrollEnabled:';
    function isScrollEnabled: boolean; message 'isScrollEnabled';
    procedure setShowsHorizontalScrollIndicator(newValue: boolean); message 'setShowsHorizontalScrollIndicator:';
    function showsHorizontalScrollIndicator: boolean; message 'showsHorizontalScrollIndicator';
    procedure setShowsVerticalScrollIndicator(newValue: boolean); message 'setShowsVerticalScrollIndicator:';
    function showsVerticalScrollIndicator: boolean; message 'showsVerticalScrollIndicator';
    procedure setScrollIndicatorInsets(newValue: UIEdgeInsets); message 'setScrollIndicatorInsets:';
    function scrollIndicatorInsets: UIEdgeInsets; message 'scrollIndicatorInsets';
    procedure setIndicatorStyle(newValue: UIScrollViewIndicatorStyle); message 'setIndicatorStyle:';
    function indicatorStyle: UIScrollViewIndicatorStyle; message 'indicatorStyle';
    procedure setDecelerationRate(newValue: CGFloat); message 'setDecelerationRate:';
    function decelerationRate: CGFloat; message 'decelerationRate';
    procedure setContentOffset_animated (contentOffset_: CGPoint; animated: boolean); message 'setContentOffset:animated:';
    procedure scrollRectToVisible_animated (rect: CGRect; animated: boolean); message 'scrollRectToVisible:animated:';
    procedure flashScrollIndicators; message 'flashScrollIndicators';
    function isTracking: boolean; message 'isTracking';
    function isDragging: boolean; message 'isDragging';
    function isDecelerating: boolean; message 'isDecelerating';
    procedure setDelaysContentTouches(newValue: boolean); message 'setDelaysContentTouches:';
    function delaysContentTouches: boolean; message 'delaysContentTouches';
    procedure setCanCancelContentTouches(newValue: boolean); message 'setCanCancelContentTouches:';
    function canCancelContentTouches: boolean; message 'canCancelContentTouches';
    function touchesShouldBegin_withEvent_inContentView (touches: UITouch *ProtocolPtr; event: nullable UIEventPtr; view: UIView): boolean; message 'touchesShouldBegin:withEvent:inContentView:';
    function touchesShouldCancelInContentView (view: UIView): boolean; message 'touchesShouldCancelInContentView:';
    procedure setMinimumZoomScale(newValue: CGFloat); message 'setMinimumZoomScale:';
    function minimumZoomScale: CGFloat; message 'minimumZoomScale';
    procedure setMaximumZoomScale(newValue: CGFloat); message 'setMaximumZoomScale:';
    function maximumZoomScale: CGFloat; message 'maximumZoomScale';
    procedure setZoomScale(newValue: CGFloat); message 'setZoomScale:';
    function zoomScale: CGFloat; message 'zoomScale';
    procedure setZoomScale_animated (scale: CGFloat; animated: boolean); message 'setZoomScale:animated:'; { available in 3_0 }
    procedure zoomToRect_animated (rect: CGRect; animated: boolean); message 'zoomToRect:animated:'; { available in 3_0 }
    procedure setBouncesZoom(newValue: boolean); message 'setBouncesZoom:';
    function bouncesZoom: boolean; message 'bouncesZoom';
    function isZooming: boolean; message 'isZooming';
    function isZoomBouncing: boolean; message 'isZoomBouncing';
    procedure set__TVOS_PROHIBITED_(newValue: BOOL scrollsToTop); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: BOOL scrollsToTop; message 'TVOS_PROHIBITED';
    function panGestureRecognizer: UIPanGestureRecognizer; message 'panGestureRecognizer';
    function pinchGestureRecognizer: UIPinchGestureRecognizer; message 'pinchGestureRecognizer';
    function directionalPressGestureRecognizer: UIGestureRecognizer; message 'directionalPressGestureRecognizer';
    procedure setKeyboardDismissMode(newValue: UIScrollViewKeyboardDismissMode); message 'setKeyboardDismissMode:';
    function keyboardDismissMode: UIScrollViewKeyboardDismissMode; message 'keyboardDismissMode';
    procedure set__TVOS_PROHIBITED__(newValue: UIRefreshControl *refreshControl); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIRefreshControl *refreshControl; message 'TVOS_PROHIBITED';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIScrollViewDelegateProtocol = objcprotocol external name 'UIScrollViewDelegate' (NSObjectProtocol)
  optional
    procedure scrollViewDidScroll (scrollView: UIScrollView); message 'scrollViewDidScroll:';
    procedure scrollViewDidZoom (scrollView: UIScrollView); message 'scrollViewDidZoom:'; { available in 3_2 }
    procedure scrollViewWillBeginDragging (scrollView: UIScrollView); message 'scrollViewWillBeginDragging:';
    procedure scrollViewWillEndDragging_withVelocity_targetContentOffset (scrollView: UIScrollView; velocity: CGPoint; targetContentOffset: CGPointPtr); message 'scrollViewWillEndDragging:withVelocity:targetContentOffset:'; { available in 5_0 }
    procedure scrollViewDidEndDragging_willDecelerate (scrollView: UIScrollView; decelerate: boolean); message 'scrollViewDidEndDragging:willDecelerate:';
    procedure scrollViewWillBeginDecelerating (scrollView: UIScrollView); message 'scrollViewWillBeginDecelerating:';
    procedure scrollViewDidEndDecelerating (scrollView: UIScrollView); message 'scrollViewDidEndDecelerating:';
    procedure scrollViewDidEndScrollingAnimation (scrollView: UIScrollView); message 'scrollViewDidEndScrollingAnimation:';
    function viewForZoomingInScrollView (scrollView: UIScrollView): UIViewPtr; message 'viewForZoomingInScrollView:';
    procedure scrollViewWillBeginZooming_withView (scrollView: UIScrollView; view: UIViewPtr); message 'scrollViewWillBeginZooming:withView:'; { available in 3_2 }
    procedure scrollViewDidEndZooming_withView_atScale (scrollView: UIScrollView; view: UIViewPtr; scale: CGFloat); message 'scrollViewDidEndZooming:withView:atScale:';
    function scrollViewShouldScrollToTop (scrollView: UIScrollView): boolean; message 'scrollViewShouldScrollToTop:';
    procedure scrollViewDidScrollToTop (scrollView: UIScrollView); message 'scrollViewDidScrollToTop:';
  end;
{$endif}

