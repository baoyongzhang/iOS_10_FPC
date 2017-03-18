{ Parsed from UIKit.framework UICollectionViewFlowLayout.h }

{$ifdef TYPES}
type
  UICollectionViewFlowLayoutInvalidationContextPtr = ^UICollectionViewFlowLayoutInvalidationContext;
  UICollectionViewFlowLayoutPtr = ^UICollectionViewFlowLayout;
  UICollectionViewDelegateFlowLayoutProtocolPtr = ^UICollectionViewDelegateFlowLayoutProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UICollectionElementKindSectionHeader: NSString { available in 6_0 }; cvar; external;
  UICollectionElementKindSectionFooter: NSString { available in 6_0 }; cvar; external;
  UICollectionViewFlowLayoutAutomaticSize: CGSize { available in 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UICollectionViewScrollDirection = NSInteger;
  UICollectionViewScrollDirectionPtr = ^UICollectionViewScrollDirection;

const
  UICollectionViewScrollDirectionVertical = 0;
  UICollectionViewScrollDirectionHorizontal = 1;
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewFlowLayoutInvalidationContext = objcclass external (UICollectionViewLayoutInvalidationContext)
  public
    procedure setInvalidateFlowLayoutDelegateMetrics(newValue: boolean); message 'setInvalidateFlowLayoutDelegateMetrics:';
    function invalidateFlowLayoutDelegateMetrics: boolean; message 'invalidateFlowLayoutDelegateMetrics';
    procedure setInvalidateFlowLayoutAttributes(newValue: boolean); message 'setInvalidateFlowLayoutAttributes:';
    function invalidateFlowLayoutAttributes: boolean; message 'invalidateFlowLayoutAttributes';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UICollectionViewDelegateFlowLayoutProtocol = objcprotocol external name 'UICollectionViewDelegateFlowLayout' (UICollectionViewDelegateProtocol)
  optional
    function collectionView_layout_sizeForItemAtIndexPath (collectionView: UICollectionView; collectionViewLayout: UICollectionViewLayout; indexPath: NSIndexPath): CGSize; message 'collectionView:layout:sizeForItemAtIndexPath:';
    function collectionView_layout_insetForSectionAtIndex (collectionView: UICollectionView; collectionViewLayout: UICollectionViewLayout; section: NSInteger): UIEdgeInsets; message 'collectionView:layout:insetForSectionAtIndex:';
    function collectionView_layout_minimumLineSpacingForSectionAtIndex (collectionView: UICollectionView; collectionViewLayout: UICollectionViewLayout; section: NSInteger): CGFloat; message 'collectionView:layout:minimumLineSpacingForSectionAtIndex:';
    function collectionView_layout_minimumInteritemSpacingForSectionAtIndex (collectionView: UICollectionView; collectionViewLayout: UICollectionViewLayout; section: NSInteger): CGFloat; message 'collectionView:layout:minimumInteritemSpacingForSectionAtIndex:';
    function collectionView_layout_referenceSizeForHeaderInSection (collectionView: UICollectionView; collectionViewLayout: UICollectionViewLayout; section: NSInteger): CGSize; message 'collectionView:layout:referenceSizeForHeaderInSection:';
    function collectionView_layout_referenceSizeForFooterInSection (collectionView: UICollectionView; collectionViewLayout: UICollectionViewLayout; section: NSInteger): CGSize; message 'collectionView:layout:referenceSizeForFooterInSection:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewFlowLayout = objcclass external (UICollectionViewLayout)
  public
    procedure setMinimumLineSpacing(newValue: CGFloat); message 'setMinimumLineSpacing:';
    function minimumLineSpacing: CGFloat; message 'minimumLineSpacing';
    procedure setMinimumInteritemSpacing(newValue: CGFloat); message 'setMinimumInteritemSpacing:';
    function minimumInteritemSpacing: CGFloat; message 'minimumInteritemSpacing';
    procedure setItemSize(newValue: CGSize); message 'setItemSize:';
    function itemSize: CGSize; message 'itemSize';
    procedure setEstimatedItemSize(newValue: CGSize); message 'setEstimatedItemSize:';
    function estimatedItemSize: CGSize; message 'estimatedItemSize';
    procedure setScrollDirection(newValue: UICollectionViewScrollDirection); message 'setScrollDirection:';
    function scrollDirection: UICollectionViewScrollDirection; message 'scrollDirection';
    procedure setHeaderReferenceSize(newValue: CGSize); message 'setHeaderReferenceSize:';
    function headerReferenceSize: CGSize; message 'headerReferenceSize';
    procedure setFooterReferenceSize(newValue: CGSize); message 'setFooterReferenceSize:';
    function footerReferenceSize: CGSize; message 'footerReferenceSize';
    procedure setSectionInset(newValue: UIEdgeInsets); message 'setSectionInset:';
    function sectionInset: UIEdgeInsets; message 'sectionInset';
    procedure setSectionHeadersPinToVisibleBounds(newValue: boolean); message 'setSectionHeadersPinToVisibleBounds:';
    function sectionHeadersPinToVisibleBounds: boolean; message 'sectionHeadersPinToVisibleBounds';
    procedure setSectionFootersPinToVisibleBounds(newValue: boolean); message 'setSectionFootersPinToVisibleBounds:';
    function sectionFootersPinToVisibleBounds: boolean; message 'sectionFootersPinToVisibleBounds';
  end;
{$endif}

