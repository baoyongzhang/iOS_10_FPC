{ Parsed from UIKit.framework UIDocumentInteractionController.h }

{$ifdef TYPES}
type
  UIDocumentInteractionControllerPtr = ^UIDocumentInteractionController;
  UIDocumentInteractionControllerDelegateProtocolPtr = ^UIDocumentInteractionControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIDocumentInteractionController = objcclass external (NSObject, UIActionSheetDelegateProtocol)
  public
    class function interactionControllerWithURL (url: NSURL): UIDocumentInteractionController; message 'interactionControllerWithURL:';
    procedure setDelegate(newValue: UIDocumentInteractionControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIDocumentInteractionControllerDelegateProtocol; message 'delegate';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setUTI(newValue: NSString); message 'setUTI:';
    function UTI: NSString; message 'UTI';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function icons: UIImage *ProtocolPtr; message 'icons';
    procedure setAnnotation(newValue: id); message 'setAnnotation:';
    function annotation: id; message 'annotation';
    function presentOptionsMenuFromRect_inView_animated (rect: CGRect; view: UIView; animated: boolean): boolean; message 'presentOptionsMenuFromRect:inView:animated:';
    function presentOptionsMenuFromBarButtonItem_animated (item: UIBarButtonItem; animated: boolean): boolean; message 'presentOptionsMenuFromBarButtonItem:animated:';
    function presentPreviewAnimated (animated: boolean): boolean; message 'presentPreviewAnimated:';
    function presentOpenInMenuFromRect_inView_animated (rect: CGRect; view: UIView; animated: boolean): boolean; message 'presentOpenInMenuFromRect:inView:animated:';
    function presentOpenInMenuFromBarButtonItem_animated (item: UIBarButtonItem; animated: boolean): boolean; message 'presentOpenInMenuFromBarButtonItem:animated:';
    procedure dismissPreviewAnimated (animated: boolean); message 'dismissPreviewAnimated:';
    procedure dismissMenuAnimated (animated: boolean); message 'dismissMenuAnimated:';
    function gestureRecognizers: __kindof UIGestureRecognizer *ProtocolPtr; message 'gestureRecognizers';

    { Adopted protocols }
    procedure actionSheet_clickedButtonAtIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:clickedButtonAtIndex:'; deprecated 'in 2_0, 8_3';
    procedure actionSheet_didDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:didDismissWithButtonIndex:'; deprecated 'in 2_0, 8_3';
    procedure actionSheet_willDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:willDismissWithButtonIndex:'; deprecated 'in 2_0, 8_3';
    procedure actionSheetCancel (actionSheet: UIActionSheet); message 'actionSheetCancel:'; deprecated 'in 2_0, 8_3';
    procedure didPresentActionSheet (actionSheet: UIActionSheet); message 'didPresentActionSheet:'; deprecated 'in 2_0, 8_3';
    procedure willPresentActionSheet (actionSheet: UIActionSheet); message 'willPresentActionSheet:'; deprecated 'in 2_0, 8_3';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIDocumentInteractionControllerDelegateProtocol = objcprotocol external name 'UIDocumentInteractionControllerDelegate' (NSObjectProtocol)
  optional
    function documentInteractionControllerViewControllerForPreview (controller: UIDocumentInteractionController): UIViewController; message 'documentInteractionControllerViewControllerForPreview:';
    function documentInteractionControllerRectForPreview (controller: UIDocumentInteractionController): CGRect; message 'documentInteractionControllerRectForPreview:';
    function documentInteractionControllerViewForPreview (controller: UIDocumentInteractionController): nullable UIViewPtr; message 'documentInteractionControllerViewForPreview:';
    procedure documentInteractionControllerWillBeginPreview (controller: UIDocumentInteractionController); message 'documentInteractionControllerWillBeginPreview:';
    procedure documentInteractionControllerDidEndPreview (controller: UIDocumentInteractionController); message 'documentInteractionControllerDidEndPreview:';
    procedure documentInteractionControllerWillPresentOptionsMenu (controller: UIDocumentInteractionController); message 'documentInteractionControllerWillPresentOptionsMenu:';
    procedure documentInteractionControllerDidDismissOptionsMenu (controller: UIDocumentInteractionController); message 'documentInteractionControllerDidDismissOptionsMenu:';
    procedure documentInteractionControllerWillPresentOpenInMenu (controller: UIDocumentInteractionController); message 'documentInteractionControllerWillPresentOpenInMenu:';
    procedure documentInteractionControllerDidDismissOpenInMenu (controller: UIDocumentInteractionController); message 'documentInteractionControllerDidDismissOpenInMenu:';
    procedure documentInteractionController_willBeginSendingToApplication (controller: UIDocumentInteractionController; application: nullable NSStringPtr); message 'documentInteractionController:willBeginSendingToApplication:';
    procedure documentInteractionController_didEndSendingToApplication (controller: UIDocumentInteractionController; application: nullable NSStringPtr); message 'documentInteractionController:didEndSendingToApplication:';
    function documentInteractionController_canPerformAction (controller: UIDocumentInteractionController; action: nullable SEL): boolean; message 'documentInteractionController:canPerformAction:'; deprecated 'in 3_2, 6_0';
    function documentInteractionController_performAction (controller: UIDocumentInteractionController; action: nullable SEL): boolean; message 'documentInteractionController:performAction:'; deprecated 'in 3_2, 6_0';
  end;
{$endif}

