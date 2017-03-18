{ Parsed from UIKit.framework UIPopoverPresentationController.h }

{$ifdef TYPES}
type
  UIPopoverPresentationControllerPtr = ^UIPopoverPresentationController;
  UIPopoverPresentationControllerDelegateProtocolPtr = ^UIPopoverPresentationControllerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPopoverPresentationControllerDelegateProtocol = objcprotocol external name 'UIPopoverPresentationControllerDelegate' (UIAdaptivePresentationControllerDelegateProtocol)
  optional
    procedure prepareForPopoverPresentation (popoverPresentationController: UIPopoverPresentationController); message 'prepareForPopoverPresentation:';
    function popoverPresentationControllerShouldDismissPopover (popoverPresentationController: UIPopoverPresentationController): boolean; message 'popoverPresentationControllerShouldDismissPopover:';
    procedure popoverPresentationControllerDidDismissPopover (popoverPresentationController: UIPopoverPresentationController); message 'popoverPresentationControllerDidDismissPopover:';
    procedure popoverPresentationController_willRepositionPopoverToRect_inView (popoverPresentationController: UIPopoverPresentationController; rect: CGRectPtr; view: UIView  * __nonnull * __nonnull); message 'popoverPresentationController:willRepositionPopoverToRect:inView:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIPopoverPresentationController = objcclass external (UIPresentationController)
  public
    procedure setDelegate(newValue: UIPopoverPresentationControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIPopoverPresentationControllerDelegateProtocol; message 'delegate';
    procedure setPermittedArrowDirections(newValue: UIPopoverArrowDirection); message 'setPermittedArrowDirections:';
    function permittedArrowDirections: UIPopoverArrowDirection; message 'permittedArrowDirections';
    procedure setSourceView(newValue: UIView); message 'setSourceView:';
    function sourceView: UIView; message 'sourceView';
    procedure setSourceRect(newValue: CGRect); message 'setSourceRect:';
    function sourceRect: CGRect; message 'sourceRect';
    procedure setCanOverlapSourceViewRect(newValue: boolean); message 'setCanOverlapSourceViewRect:';
    function canOverlapSourceViewRect: boolean; message 'canOverlapSourceViewRect';
    procedure setBarButtonItem(newValue: UIBarButtonItem); message 'setBarButtonItem:';
    function barButtonItem: UIBarButtonItem; message 'barButtonItem';
    function arrowDirection: UIPopoverArrowDirection; message 'arrowDirection';
    procedure setPassthroughViews(newValue: UIView *ProtocolPtr); message 'setPassthroughViews:';
    function passthroughViews: UIView *ProtocolPtr; message 'passthroughViews';
    procedure setBackgroundColor(newValue: UIColor); message 'setBackgroundColor:';
    function backgroundColor: UIColor; message 'backgroundColor';
    procedure setPopoverLayoutMargins(newValue: UIEdgeInsets); message 'setPopoverLayoutMargins:';
    function popoverLayoutMargins: UIEdgeInsets; message 'popoverLayoutMargins';
    procedure setPopoverBackgroundViewClass(newValue: UIPopoverBackgroundViewMethodsProtocol); message 'setPopoverBackgroundViewClass:';
    function popoverBackgroundViewClass: UIPopoverBackgroundViewMethodsProtocol; message 'popoverBackgroundViewClass';
  end;
{$endif}

