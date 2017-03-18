{ Parsed from UIKit.framework UICollectionViewLayout.h }

{ Types from UISubclassingHooks }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  UICollectionViewLayoutAttributesPtr = ^UICollectionViewLayoutAttributes;
  UICollectionViewUpdateItemPtr = ^UICollectionViewUpdateItem;
  UICollectionViewLayoutInvalidationContextPtr = ^UICollectionViewLayoutInvalidationContext;
  UICollectionViewLayoutPtr = ^UICollectionViewLayout;
{$endif}

{$ifdef TYPES}
type
  UICollectionElementCategory = NSUInteger;
  UICollectionElementCategoryPtr = ^UICollectionElementCategory;

const
  UICollectionElementCategoryCell = 0;
  UICollectionElementCategorySupplementaryView = 1;
  UICollectionElementCategoryDecorationView = 2;
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewLayoutAttributes = objcclass external (NSObject, NSCopyingProtocol, UIDynamicItemProtocol)
  public
    procedure setFrame(newValue: CGRect); message 'setFrame:';
    function frame: CGRect; message 'frame';
    procedure setCenter(newValue: CGPoint); message 'setCenter:';
    function center: CGPoint; message 'center';
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure setTransform3D(newValue: CATransform3D); message 'setTransform3D:';
    function transform3D: CATransform3D; message 'transform3D';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
    procedure setAlpha(newValue: CGFloat); message 'setAlpha:';
    function alpha: CGFloat; message 'alpha';
    procedure setZIndex(newValue: NSInteger); message 'setZIndex:';
    function zIndex: NSInteger; message 'zIndex';
    procedure setHidden(newValue: boolean); message 'setHidden:';
    function isHidden: boolean; message 'isHidden';
    procedure setIndexPath(newValue: NSIndexPath); message 'setIndexPath:';
    function indexPath: NSIndexPath; message 'indexPath';
    function representedElementCategory: UICollectionElementCategory; message 'representedElementCategory';
    function representedElementKind: NSString; message 'representedElementKind';
    class function layoutAttributesForCellWithIndexPath (indexPath_: NSIndexPath): instancetype; message 'layoutAttributesForCellWithIndexPath:';
    class function layoutAttributesForSupplementaryViewOfKind_withIndexPath (elementKind: NSString; indexPath_: NSIndexPath): instancetype; message 'layoutAttributesForSupplementaryViewOfKind:withIndexPath:';
    class function layoutAttributesForDecorationViewOfKind_withIndexPath (decorationViewKind: NSString; indexPath_: NSIndexPath): instancetype; message 'layoutAttributesForDecorationViewOfKind:withIndexPath:';

    { Adopted protocols }
    function collisionBoundingPath: UIBezierPath; message 'collisionBoundingPath';
    function collisionBoundsType: UIDynamicItemCollisionBoundsType; message 'collisionBoundsType';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  UICollectionUpdateAction = NSInteger;
  UICollectionUpdateActionPtr = ^UICollectionUpdateAction;

const
  UICollectionUpdateActionInsert = 0;
  UICollectionUpdateActionDelete = 1;
  UICollectionUpdateActionReload = 2;
  UICollectionUpdateActionMove = 3;
  UICollectionUpdateActionNone = 4;
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewUpdateItem = objcclass external (NSObject)
  public
    function indexPathBeforeUpdate: NSIndexPath; message 'indexPathBeforeUpdate';
    function indexPathAfterUpdate: NSIndexPath; message 'indexPathAfterUpdate';
    function updateAction: UICollectionUpdateAction; message 'updateAction';
  end;

