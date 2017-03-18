{ Parsed from UIKit.framework UICollectionView.h }

{ Types from UICollectionView }
{$ifdef TYPES}



{$endif}


{$ifdef TYPES}
type
  UICollectionViewFocusUpdateContextPtr = ^UICollectionViewFocusUpdateContext;
  UICollectionViewPtr = ^UICollectionView;
  UICollectionViewDataSourceProtocolPtr = ^UICollectionViewDataSourceProtocol;
  UICollectionViewDataSourcePrefetchingProtocolPtr = ^UICollectionViewDataSourcePrefetchingProtocol;
  UICollectionViewDelegateProtocolPtr = ^UICollectionViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UICollectionViewScrollPosition = NSUInteger;
  UICollectionViewScrollPositionPtr = ^UICollectionViewScrollPosition;

const
  UICollectionViewScrollPositionNone = 0;
  UICollectionViewScrollPositionTop = 1 shl 0;
  UICollectionViewScrollPositionCenteredVertically = 1 shl 1;
  UICollectionViewScrollPositionBottom = 1 shl 2;
  UICollectionViewScrollPositionLeft = 1 shl 3;
  UICollectionViewScrollPositionCenteredHorizontally = 1 shl 4;
  UICollectionViewScrollPositionRight = 1 shl 5;

type
  UICollectionViewLayoutInteractiveTransitionCompletion = OpaqueCBlock { available in 9_0 };
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewFocusUpdateContext = objcclass external (UIFocusUpdateContext)
  public
    function previouslyFocusedIndexPath: NSIndexPath; message 'previouslyFocusedIndexPath';
    function nextFocusedIndexPath: NSIndexPath; message 'nextFocusedIndexPath';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UICollectionViewDataSourceProtocol = objcprotocol external name 'UICollectionViewDataSource' (NSObjectProtocol)
  required
    function collectionView_numberOfItemsInSection (collectionView: UICollectionView; section: NSInteger): NSInteger; message 'collectionView:numberOfItemsInSection:';
    function collectionView_cellForItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): __kindof UICollectionViewCellPtr; message 'collectionView:cellForItemAtIndexPath:';
  optional
    function numberOfSectionsInCollectionView (collectionView: UICollectionView): NSInteger; message 'numberOfSectionsInCollectionView:';
    function collectionView_viewForSupplementaryElementOfKind_atIndexPath (collectionView: UICollectionView; kind: NSString; indexPath: NSIndexPath): UICollectionReusableView; message 'collectionView:viewForSupplementaryElementOfKind:atIndexPath:';
    function collectionView_canMoveItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:canMoveItemAtIndexPath:'; { available in 9_0 }
    procedure collectionView_moveItemAtIndexPath_toIndexPath (collectionView: UICollectionView; sourceIndexPath: NSIndexPath; destinationIndexPath: NSIndexPath); message 'collectionView:moveItemAtIndexPath:toIndexPath:'; { available in 9_0 }
  end;

type
  UICollectionViewDataSourcePrefetchingProtocol = objcprotocol external name 'UICollectionViewDataSourcePrefetching' (NSObjectProtocol)
  required
    procedure collectionView_prefetchItemsAtIndexPaths (collectionView: UICollectionView; indexPaths: NSIndexPath *ProtocolPtr); message 'collectionView:prefetchItemsAtIndexPaths:'; { available in 10_0 }
  optional
    procedure collectionView_cancelPrefetchingForItemsAtIndexPaths (collectionView: UICollectionView; indexPaths: NSIndexPath *ProtocolPtr); message 'collectionView:cancelPrefetchingForItemsAtIndexPaths:'; { available in 10_0 }
  end;

