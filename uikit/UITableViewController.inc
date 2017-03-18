{ Parsed from UIKit.framework UITableViewController.h }

{$ifdef TYPES}
type
  UITableViewControllerPtr = ^UITableViewController;
{$endif}

{$ifdef CLASSES}

type
  UITableViewController = objcclass external (UIViewController, UITableViewDelegateProtocol, UITableViewDataSourceProtocol)
  public
    function initWithStyle (style: UITableViewStyle): instancetype; message 'initWithStyle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithNibName_bundle (nibNameOrNil: nullable NSStringPtr; nibBundleOrNil: nullable NSBundlePtr): instancetype; message 'initWithNibName:bundle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTableView(newValue: UITableView); message 'setTableView:';
    function tableView: UITableView; message 'tableView';
    procedure setClearsSelectionOnViewWillAppear(newValue: boolean); message 'setClearsSelectionOnViewWillAppear:';
    function clearsSelectionOnViewWillAppear: boolean; message 'clearsSelectionOnViewWillAppear';
    procedure set__TVOS_PROHIBITED(newValue: UIRefreshControl *refreshControl); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIRefreshControl *refreshControl; message 'TVOS_PROHIBITED';

    { Adopted protocols }
    function indexPathForPreferredFocusedViewInTableView (tableView: UITableView): nullable NSIndexPathPtr; message 'indexPathForPreferredFocusedViewInTableView:'; { available in 9_0 }
    function numberOfSectionsInTableView (tableView: UITableView): NSInteger; message 'numberOfSectionsInTableView:';
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
    function sectionIndexTitlesForTableView (tableView: UITableView): nullable NSString *ProtocolPtr; message 'sectionIndexTitlesForTableView:';
    procedure tableView_accessoryButtonTappedForRowWithIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:accessoryButtonTappedForRowWithIndexPath:';
    function tableView_accessoryTypeForRowWithIndexPath (tableView: UITableView; indexPath: NSIndexPath): UITableViewCellAccessoryType; message 'tableView:accessoryTypeForRowWithIndexPath:'; deprecated 'in 2_0, 3_0';
    function tableView_canEditRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:canEditRowAtIndexPath:';
    function tableView_canFocusRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:canFocusRowAtIndexPath:'; { available in 9_0 }
    function tableView_canMoveRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:canMoveRowAtIndexPath:';
    function tableView_canPerformAction_forRowAtIndexPath_withSender (tableView: UITableView; action: SEL; indexPath: NSIndexPath; sender: nullable id): boolean; message 'tableView:canPerformAction:forRowAtIndexPath:withSender:'; { available in 5_0 }
    function tableView_cellForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): UITableViewCell; message 'tableView:cellForRowAtIndexPath:';
    procedure tableView_commitEditingStyle_forRowAtIndexPath (tableView: UITableView; editingStyle: UITableViewCellEditingStyle; indexPath: NSIndexPath); message 'tableView:commitEditingStyle:forRowAtIndexPath:';
    procedure tableView_didDeselectRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:didDeselectRowAtIndexPath:'; { available in 3_0 }
    procedure tableView_didEndDisplayingCell_forRowAtIndexPath (tableView: UITableView; cell: UITableViewCell; indexPath: NSIndexPath); message 'tableView:didEndDisplayingCell:forRowAtIndexPath:'; { available in 6_0 }
    procedure tableView_didEndDisplayingFooterView_forSection (tableView: UITableView; view: UIView; section: NSInteger); message 'tableView:didEndDisplayingFooterView:forSection:'; { available in 6_0 }
    procedure tableView_didEndDisplayingHeaderView_forSection (tableView: UITableView; view: UIView; section: NSInteger); message 'tableView:didEndDisplayingHeaderView:forSection:'; { available in 6_0 }
    procedure tableView_didEndEditingRowAtIndexPath (tableView: UITableView; indexPath: nullable NSIndexPathPtr); message 'tableView:didEndEditingRowAtIndexPath:';
    procedure tableView_didHighlightRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:didHighlightRowAtIndexPath:'; { available in 6_0 }
    procedure tableView_didSelectRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:didSelectRowAtIndexPath:';
    procedure tableView_didUnhighlightRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:didUnhighlightRowAtIndexPath:'; { available in 6_0 }
    procedure tableView_didUpdateFocusInContext_withAnimationCoordinator (tableView: UITableView; context: UITableViewFocusUpdateContext; coordinator: UIFocusAnimationCoordinator); message 'tableView:didUpdateFocusInContext:withAnimationCoordinator:'; { available in 9_0 }
    function tableView_editActionsForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): nullable UITableViewRowAction *ProtocolPtr; message 'tableView:editActionsForRowAtIndexPath:'; { available in 8_0 }
    function tableView_editingStyleForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): UITableViewCellEditingStyle; message 'tableView:editingStyleForRowAtIndexPath:';
    function tableView_estimatedHeightForFooterInSection (tableView: UITableView; section: NSInteger): CGFloat; message 'tableView:estimatedHeightForFooterInSection:'; { available in 7_0 }
    function tableView_estimatedHeightForHeaderInSection (tableView: UITableView; section: NSInteger): CGFloat; message 'tableView:estimatedHeightForHeaderInSection:'; { available in 7_0 }
    function tableView_estimatedHeightForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): CGFloat; message 'tableView:estimatedHeightForRowAtIndexPath:'; { available in 7_0 }
    function tableView_heightForFooterInSection (tableView: UITableView; section: NSInteger): CGFloat; message 'tableView:heightForFooterInSection:';
    function tableView_heightForHeaderInSection (tableView: UITableView; section: NSInteger): CGFloat; message 'tableView:heightForHeaderInSection:';
    function tableView_heightForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): CGFloat; message 'tableView:heightForRowAtIndexPath:';
    function tableView_indentationLevelForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): NSInteger; message 'tableView:indentationLevelForRowAtIndexPath:';
    procedure tableView_moveRowAtIndexPath_toIndexPath (tableView: UITableView; sourceIndexPath: NSIndexPath; destinationIndexPath: NSIndexPath); message 'tableView:moveRowAtIndexPath:toIndexPath:';
    function tableView_numberOfRowsInSection (tableView: UITableView; section: NSInteger): NSInteger; message 'tableView:numberOfRowsInSection:';
    procedure tableView_performAction_forRowAtIndexPath_withSender (tableView: UITableView; action: SEL; indexPath: NSIndexPath; sender: nullable id); message 'tableView:performAction:forRowAtIndexPath:withSender:'; { available in 5_0 }
    function tableView_sectionForSectionIndexTitle_atIndex (tableView: UITableView; title: NSString; index: NSInteger): NSInteger; message 'tableView:sectionForSectionIndexTitle:atIndex:';
    function tableView_shouldHighlightRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:shouldHighlightRowAtIndexPath:'; { available in 6_0 }
    function tableView_shouldIndentWhileEditingRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:shouldIndentWhileEditingRowAtIndexPath:';
    function tableView_shouldShowMenuForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:shouldShowMenuForRowAtIndexPath:'; { available in 5_0 }
    function tableView_shouldUpdateFocusInContext (tableView: UITableView; context: UITableViewFocusUpdateContext): boolean; message 'tableView:shouldUpdateFocusInContext:'; { available in 9_0 }
    function tableView_targetIndexPathForMoveFromRowAtIndexPath_toProposedIndexPath (tableView: UITableView; sourceIndexPath: NSIndexPath; proposedDestinationIndexPath: NSIndexPath): NSIndexPath; message 'tableView:targetIndexPathForMoveFromRowAtIndexPath:toProposedIndexPath:';
    function tableView_titleForDeleteConfirmationButtonForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): nullable NSStringPtr; message 'tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:'; { available in 3_0 }
    function tableView_titleForFooterInSection (tableView: UITableView; section: NSInteger): nullable NSStringPtr; message 'tableView:titleForFooterInSection:';
    function tableView_titleForHeaderInSection (tableView: UITableView; section: NSInteger): nullable NSStringPtr; message 'tableView:titleForHeaderInSection:';
    function tableView_viewForFooterInSection (tableView: UITableView; section: NSInteger): nullable UIViewPtr; message 'tableView:viewForFooterInSection:';
    function tableView_viewForHeaderInSection (tableView: UITableView; section: NSInteger): nullable UIViewPtr; message 'tableView:viewForHeaderInSection:';
    procedure tableView_willBeginEditingRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:willBeginEditingRowAtIndexPath:';
    function tableView_willDeselectRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): nullable NSIndexPathPtr; message 'tableView:willDeselectRowAtIndexPath:'; { available in 3_0 }
    procedure tableView_willDisplayCell_forRowAtIndexPath (tableView: UITableView; cell: UITableViewCell; indexPath: NSIndexPath); message 'tableView:willDisplayCell:forRowAtIndexPath:';
    procedure tableView_willDisplayFooterView_forSection (tableView: UITableView; view: UIView; section: NSInteger); message 'tableView:willDisplayFooterView:forSection:'; { available in 6_0 }
    procedure tableView_willDisplayHeaderView_forSection (tableView: UITableView; view: UIView; section: NSInteger); message 'tableView:willDisplayHeaderView:forSection:'; { available in 6_0 }
    function tableView_willSelectRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): nullable NSIndexPathPtr; message 'tableView:willSelectRowAtIndexPath:';
    function viewForZoomingInScrollView (scrollView: UIScrollView): nullable UIViewPtr; message 'viewForZoomingInScrollView:';
  end;
{$endif}

