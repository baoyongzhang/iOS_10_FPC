{ Parsed from UIKit.framework UITableView.h }

{$ifdef TYPES}
type
  UITableViewRowActionPtr = ^UITableViewRowAction;
  UITableViewFocusUpdateContextPtr = ^UITableViewFocusUpdateContext;
  UITableViewPtr = ^UITableView;
  UITableViewDelegateProtocolPtr = ^UITableViewDelegateProtocol;
  UITableViewDataSourceProtocolPtr = ^UITableViewDataSourceProtocol;
  UITableViewDataSourcePrefetchingProtocolPtr = ^UITableViewDataSourcePrefetchingProtocol;
{$endif}

{$ifdef TYPES}
type
  UITableViewStyle = NSInteger;
  UITableViewStylePtr = ^UITableViewStyle;

const
  UITableViewStylePlain = 0;
  UITableViewStyleGrouped = 1;

type
  UITableViewScrollPosition = NSInteger;
  UITableViewScrollPositionPtr = ^UITableViewScrollPosition;

const
  UITableViewScrollPositionNone = 0;
  UITableViewScrollPositionTop = 1;
  UITableViewScrollPositionMiddle = 2;
  UITableViewScrollPositionBottom = 3;

type
  UITableViewRowAnimation = NSInteger;
  UITableViewRowAnimationPtr = ^UITableViewRowAnimation;