type
  UICollectionViewLayoutInvalidationContext = objcclass external (NSObject)
  public
    function invalidateEverything: boolean; message 'invalidateEverything';
    function invalidateDataSourceCounts: boolean; message 'invalidateDataSourceCounts';
    procedure invalidateItemsAtIndexPaths (indexPaths: NSIndexPath *ProtocolPtr); message 'invalidateItemsAtIndexPaths:'; { available in 8_0 }
    procedure invalidateSupplementaryElementsOfKind_atIndexPaths (elementKind: NSString; indexPaths: NSIndexPath *ProtocolPtr); message 'invalidateSupplementaryElementsOfKind:atIndexPaths:'; { available in 8_0 }
    procedure invalidateDecorationElementsOfKind_atIndexPaths (elementKind: NSString; indexPaths: NSIndexPath *ProtocolPtr); message 'invalidateDecorationElementsOfKind:atIndexPaths:'; { available in 8_0 }
    function invalidatedItemIndexPaths: NSIndexPath *ProtocolPtr; message 'invalidatedItemIndexPaths';
    function invalidatedSupplementaryIndexPaths: NSDictionary *>Ptr; message 'invalidatedSupplementaryIndexPaths';
    function invalidatedDecorationIndexPaths: NSDictionary *>Ptr; message 'invalidatedDecorationIndexPaths';
    procedure setContentOffsetAdjustment(newValue: CGPoint); message 'setContentOffsetAdjustment:';
    function contentOffsetAdjustment: CGPoint; message 'contentOffsetAdjustment';
    procedure setContentSizeAdjustment(newValue: CGSize); message 'setContentSizeAdjustment:';
    function contentSizeAdjustment: CGSize; message 'contentSizeAdjustment';
    function previousIndexPathsForInteractivelyMovingItems: NSIndexPath *ProtocolPtr; message 'previousIndexPathsForInteractivelyMovingItems';
    function targetIndexPathsForInteractivelyMovingItems: NSIndexPath *ProtocolPtr; message 'targetIndexPathsForInteractivelyMovingItems';
    function interactiveMovementTarget: CGPoint; message 'interactiveMovementTarget';
  end;

