{ Parsed from UIKit.framework UIDynamicAnimator.h }

{ Types from UIDynamicAnimator }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIDynamicAnimatorPtr = ^UIDynamicAnimator;
  UIDynamicAnimatorDelegateProtocolPtr = ^UIDynamicAnimatorDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIDynamicAnimatorDelegateProtocol = objcprotocol external name 'UIDynamicAnimatorDelegate' (NSObjectProtocol)
  optional
    procedure dynamicAnimatorWillResume (animator: UIDynamicAnimator); message 'dynamicAnimatorWillResume:';
    procedure dynamicAnimatorDidPause (animator: UIDynamicAnimator); message 'dynamicAnimatorDidPause:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIDynamicAnimator = objcclass external (NSObject)
  public
    function initWithReferenceView (view: UIView): instancetype; message 'initWithReferenceView:'; { NS_DESIGNATED_INITIALIZER }
    procedure addBehavior (behavior: UIDynamicBehavior); message 'addBehavior:';
    procedure removeBehavior (behavior: UIDynamicBehavior); message 'removeBehavior:';
    procedure removeAllBehaviors; message 'removeAllBehaviors';
    function referenceView: UIView; message 'referenceView';
    function behaviors: __kindof UIDynamicBehavior *ProtocolPtr; message 'behaviors';
    function itemsInRect (rect: CGRect): id<UIDynamicItemProtocol>Ptr; message 'itemsInRect:';
    procedure updateItemUsingCurrentState (item: UIDynamicItemProtocol); message 'updateItemUsingCurrentState:';
    function isRunning: boolean; message 'isRunning';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function elapsedTime: NSTimeInterval; message 'elapsedTime';
    {$else}
    function elapsedTime: NSTimeInterval; message 'elapsedTime';
    {$endif}
    procedure setDelegate(newValue: UIDynamicAnimatorDelegateProtocol); message 'setDelegate:';
    function delegate: UIDynamicAnimatorDelegateProtocol; message 'delegate';
  end;


type
  UICollectionViewAdditions = objccategory external (UIDynamicAnimator)
    function initWithCollectionViewLayout (layout: UICollectionViewLayout): instancetype; message 'initWithCollectionViewLayout:';
    function layoutAttributesForCellAtIndexPath (indexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'layoutAttributesForCellAtIndexPath:';
    function layoutAttributesForSupplementaryViewOfKind_atIndexPath (kind: NSString; indexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'layoutAttributesForSupplementaryViewOfKind:atIndexPath:';
    function layoutAttributesForDecorationViewOfKind_atIndexPath (decorationViewKind: NSString; indexPath: NSIndexPath): nullable UICollectionViewLayoutAttributesPtr; message 'layoutAttributesForDecorationViewOfKind:atIndexPath:';
  end;
{$endif}