type
  UICollectionViewDelegateProtocol = objcprotocol external name 'UICollectionViewDelegate' (UIScrollViewDelegateProtocol)
  optional
    function collectionView_shouldHighlightItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldHighlightItemAtIndexPath:';
    procedure collectionView_didHighlightItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didHighlightItemAtIndexPath:';
    procedure collectionView_didUnhighlightItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didUnhighlightItemAtIndexPath:';
    function collectionView_shouldSelectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldSelectItemAtIndexPath:';
    function collectionView_shouldDeselectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldDeselectItemAtIndexPath:';
    procedure collectionView_didSelectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didSelectItemAtIndexPath:';
    procedure collectionView_didDeselectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didDeselectItemAtIndexPath:';
    procedure collectionView_willDisplayCell_forItemAtIndexPath (collectionView: UICollectionView; cell: UICollectionViewCell; indexPath: NSIndexPath); message 'collectionView:willDisplayCell:forItemAtIndexPath:'; { available in 8_0 }
    procedure collectionView_willDisplaySupplementaryView_forElementKind_atIndexPath (collectionView: UICollectionView; view: UICollectionReusableView; elementKind: NSString; indexPath: NSIndexPath); message 'collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:'; { available in 8_0 }
    procedure collectionView_didEndDisplayingCell_forItemAtIndexPath (collectionView: UICollectionView; cell: UICollectionViewCell; indexPath: NSIndexPath); message 'collectionView:didEndDisplayingCell:forItemAtIndexPath:';
    procedure collectionView_didEndDisplayingSupplementaryView_forElementOfKind_atIndexPath (collectionView: UICollectionView; view: UICollectionReusableView; elementKind: NSString; indexPath: NSIndexPath); message 'collectionView:didEndDisplayingSupplementaryView:forElementOfKind:atIndexPath:';
    function collectionView_shouldShowMenuForItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldShowMenuForItemAtIndexPath:';
    function collectionView_canPerformAction_forItemAtIndexPath_withSender (collectionView: UICollectionView; action: SEL; indexPath: NSIndexPath; sender: nullable id): boolean; message 'collectionView:canPerformAction:forItemAtIndexPath:withSender:';
    procedure collectionView_performAction_forItemAtIndexPath_withSender (collectionView: UICollectionView; action: SEL; indexPath: NSIndexPath; sender: nullable id); message 'collectionView:performAction:forItemAtIndexPath:withSender:';
    function collectionView_transitionLayoutForOldLayout_newLayout (collectionView: UICollectionView; fromLayout: UICollectionViewLayout; toLayout: UICollectionViewLayout): nonnull UICollectionViewTransitionLayoutPtr; message 'collectionView:transitionLayoutForOldLayout:newLayout:';
    function collectionView_canFocusItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:canFocusItemAtIndexPath:'; { available in 9_0 }
    function collectionView_shouldUpdateFocusInContext (collectionView: UICollectionView; context: UICollectionViewFocusUpdateContext): boolean; message 'collectionView:shouldUpdateFocusInContext:'; { available in 9_0 }
    procedure collectionView_didUpdateFocusInContext_withAnimationCoordinator (collectionView: UICollectionView; context: UICollectionViewFocusUpdateContext; coordinator: UIFocusAnimationCoordinator); message 'collectionView:didUpdateFocusInContext:withAnimationCoordinator:'; { available in 9_0 }
    function indexPathForPreferredFocusedViewInCollectionView (collectionView: UICollectionView): nullable NSIndexPathPtr; message 'indexPathForPreferredFocusedViewInCollectionView:'; { available in 9_0 }
    function collectionView_targetIndexPathForMoveFromItemAtIndexPath_toProposedIndexPath (collectionView: UICollectionView; originalIndexPath: NSIndexPath; proposedIndexPath: NSIndexPath): NSIndexPath; message 'collectionView:targetIndexPathForMoveFromItemAtIndexPath:toProposedIndexPath:'; { available in 9_0 }
    function collectionView_targetContentOffsetForProposedContentOffset (collectionView: UICollectionView; proposedContentOffset: CGPoint): CGPoint; message 'collectionView:targetContentOffsetForProposedContentOffset:'; { available in 9_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UICollectionView = objcclass external (UIScrollView)
  public
    function initWithFrame_collectionViewLayout (frame: CGRect; layout: UICollectionViewLayout): instancetype; message 'initWithFrame:collectionViewLayout:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setCollectionViewLayout(newValue: UICollectionViewLayout); message 'setCollectionViewLayout:';
    function collectionViewLayout: UICollectionViewLayout; message 'collectionViewLayout';
    procedure setDelegate(newValue: UICollectionViewDelegateProtocol); message 'setDelegate:';
    function delegate: UICollectionViewDelegateProtocol; message 'delegate';
    procedure setDataSource(newValue: UICollectionViewDataSourceProtocol); message 'setDataSource:';
    function dataSource: UICollectionViewDataSourceProtocol; message 'dataSource';
    procedure setPrefetchDataSource(newValue: UICollectionViewDataSourcePrefetchingProtocol); message 'setPrefetchDataSource:';
    function prefetchDataSource: UICollectionViewDataSourcePrefetchingProtocol; message 'prefetchDataSource';
    procedure setPrefetchingEnabled(newValue: boolean); message 'setPrefetchingEnabled:';
    function isPrefetchingEnabled: boolean; message 'isPrefetchingEnabled';
    procedure setBackgroundView(newValue: UIView); message 'setBackgroundView:';
    function backgroundView: UIView; message 'backgroundView';
    procedure registerClass_forCellWithReuseIdentifier (cellClass: nullable Class; identifier: NSString); message 'registerClass:forCellWithReuseIdentifier:';
    procedure registerNib_forCellWithReuseIdentifier (nib: nullable UINibPtr; identifier: NSString); message 'registerNib:forCellWithReuseIdentifier:';
    procedure registerClass_forSupplementaryViewOfKind_withReuseIdentifier (viewClass: nullable Class; elementKind: NSString; identifier: NSString); message 'registerClass:forSupplementaryViewOfKind:withReuseIdentifier:';
    procedure registerNib_forSupplementaryViewOfKind_withReuseIdentifier (nib: nullable UINibPtr; kind: NSString; identifier: NSString); message 'registerNib:forSupplementaryViewOfKind:withReuseIdentifier:';
    function dequeueReusableCellWithReuseIdentifier_forIndexPath (identifier: NSString; indexPath: NSIndexPath): __kindof UICollectionViewCellPtr; message 'dequeueReusableCellWithReuseIdentifier:forIndexPath:';
    function dequeueReusableSupplementaryViewOfKind_withReuseIdentifier_forIndexPath (elementKind: NSString; identifier: NSString; indexPath: NSIndexPath): __kindof UICollectionReusableViewPtr; message 'dequeueReusableSupplementaryViewOfKind:withReuseIdentifier:forIndexPath:';
    procedure setAllowsSelection(newValue: boolean); message 'setAllowsSelection:';
    function allowsSelection: boolean; message 'allowsSelection';
    procedure setAllowsMultipleSelection(newValue: boolean); message 'setAllowsMultipleSelection:';
    function allowsMultipleSelection: boolean; message 'allowsMultipleSelection';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function indexPathsForSelectedItems: NSIndexPath *ProtocolPtr; message 'indexPathsForSelectedItems';
    {$else}
    function indexPathsForSelectedItems: nullable NSIndexPath *ProtocolPtr; message 'indexPathsForSelectedItems';
    {$endif}
    procedure selectItemAtIndexPath_animated_scrollPosition (indexPath: nullable NSIndexPathPtr; animated: boolean; scrollPosition: UICollectionViewScrollPosition); message 'selectItemAtIndexPath:animated:scrollPosition:';
    procedure deselectItemAtIndexPath_animated (indexPath: NSIndexPath; animated: boolean); message 'deselectItemAtIndexPath:animated:';
    procedure reloadData; message 'reloadData';
    procedure setCollectionViewLayout_animated (layout: UICollectionViewLayout; animated: boolean); message 'setCollectionViewLayout:animated:';
    procedure setCollectionViewLayout_animated_completion (layout: UICollectionViewLayout; animated: boolean; completion: void (^ __nullable)(BOOL finished)); message 'setCollectionViewLayout:animated:completion:'; { available in 7_0 }
    function startInteractiveTransitionToCollectionViewLayout_completion (layout: UICollectionViewLayout; completion: nullable UICollectionViewLayoutInteractiveTransitionCompletion): UICollectionViewTransitionLayout; message 'startInteractiveTransitionToCollectionViewLayout:completion:'; { available in 7_0 }
    procedure finishInteractiveTransition; message 'finishInteractiveTransition'; { available in 7_0 }
    procedure cancelInteractiveTransition; message 'cancelInteractiveTransition'; { available in 7_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function numberOfSections: NSInteger; message 'numberOfSections';
    {$else}
    function numberOfSections: NSInteger; message 'numberOfSections';
    {$endif}
    function numberOfItemsInSection (section: NSInteger): NSInteger; message 'numberOfItemsInSection:';
    function layoutAttributesForItemAtIndexPath (indexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'layoutAttributesForItemAtIndexPath:';
    function layoutAttributesForSupplementaryElementOfKind_atIndexPath (kind: NSString; indexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'layoutAttributesForSupplementaryElementOfKind:atIndexPath:';
    function indexPathForItemAtPoint (point: CGPoint): nullable NSIndexPathPtr; message 'indexPathForItemAtPoint:';
    function indexPathForCell (cell: UICollectionViewCell): nullable NSIndexPathPtr; message 'indexPathForCell:';
    function cellForItemAtIndexPath (indexPath: NSIndexPath): nullable UICollectionViewCellPtr; message 'cellForItemAtIndexPath:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function visibleCells: __kindof UICollectionViewCell *ProtocolPtr; message 'visibleCells';
    function indexPathsForVisibleItems: NSIndexPath *ProtocolPtr; message 'indexPathsForVisibleItems';
    {$else}
    function visibleCells: __kindof UICollectionViewCell *ProtocolPtr; message 'visibleCells';
    function indexPathsForVisibleItems: NSIndexPath *ProtocolPtr; message 'indexPathsForVisibleItems';
    {$endif}
    function supplementaryViewForElementKind_atIndexPath (elementKind: NSString; indexPath: NSIndexPath): nullable UICollectionReusableViewPtr; message 'supplementaryViewForElementKind:atIndexPath:'; { available in 9_0 }
    function visibleSupplementaryViewsOfKind (elementKind: NSString): UICollectionReusableView *ProtocolPtr; message 'visibleSupplementaryViewsOfKind:'; { available in 9_0 }
    function indexPathsForVisibleSupplementaryElementsOfKind (elementKind: NSString): NSIndexPath *ProtocolPtr; message 'indexPathsForVisibleSupplementaryElementsOfKind:'; { available in 9_0 }
    procedure scrollToItemAtIndexPath_atScrollPosition_animated (indexPath: NSIndexPath; scrollPosition: UICollectionViewScrollPosition; animated: boolean); message 'scrollToItemAtIndexPath:atScrollPosition:animated:';
    procedure insertSections (sections: NSIndexSet); message 'insertSections:';
    procedure deleteSections (sections: NSIndexSet); message 'deleteSections:';
    procedure reloadSections (sections: NSIndexSet); message 'reloadSections:';
    procedure moveSection_toSection (section: NSInteger; newSection: NSInteger); message 'moveSection:toSection:';
    procedure insertItemsAtIndexPaths (indexPaths: NSIndexPath *ProtocolPtr); message 'insertItemsAtIndexPaths:';
    procedure deleteItemsAtIndexPaths (indexPaths: NSIndexPath *ProtocolPtr); message 'deleteItemsAtIndexPaths:';
    procedure reloadItemsAtIndexPaths (indexPaths: NSIndexPath *ProtocolPtr); message 'reloadItemsAtIndexPaths:';
    procedure moveItemAtIndexPath_toIndexPath (indexPath: NSIndexPath; newIndexPath: NSIndexPath); message 'moveItemAtIndexPath:toIndexPath:';
    procedure performBatchUpdates_completion (updates: void (^ __nullable)(void); completion: void (^ __nullable)(BOOL finished)); message 'performBatchUpdates:completion:';
    function beginInteractiveMovementForItemAtIndexPath (indexPath: NSIndexPath): boolean; message 'beginInteractiveMovementForItemAtIndexPath:'; { available in 9_0 }
    procedure updateInteractiveMovementTargetPosition (targetPosition: CGPoint); message 'updateInteractiveMovementTargetPosition:'; { available in 9_0 }
    procedure endInteractiveMovement; message 'endInteractiveMovement'; { available in 9_0 }
    procedure cancelInteractiveMovement; message 'cancelInteractiveMovement'; { available in 9_0 }
    procedure setRemembersLastFocusedIndexPath(newValue: boolean); message 'setRemembersLastFocusedIndexPath:';
    function remembersLastFocusedIndexPath: boolean; message 'remembersLastFocusedIndexPath';
  end;


type
  NSIndexPath_UICollectionViewAdditions = objccategory external name 'UICollectionViewAdditions' (NSIndexPath)
    class function indexPathForItem_inSection (item: NSInteger; section: NSInteger): instancetype; message 'indexPathForItem:inSection:'; { available in 6_0 }
    function item: NSInteger; message 'item';
  end;
{$endif}

