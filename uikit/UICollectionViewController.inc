{ Parsed from UIKit.framework UICollectionViewController.h }

{$ifdef TYPES}
type
  UICollectionViewControllerPtr = ^UICollectionViewController;
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewController = objcclass external (UIViewController, UICollectionViewDelegateProtocol, UICollectionViewDataSourceProtocol)
  public
    function initWithCollectionViewLayout (layout: UICollectionViewLayout): instancetype; message 'initWithCollectionViewLayout:'; { NS_DESIGNATED_INITIALIZER }
    function initWithNibName_bundle (nibNameOrNil: nullable NSStringPtr; nibBundleOrNil: nullable NSBundlePtr): instancetype; message 'initWithNibName:bundle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setCollectionView(newValue: __kindof UICollectionViewPtr); message 'setCollectionView:';
    function collectionView: __kindof UICollectionViewPtr; message 'collectionView';
    procedure setClearsSelectionOnViewWillAppear(newValue: boolean); message 'setClearsSelectionOnViewWillAppear:';
    function clearsSelectionOnViewWillAppear: boolean; message 'clearsSelectionOnViewWillAppear';
    procedure setUseLayoutToLayoutNavigationTransitions(newValue: boolean); message 'setUseLayoutToLayoutNavigationTransitions:';
    function useLayoutToLayoutNavigationTransitions: boolean; message 'useLayoutToLayoutNavigationTransitions';
    function collectionViewLayout: UICollectionViewLayout; message 'collectionViewLayout';
    procedure setInstallsStandardGestureForInteractiveMovement(newValue: boolean); message 'setInstallsStandardGestureForInteractiveMovement:';
    function installsStandardGestureForInteractiveMovement: boolean; message 'installsStandardGestureForInteractiveMovement';

    { Adopted protocols }
    function collectionView_canFocusItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:canFocusItemAtIndexPath:'; { available in 9_0 }
    function collectionView_canMoveItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:canMoveItemAtIndexPath:'; { available in 9_0 }
    function collectionView_canPerformAction_forItemAtIndexPath_withSender (collectionView: UICollectionView; action: SEL; indexPath: NSIndexPath; sender: nullable id): boolean; message 'collectionView:canPerformAction:forItemAtIndexPath:withSender:';
    function collectionView_cellForItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): __kindof UICollectionViewCellPtr; message 'collectionView:cellForItemAtIndexPath:';
    procedure collectionView_didDeselectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didDeselectItemAtIndexPath:';
    procedure collectionView_didEndDisplayingCell_forItemAtIndexPath (collectionView: UICollectionView; cell: UICollectionViewCell; indexPath: NSIndexPath); message 'collectionView:didEndDisplayingCell:forItemAtIndexPath:';
    procedure collectionView_didEndDisplayingSupplementaryView_forElementOfKind_atIndexPath (collectionView: UICollectionView; view: UICollectionReusableView; elementKind: NSString; indexPath: NSIndexPath); message 'collectionView:didEndDisplayingSupplementaryView:forElementOfKind:atIndexPath:';
    procedure collectionView_didHighlightItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didHighlightItemAtIndexPath:';
    procedure collectionView_didSelectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didSelectItemAtIndexPath:';
    procedure collectionView_didUnhighlightItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didUnhighlightItemAtIndexPath:';
    procedure collectionView_didUpdateFocusInContext_withAnimationCoordinator (collectionView: UICollectionView; context: UICollectionViewFocusUpdateContext; coordinator: UIFocusAnimationCoordinator); message 'collectionView:didUpdateFocusInContext:withAnimationCoordinator:'; { available in 9_0 }
    procedure collectionView_moveItemAtIndexPath_toIndexPath (collectionView: UICollectionView; sourceIndexPath: NSIndexPath; destinationIndexPath: NSIndexPath); message 'collectionView:moveItemAtIndexPath:toIndexPath:'; { available in 9_0 }
    function collectionView_numberOfItemsInSection (collectionView: UICollectionView; section: NSInteger): NSInteger; message 'collectionView:numberOfItemsInSection:';
    procedure collectionView_performAction_forItemAtIndexPath_withSender (collectionView: UICollectionView; action: SEL; indexPath: NSIndexPath; sender: nullable id); message 'collectionView:performAction:forItemAtIndexPath:withSender:';
    function collectionView_shouldDeselectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldDeselectItemAtIndexPath:';
    function collectionView_shouldHighlightItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldHighlightItemAtIndexPath:';
    function collectionView_shouldSelectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldSelectItemAtIndexPath:';
    function collectionView_shouldShowMenuForItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldShowMenuForItemAtIndexPath:';
    function collectionView_shouldUpdateFocusInContext (collectionView: UICollectionView; context: UICollectionViewFocusUpdateContext): boolean; message 'collectionView:shouldUpdateFocusInContext:'; { available in 9_0 }
    function collectionView_targetContentOffsetForProposedContentOffset (collectionView: UICollectionView; proposedContentOffset: CGPoint): CGPoint; message 'collectionView:targetContentOffsetForProposedContentOffset:'; { available in 9_0 }
    function collectionView_targetIndexPathForMoveFromItemAtIndexPath_toProposedIndexPath (collectionView: UICollectionView; originalIndexPath: NSIndexPath; proposedIndexPath: NSIndexPath): NSIndexPath; message 'collectionView:targetIndexPathForMoveFromItemAtIndexPath:toProposedIndexPath:'; { available in 9_0 }
    function collectionView_transitionLayoutForOldLayout_newLayout (collectionView: UICollectionView; fromLayout: UICollectionViewLayout; toLayout: UICollectionViewLayout): nonnull UICollectionViewTransitionLayoutPtr; message 'collectionView:transitionLayoutForOldLayout:newLayout:';
    function collectionView_viewForSupplementaryElementOfKind_atIndexPath (collectionView: UICollectionView; kind: NSString; indexPath: NSIndexPath): UICollectionReusableView; message 'collectionView:viewForSupplementaryElementOfKind:atIndexPath:';
    procedure collectionView_willDisplayCell_forItemAtIndexPath (collectionView: UICollectionView; cell: UICollectionViewCell; indexPath: NSIndexPath); message 'collectionView:willDisplayCell:forItemAtIndexPath:'; { available in 8_0 }
    procedure collectionView_willDisplaySupplementaryView_forElementKind_atIndexPath (collectionView: UICollectionView; view: UICollectionReusableView; elementKind: NSString; indexPath: NSIndexPath); message 'collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:'; { available in 8_0 }
    function indexPathForPreferredFocusedViewInCollectionView (collectionView: UICollectionView): nullable NSIndexPathPtr; message 'indexPathForPreferredFocusedViewInCollectionView:'; { available in 9_0 }
    function numberOfSectionsInCollectionView (collectionView: UICollectionView): NSInteger; message 'numberOfSectionsInCollectionView:';
    procedure scrollViewDidEndDecelerating (scrollView: UIScrollView); message 'scrollViewDidEndDecelerating:';
    procedure scrollViewDidEndDragging_willDecelerate (scrollView: UIScrollView; decelerate: boolean); message 'scrollViewDidEndDragging:willDecelerate:';
    procedure scrollViewDidEndScrollingAnimation (scrollView: UIScrollView); message 'scrollViewDidEndScrollingAnimation:';
    procedure scrollViewDidEndZooming_withView_atScale (scrollView: UIScrollView; view: nullable UIViewPtr; scale: CGFloat); message 'scrollViewDidEndZooming:withView:atScale:';
    procedure scrollViewDidScroll (scrollView: UIScrollView); message 'scrollViewDidScroll:';
    procedure scrollViewDidScrollToTop (scrollView: UIScrollView); message 'scrollViewDidScrollToTop:';
    procedure scrollViewDidZoom (scrollView: UIScrollView); message 'scrollViewDidZoom:'; { available in 3_2 }
    function scrollViewShouldScrollToTop (scrollView: UIScrollView): boolean; message 'scrollViewShouldScrollToTop:';
    procedure scrollViewWillBeginDecelerating (scrollView: UIScrollView); message 'scrollViewWillBeginDecelerating:';
    procedure scrollViewWillBeginDragging (scrollView: UIScrollView); message 'scrollViewWillBeginDragging:';
    procedure scrollViewWillBeginZooming_withView (scrollView: UIScrollView; view: nullable UIViewPtr); message 'scrollViewWillBeginZooming:withView:'; { available in 3_2 }
    procedure scrollViewWillEndDragging_withVelocity_targetContentOffset (scrollView: UIScrollView; velocity: CGPoint; targetContentOffset: CGPointPtr); message 'scrollViewWillEndDragging:withVelocity:targetContentOffset:'; { available in 5_0 }
    function viewForZoomingInScrollView (scrollView: UIScrollView): nullable UIViewPtr; message 'viewForZoomingInScrollView:';
  end;
{$endif}