const
  UITableViewRowAnimationFade = 0;
  UITableViewRowAnimationRight = 1;
  UITableViewRowAnimationLeft = 2;
  UITableViewRowAnimationTop = 3;
  UITableViewRowAnimationBottom = 4;
  UITableViewRowAnimationNone = 5;
  UITableViewRowAnimationMiddle = 6;
  UITableViewRowAnimationAutomatic = 100;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *UITableViewIndexSearch { available in 3_0 }; cvar; external;
  UITableViewAutomaticDimension: CGFloat { available in 5_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UITableViewRowActionStyle = NSInteger;
  UITableViewRowActionStylePtr = ^UITableViewRowActionStyle;

const
  UITableViewRowActionStyleDefault = 0;
  UITableViewRowActionStyleDestructive = UITableViewRowActionStyleDefault;
  UITableViewRowActionStyleNormal = 1;
{$endif}

{$ifdef CLASSES}

type
  UITableViewRowAction = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function rowActionWithStyle_title_handler (style: UITableViewRowActionStyle; title: nullable NSStringPtr; handler: OpaqueCBlock): instancetype; message 'rowActionWithStyle:title:handler:';
    function style: UITableViewRowActionStyle; message 'style';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setBackgroundColor(newValue: UIColor); message 'setBackgroundColor:';
    function backgroundColor: UIColor; message 'backgroundColor';
    procedure setBackgroundEffect(newValue: UIVisualEffect); message 'setBackgroundEffect:';
    function backgroundEffect: UIVisualEffect; message 'backgroundEffect';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  UITableViewFocusUpdateContext = objcclass external (UIFocusUpdateContext)
  public
    function previouslyFocusedIndexPath: NSIndexPath; message 'previouslyFocusedIndexPath';
    function nextFocusedIndexPath: NSIndexPath; message 'nextFocusedIndexPath';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITableViewDelegateProtocol = objcprotocol external name 'UITableViewDelegate' (NSObjectProtocol, UIScrollViewDelegateProtocol)
  optional
    procedure tableView_willDisplayCell_forRowAtIndexPath (tableView: UITableView; cell: UITableViewCell; indexPath: NSIndexPath); message 'tableView:willDisplayCell:forRowAtIndexPath:';
    procedure tableView_willDisplayHeaderView_forSection (tableView: UITableView; view: UIView; section: NSInteger); message 'tableView:willDisplayHeaderView:forSection:'; { available in 6_0 }
    procedure tableView_willDisplayFooterView_forSection (tableView: UITableView; view: UIView; section: NSInteger); message 'tableView:willDisplayFooterView:forSection:'; { available in 6_0 }
    procedure tableView_didEndDisplayingCell_forRowAtIndexPath (tableView: UITableView; cell: UITableViewCell; indexPath: NSIndexPath); message 'tableView:didEndDisplayingCell:forRowAtIndexPath:'; { available in 6_0 }
    procedure tableView_didEndDisplayingHeaderView_forSection (tableView: UITableView; view: UIView; section: NSInteger); message 'tableView:didEndDisplayingHeaderView:forSection:'; { available in 6_0 }
    procedure tableView_didEndDisplayingFooterView_forSection (tableView: UITableView; view: UIView; section: NSInteger); message 'tableView:didEndDisplayingFooterView:forSection:'; { available in 6_0 }
    function tableView_heightForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): CGFloat; message 'tableView:heightForRowAtIndexPath:';
    function tableView_heightForHeaderInSection (tableView: UITableView; section: NSInteger): CGFloat; message 'tableView:heightForHeaderInSection:';
    function tableView_heightForFooterInSection (tableView: UITableView; section: NSInteger): CGFloat; message 'tableView:heightForFooterInSection:';
    function tableView_estimatedHeightForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): CGFloat; message 'tableView:estimatedHeightForRowAtIndexPath:'; { available in 7_0 }
    function tableView_estimatedHeightForHeaderInSection (tableView: UITableView; section: NSInteger): CGFloat; message 'tableView:estimatedHeightForHeaderInSection:'; { available in 7_0 }
    function tableView_estimatedHeightForFooterInSection (tableView: UITableView; section: NSInteger): CGFloat; message 'tableView:estimatedHeightForFooterInSection:'; { available in 7_0 }
    function tableView_viewForHeaderInSection (tableView: UITableView; section: NSInteger): nullable UIViewPtr; message 'tableView:viewForHeaderInSection:';
    function tableView_viewForFooterInSection (tableView: UITableView; section: NSInteger): nullable UIViewPtr; message 'tableView:viewForFooterInSection:';
    function tableView_accessoryTypeForRowWithIndexPath (tableView: UITableView; indexPath: NSIndexPath): UITableViewCellAccessoryType; message 'tableView:accessoryTypeForRowWithIndexPath:'; deprecated 'in 2_0, 3_0';
    procedure tableView_accessoryButtonTappedForRowWithIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:accessoryButtonTappedForRowWithIndexPath:';
    function tableView_shouldHighlightRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:shouldHighlightRowAtIndexPath:'; { available in 6_0 }
    procedure tableView_didHighlightRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:didHighlightRowAtIndexPath:'; { available in 6_0 }
    procedure tableView_didUnhighlightRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:didUnhighlightRowAtIndexPath:'; { available in 6_0 }
    function tableView_willSelectRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): nullable NSIndexPathPtr; message 'tableView:willSelectRowAtIndexPath:';
    function tableView_willDeselectRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): nullable NSIndexPathPtr; message 'tableView:willDeselectRowAtIndexPath:'; { available in 3_0 }
    procedure tableView_didSelectRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:didSelectRowAtIndexPath:';
    procedure tableView_didDeselectRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:didDeselectRowAtIndexPath:'; { available in 3_0 }
    function tableView_editingStyleForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): UITableViewCellEditingStyle; message 'tableView:editingStyleForRowAtIndexPath:';
    function tableView_titleForDeleteConfirmationButtonForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): nullable NSStringPtr; message 'tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:'; { available in 3_0 }
    function tableView_editActionsForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): nullable UITableViewRowAction *ProtocolPtr; message 'tableView:editActionsForRowAtIndexPath:'; { available in 8_0 }
    function tableView_shouldIndentWhileEditingRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:shouldIndentWhileEditingRowAtIndexPath:';
    procedure tableView_willBeginEditingRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath); message 'tableView:willBeginEditingRowAtIndexPath:';
    procedure tableView_didEndEditingRowAtIndexPath (tableView: UITableView; indexPath: nullable NSIndexPathPtr); message 'tableView:didEndEditingRowAtIndexPath:';
    function tableView_targetIndexPathForMoveFromRowAtIndexPath_toProposedIndexPath (tableView: UITableView; sourceIndexPath: NSIndexPath; proposedDestinationIndexPath: NSIndexPath): NSIndexPath; message 'tableView:targetIndexPathForMoveFromRowAtIndexPath:toProposedIndexPath:';
    function tableView_indentationLevelForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): NSInteger; message 'tableView:indentationLevelForRowAtIndexPath:';
    function tableView_shouldShowMenuForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:shouldShowMenuForRowAtIndexPath:'; { available in 5_0 }
    function tableView_canPerformAction_forRowAtIndexPath_withSender (tableView: UITableView; action: SEL; indexPath: NSIndexPath; sender: nullable id): boolean; message 'tableView:canPerformAction:forRowAtIndexPath:withSender:'; { available in 5_0 }
    procedure tableView_performAction_forRowAtIndexPath_withSender (tableView: UITableView; action: SEL; indexPath: NSIndexPath; sender: nullable id); message 'tableView:performAction:forRowAtIndexPath:withSender:'; { available in 5_0 }
    function tableView_canFocusRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:canFocusRowAtIndexPath:'; { available in 9_0 }
    function tableView_shouldUpdateFocusInContext (tableView: UITableView; context: UITableViewFocusUpdateContext): boolean; message 'tableView:shouldUpdateFocusInContext:'; { available in 9_0 }
    procedure tableView_didUpdateFocusInContext_withAnimationCoordinator (tableView: UITableView; context: UITableViewFocusUpdateContext; coordinator: UIFocusAnimationCoordinator); message 'tableView:didUpdateFocusInContext:withAnimationCoordinator:'; { available in 9_0 }
    function indexPathForPreferredFocusedViewInTableView (tableView: UITableView): nullable NSIndexPathPtr; message 'indexPathForPreferredFocusedViewInTableView:'; { available in 9_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UITableViewSelectionDidChangeNotification: NSNotificationName { available in 2_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UITableView = objcclass external (UIScrollView, NSCodingProtocol)
  public
    function initWithFrame_style (frame: CGRect; style: UITableViewStyle): instancetype; message 'initWithFrame:style:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function style: UITableViewStyle; message 'style';
    procedure setDataSource(newValue: UITableViewDataSourceProtocol); message 'setDataSource:';
    function dataSource: UITableViewDataSourceProtocol; message 'dataSource';
    procedure setDelegate(newValue: UITableViewDelegateProtocol); message 'setDelegate:';
    function delegate: UITableViewDelegateProtocol; message 'delegate';
    procedure setPrefetchDataSource(newValue: UITableViewDataSourcePrefetchingProtocol); message 'setPrefetchDataSource:';
    function prefetchDataSource: UITableViewDataSourcePrefetchingProtocol; message 'prefetchDataSource';
    procedure setRowHeight(newValue: CGFloat); message 'setRowHeight:';
    function rowHeight: CGFloat; message 'rowHeight';
    procedure setSectionHeaderHeight(newValue: CGFloat); message 'setSectionHeaderHeight:';
    function sectionHeaderHeight: CGFloat; message 'sectionHeaderHeight';
    procedure setSectionFooterHeight(newValue: CGFloat); message 'setSectionFooterHeight:';
    function sectionFooterHeight: CGFloat; message 'sectionFooterHeight';
    procedure setEstimatedRowHeight(newValue: CGFloat); message 'setEstimatedRowHeight:';
    function estimatedRowHeight: CGFloat; message 'estimatedRowHeight';
    procedure setEstimatedSectionHeaderHeight(newValue: CGFloat); message 'setEstimatedSectionHeaderHeight:';
    function estimatedSectionHeaderHeight: CGFloat; message 'estimatedSectionHeaderHeight';
    procedure setEstimatedSectionFooterHeight(newValue: CGFloat); message 'setEstimatedSectionFooterHeight:';
    function estimatedSectionFooterHeight: CGFloat; message 'estimatedSectionFooterHeight';
    procedure setSeparatorInset(newValue: UIEdgeInsets); message 'setSeparatorInset:';
    function separatorInset: UIEdgeInsets; message 'separatorInset';
    procedure setBackgroundView(newValue: UIView); message 'setBackgroundView:';
    function backgroundView: UIView; message 'backgroundView';
    procedure reloadData; message 'reloadData';
    procedure reloadSectionIndexTitles; message 'reloadSectionIndexTitles'; { available in 3_0 }
    function numberOfSections: NSInteger; message 'numberOfSections';
    function numberOfRowsInSection (section: NSInteger): NSInteger; message 'numberOfRowsInSection:';
    function rectForSection (section: NSInteger): CGRect; message 'rectForSection:';
    function rectForHeaderInSection (section: NSInteger): CGRect; message 'rectForHeaderInSection:';
    function rectForFooterInSection (section: NSInteger): CGRect; message 'rectForFooterInSection:';
    function rectForRowAtIndexPath (indexPath: NSIndexPath): CGRect; message 'rectForRowAtIndexPath:';
    function indexPathForRowAtPoint (point: CGPoint): nullable NSIndexPathPtr; message 'indexPathForRowAtPoint:';
    function indexPathForCell (cell: UITableViewCell): nullable NSIndexPathPtr; message 'indexPathForCell:';
    function indexPathsForRowsInRect (rect: CGRect): nullable NSIndexPath *ProtocolPtr; message 'indexPathsForRowsInRect:';
    function cellForRowAtIndexPath (indexPath: NSIndexPath): nullable __kindof UITableViewCellPtr; message 'cellForRowAtIndexPath:';
    function visibleCells: __kindof UITableViewCell *ProtocolPtr; message 'visibleCells';
    function indexPathsForVisibleRows: NSIndexPath *ProtocolPtr; message 'indexPathsForVisibleRows';
    function headerViewForSection (section: NSInteger): nullable UITableViewHeaderFooterViewPtr; message 'headerViewForSection:'; { available in 6_0 }
    function footerViewForSection (section: NSInteger): nullable UITableViewHeaderFooterViewPtr; message 'footerViewForSection:'; { available in 6_0 }
    procedure scrollToRowAtIndexPath_atScrollPosition_animated (indexPath: NSIndexPath; scrollPosition: UITableViewScrollPosition; animated: boolean); message 'scrollToRowAtIndexPath:atScrollPosition:animated:';
    procedure scrollToNearestSelectedRowAtScrollPosition_animated (scrollPosition: UITableViewScrollPosition; animated: boolean); message 'scrollToNearestSelectedRowAtScrollPosition:animated:';
    procedure beginUpdates; message 'beginUpdates';
    procedure endUpdates; message 'endUpdates';
    procedure insertSections_withRowAnimation (sections: NSIndexSet; animation: UITableViewRowAnimation); message 'insertSections:withRowAnimation:';
    procedure deleteSections_withRowAnimation (sections: NSIndexSet; animation: UITableViewRowAnimation); message 'deleteSections:withRowAnimation:';
    procedure reloadSections_withRowAnimation (sections: NSIndexSet; animation: UITableViewRowAnimation); message 'reloadSections:withRowAnimation:'; { available in 3_0 }
    procedure moveSection_toSection (section: NSInteger; newSection: NSInteger); message 'moveSection:toSection:'; { available in 5_0 }
    procedure insertRowsAtIndexPaths_withRowAnimation (indexPaths: NSIndexPath *ProtocolPtr; animation: UITableViewRowAnimation); message 'insertRowsAtIndexPaths:withRowAnimation:';
    procedure deleteRowsAtIndexPaths_withRowAnimation (indexPaths: NSIndexPath *ProtocolPtr; animation: UITableViewRowAnimation); message 'deleteRowsAtIndexPaths:withRowAnimation:';
    procedure reloadRowsAtIndexPaths_withRowAnimation (indexPaths: NSIndexPath *ProtocolPtr; animation: UITableViewRowAnimation); message 'reloadRowsAtIndexPaths:withRowAnimation:'; { available in 3_0 }
    procedure moveRowAtIndexPath_toIndexPath (indexPath: NSIndexPath; newIndexPath: NSIndexPath); message 'moveRowAtIndexPath:toIndexPath:'; { available in 5_0 }
    procedure setEditing(newValue: boolean); message 'setEditing:';
    function isEditing: boolean; message 'isEditing';
    procedure setEditing_animated (editing: boolean; animated: boolean); message 'setEditing:animated:';
    procedure setAllowsSelection(newValue: boolean); message 'setAllowsSelection:';
    function allowsSelection: boolean; message 'allowsSelection';
    procedure setAllowsSelectionDuringEditing(newValue: boolean); message 'setAllowsSelectionDuringEditing:';
    function allowsSelectionDuringEditing: boolean; message 'allowsSelectionDuringEditing';
    procedure setAllowsMultipleSelection(newValue: boolean); message 'setAllowsMultipleSelection:';
    function allowsMultipleSelection: boolean; message 'allowsMultipleSelection';
    procedure setAllowsMultipleSelectionDuringEditing(newValue: boolean); message 'setAllowsMultipleSelectionDuringEditing:';
    function allowsMultipleSelectionDuringEditing: boolean; message 'allowsMultipleSelectionDuringEditing';
    function indexPathForSelectedRow: NSIndexPath; message 'indexPathForSelectedRow';
    function indexPathsForSelectedRows: NSIndexPath *ProtocolPtr; message 'indexPathsForSelectedRows';
    procedure selectRowAtIndexPath_animated_scrollPosition (indexPath: nullable NSIndexPathPtr; animated: boolean; scrollPosition: UITableViewScrollPosition); message 'selectRowAtIndexPath:animated:scrollPosition:';
    procedure deselectRowAtIndexPath_animated (indexPath: NSIndexPath; animated: boolean); message 'deselectRowAtIndexPath:animated:';
    procedure setSectionIndexMinimumDisplayRowCount(newValue: NSInteger); message 'setSectionIndexMinimumDisplayRowCount:';
    function sectionIndexMinimumDisplayRowCount: NSInteger; message 'sectionIndexMinimumDisplayRowCount';
    procedure setSectionIndexColor(newValue: UIColor); message 'setSectionIndexColor:';
    function sectionIndexColor: UIColor; message 'sectionIndexColor';
    procedure setSectionIndexBackgroundColor(newValue: UIColor); message 'setSectionIndexBackgroundColor:';
    function sectionIndexBackgroundColor: UIColor; message 'sectionIndexBackgroundColor';
    procedure setSectionIndexTrackingBackgroundColor(newValue: UIColor); message 'setSectionIndexTrackingBackgroundColor:';
    function sectionIndexTrackingBackgroundColor: UIColor; message 'sectionIndexTrackingBackgroundColor';
    procedure set__TVOS_PROHIBITED(newValue: UITableViewCellSeparatorStyle separatorStyle); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UITableViewCellSeparatorStyle separatorStyle; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: UIColor *separatorColor); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIColor *separatorColor; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: UIVisualEffect *separatorEffect); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: UIVisualEffect *separatorEffect; message 'TVOS_PROHIBITED';
    procedure setCellLayoutMarginsFollowReadableWidth(newValue: boolean); message 'setCellLayoutMarginsFollowReadableWidth:';
    function cellLayoutMarginsFollowReadableWidth: boolean; message 'cellLayoutMarginsFollowReadableWidth';
    procedure setTableHeaderView(newValue: UIView); message 'setTableHeaderView:';
    function tableHeaderView: UIView; message 'tableHeaderView';
    procedure setTableFooterView(newValue: UIView); message 'setTableFooterView:';
    function tableFooterView: UIView; message 'tableFooterView';
    function dequeueReusableCellWithIdentifier (identifier: NSString): nullable __kindof UITableViewCellPtr; message 'dequeueReusableCellWithIdentifier:';
    function dequeueReusableCellWithIdentifier_forIndexPath (identifier: NSString; indexPath: NSIndexPath): __kindof UITableViewCellPtr; message 'dequeueReusableCellWithIdentifier:forIndexPath:'; { available in 6_0 }
    function dequeueReusableHeaderFooterViewWithIdentifier (identifier: NSString): nullable __kindof UITableViewHeaderFooterViewPtr; message 'dequeueReusableHeaderFooterViewWithIdentifier:'; { available in 6_0 }
    procedure registerNib_forCellReuseIdentifier (nib: nullable UINibPtr; identifier: NSString); message 'registerNib:forCellReuseIdentifier:'; { available in 5_0 }
    procedure registerClass_forCellReuseIdentifier (cellClass: nullable Class; identifier: NSString); message 'registerClass:forCellReuseIdentifier:'; { available in 6_0 }
    procedure registerNib_forHeaderFooterViewReuseIdentifier (nib: nullable UINibPtr; identifier: NSString); message 'registerNib:forHeaderFooterViewReuseIdentifier:'; { available in 6_0 }
    procedure registerClass_forHeaderFooterViewReuseIdentifier (aClass: nullable Class; identifier: NSString); message 'registerClass:forHeaderFooterViewReuseIdentifier:'; { available in 6_0 }
    procedure setRemembersLastFocusedIndexPath(newValue: boolean); message 'setRemembersLastFocusedIndexPath:';
    function remembersLastFocusedIndexPath: boolean; message 'remembersLastFocusedIndexPath';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITableViewDataSourceProtocol = objcprotocol external name 'UITableViewDataSource' (NSObjectProtocol)
  required
    function tableView_numberOfRowsInSection (tableView: UITableView; section: NSInteger): NSInteger; message 'tableView:numberOfRowsInSection:';
    function tableView_cellForRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): UITableViewCell; message 'tableView:cellForRowAtIndexPath:';
  optional
    function numberOfSectionsInTableView (tableView: UITableView): NSInteger; message 'numberOfSectionsInTableView:';
    function tableView_titleForHeaderInSection (tableView: UITableView; section: NSInteger): nullable NSStringPtr; message 'tableView:titleForHeaderInSection:';
    function tableView_titleForFooterInSection (tableView: UITableView; section: NSInteger): nullable NSStringPtr; message 'tableView:titleForFooterInSection:';
    function tableView_canEditRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:canEditRowAtIndexPath:';
    function tableView_canMoveRowAtIndexPath (tableView: UITableView; indexPath: NSIndexPath): boolean; message 'tableView:canMoveRowAtIndexPath:';
    function sectionIndexTitlesForTableView (tableView: UITableView): nullable NSString *ProtocolPtr; message 'sectionIndexTitlesForTableView:';
    function tableView_sectionForSectionIndexTitle_atIndex (tableView: UITableView; title: NSString; index: NSInteger): NSInteger; message 'tableView:sectionForSectionIndexTitle:atIndex:';
    procedure tableView_commitEditingStyle_forRowAtIndexPath (tableView: UITableView; editingStyle: UITableViewCellEditingStyle; indexPath: NSIndexPath); message 'tableView:commitEditingStyle:forRowAtIndexPath:';
    procedure tableView_moveRowAtIndexPath_toIndexPath (tableView: UITableView; sourceIndexPath: NSIndexPath; destinationIndexPath: NSIndexPath); message 'tableView:moveRowAtIndexPath:toIndexPath:';
  end;

type
  UITableViewDataSourcePrefetchingProtocol = objcprotocol external name 'UITableViewDataSourcePrefetching' (NSObjectProtocol)
  required
    procedure tableView_prefetchRowsAtIndexPaths (tableView: UITableView; indexPaths: NSIndexPath *ProtocolPtr); message 'tableView:prefetchRowsAtIndexPaths:';
  optional
    procedure tableView_cancelPrefetchingForRowsAtIndexPaths (tableView: UITableView; indexPaths: NSIndexPath *ProtocolPtr); message 'tableView:cancelPrefetchingForRowsAtIndexPaths:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSIndexPath_UITableView = objccategory external name 'UITableView' (NSIndexPath)
    class function indexPathForRow_inSection (row: NSInteger; section: NSInteger): instancetype; message 'indexPathForRow:inSection:';
    function section: NSInteger; message 'section';
    function row: NSInteger; message 'row';
  end;
{$endif}