type
  UICollectionViewLayout = objcclass external (NSObject, NSCodingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function collectionView: UICollectionView; message 'collectionView';
    procedure invalidateLayout; message 'invalidateLayout';
    procedure invalidateLayoutWithContext (context: UICollectionViewLayoutInvalidationContext); message 'invalidateLayoutWithContext:'; { available in 7_0 }
    procedure registerClass_forDecorationViewOfKind (viewClass: nullable Class; elementKind: NSString); message 'registerClass:forDecorationViewOfKind:';
    procedure registerNib_forDecorationViewOfKind (nib: nullable UINibPtr; elementKind: NSString); message 'registerNib:forDecorationViewOfKind:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;


type
  UISubclassingHooks = objccategory external (UICollectionViewLayout)
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function layoutAttributesClass: pobjc_class; message 'layoutAttributesClass';
    function invalidationContextClass: pobjc_class; message 'invalidationContextClass';
    {$else}
    class function layoutAttributesClass: pobjc_class; message 'layoutAttributesClass';
    class function invalidationContextClass: pobjc_class; message 'invalidationContextClass'; { available in 7_0 }
    {$endif}
    procedure prepareLayout; message 'prepareLayout';
    function layoutAttributesForElementsInRect (rect: CGRect): nullable __kindof UICollectionViewLayoutAttributes *ProtocolPtr; message 'layoutAttributesForElementsInRect:';
    function layoutAttributesForItemAtIndexPath (indexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'layoutAttributesForItemAtIndexPath:';
    function layoutAttributesForSupplementaryViewOfKind_atIndexPath (elementKind: NSString; indexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'layoutAttributesForSupplementaryViewOfKind:atIndexPath:';
    function layoutAttributesForDecorationViewOfKind_atIndexPath (elementKind: NSString; indexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'layoutAttributesForDecorationViewOfKind:atIndexPath:';
    function shouldInvalidateLayoutForBoundsChange (newBounds: CGRect): boolean; message 'shouldInvalidateLayoutForBoundsChange:';
    function invalidationContextForBoundsChange (newBounds: CGRect): UICollectionViewLayoutInvalidationContext; message 'invalidationContextForBoundsChange:'; { available in 7_0 }
    function shouldInvalidateLayoutForPreferredLayoutAttributes_withOriginalAttributes (preferredAttributes: UICollectionViewLayoutAttributes; originalAttributes: UICollectionViewLayoutAttributes): boolean; message 'shouldInvalidateLayoutForPreferredLayoutAttributes:withOriginalAttributes:'; { available in 8_0 }
    function invalidationContextForPreferredLayoutAttributes_withOriginalAttributes (preferredAttributes: UICollectionViewLayoutAttributes; originalAttributes: UICollectionViewLayoutAttributes): UICollectionViewLayoutInvalidationContext; message 'invalidationContextForPreferredLayoutAttributes:withOriginalAttributes:'; { available in 8_0 }
    function targetContentOffsetForProposedContentOffset_withScrollingVelocity (proposedContentOffset: CGPoint; velocity: CGPoint): CGPoint; message 'targetContentOffsetForProposedContentOffset:withScrollingVelocity:';
    function targetContentOffsetForProposedContentOffset (proposedContentOffset: CGPoint): CGPoint; message 'targetContentOffsetForProposedContentOffset:'; { available in 7_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function collectionViewContentSize: CGSize; message 'collectionViewContentSize';
    {$else}
    function collectionViewContentSize: CGSize; message 'collectionViewContentSize';
    {$endif}
  end;

type
  UIUpdateSupportHooks = objccategory external (UICollectionViewLayout)
    procedure prepareForCollectionViewUpdates (updateItems: UICollectionViewUpdateItem *ProtocolPtr); message 'prepareForCollectionViewUpdates:';
    procedure finalizeCollectionViewUpdates; message 'finalizeCollectionViewUpdates';
    procedure prepareForAnimatedBoundsChange (oldBounds: CGRect); message 'prepareForAnimatedBoundsChange:';
    procedure finalizeAnimatedBoundsChange; message 'finalizeAnimatedBoundsChange';
    procedure prepareForTransitionToLayout (newLayout: UICollectionViewLayout); message 'prepareForTransitionToLayout:'; { available in 7_0 }
    procedure prepareForTransitionFromLayout (oldLayout: UICollectionViewLayout); message 'prepareForTransitionFromLayout:'; { available in 7_0 }
    procedure finalizeLayoutTransition; message 'finalizeLayoutTransition'; { available in 7_0 }
    function initialLayoutAttributesForAppearingItemAtIndexPath (itemIndexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'initialLayoutAttributesForAppearingItemAtIndexPath:';
    function finalLayoutAttributesForDisappearingItemAtIndexPath (itemIndexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'finalLayoutAttributesForDisappearingItemAtIndexPath:';
    function initialLayoutAttributesForAppearingSupplementaryElementOfKind_atIndexPath (elementKind: NSString; elementIndexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'initialLayoutAttributesForAppearingSupplementaryElementOfKind:atIndexPath:';
    function finalLayoutAttributesForDisappearingSupplementaryElementOfKind_atIndexPath (elementKind: NSString; elementIndexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'finalLayoutAttributesForDisappearingSupplementaryElementOfKind:atIndexPath:';
    function initialLayoutAttributesForAppearingDecorationElementOfKind_atIndexPath (elementKind: NSString; decorationIndexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'initialLayoutAttributesForAppearingDecorationElementOfKind:atIndexPath:';
    function finalLayoutAttributesForDisappearingDecorationElementOfKind_atIndexPath (elementKind: NSString; decorationIndexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'finalLayoutAttributesForDisappearingDecorationElementOfKind:atIndexPath:';
    function indexPathsToDeleteForSupplementaryViewOfKind (elementKind: NSString): NSIndexPath *ProtocolPtr; message 'indexPathsToDeleteForSupplementaryViewOfKind:'; { available in 7_0 }
    function indexPathsToDeleteForDecorationViewOfKind (elementKind: NSString): NSIndexPath *ProtocolPtr; message 'indexPathsToDeleteForDecorationViewOfKind:'; { available in 7_0 }
    function indexPathsToInsertForSupplementaryViewOfKind (elementKind: NSString): NSIndexPath *ProtocolPtr; message 'indexPathsToInsertForSupplementaryViewOfKind:'; { available in 7_0 }
    function indexPathsToInsertForDecorationViewOfKind (elementKind: NSString): NSIndexPath *ProtocolPtr; message 'indexPathsToInsertForDecorationViewOfKind:'; { available in 7_0 }
  end;

type
  UIReorderingSupportHooks = objccategory external (UICollectionViewLayout)
    function targetIndexPathForInteractivelyMovingItem_withPosition (previousIndexPath: NSIndexPath; position: CGPoint): NSIndexPath; message 'targetIndexPathForInteractivelyMovingItem:withPosition:'; { available in 9_0 }
    function layoutAttributesForInteractivelyMovingItemAtIndexPath_withTargetPosition (indexPath: NSIndexPath; position: CGPoint): UICollectionViewLayoutAttributes; message 'layoutAttributesForInteractivelyMovingItemAtIndexPath:withTargetPosition:'; { available in 9_0 }
    function invalidationContextForInteractivelyMovingItems_withTargetPosition_previousIndexPaths_previousPosition (targetIndexPaths: NSIndexPath *ProtocolPtr; targetPosition: CGPoint; previousIndexPaths: NSIndexPath *ProtocolPtr; previousPosition: CGPoint): UICollectionViewLayoutInvalidationContext; message 'invalidationContextForInteractivelyMovingItems:withTargetPosition:previousIndexPaths:previousPosition:'; { available in 9_0 }
    function invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths_previousIndexPaths_movementCancelled (indexPaths: NSIndexPath *ProtocolPtr; previousIndexPaths: NSIndexPath *ProtocolPtr; movementCancelled: boolean): UICollectionViewLayoutInvalidationContext; message 'invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:previousIndexPaths:movementCancelled:'; { available in 9_0 }
  end;
{$endif}

