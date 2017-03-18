{ Parsed from UIKit.framework UIPreviewInteraction.h }

{$ifdef TYPES}
type
  UIPreviewInteractionPtr = ^UIPreviewInteraction;
  UIPreviewInteractionDelegateProtocolPtr = ^UIPreviewInteractionDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIPreviewInteraction = objcclass external (NSObject)
  public
    function initWithView (view: UIView): instancetype; message 'initWithView:'; { NS_DESIGNATED_INITIALIZER }
    function view: UIView; message 'view';
    function init: instancetype; message 'init';
    procedure setDelegate(newValue: UIPreviewInteractionDelegateProtocol); message 'setDelegate:';
    function delegate: UIPreviewInteractionDelegateProtocol; message 'delegate';
    function locationInCoordinateSpace (coordinateSpace: nullable UICoordinateSpaceProtocol): CGPoint; message 'locationInCoordinateSpace:';
    procedure cancelInteraction; message 'cancelInteraction';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPreviewInteractionDelegateProtocol = objcprotocol external name 'UIPreviewInteractionDelegate' (NSObjectProtocol)
    procedure previewInteraction_didUpdatePreviewTransition_ended (previewInteraction: UIPreviewInteraction; transitionProgress: CGFloat; ended: boolean); message 'previewInteraction:didUpdatePreviewTransition:ended:'; { available in 10_0 }
    procedure previewInteractionDidCancel (previewInteraction: UIPreviewInteraction); message 'previewInteractionDidCancel:'; { available in 10_0 }
  optional
    function previewInteractionShouldBegin (previewInteraction: UIPreviewInteraction): boolean; message 'previewInteractionShouldBegin:'; { available in 10_0 }
    procedure previewInteraction_didUpdateCommitTransition_ended (previewInteraction: UIPreviewInteraction; transitionProgress: CGFloat; ended: boolean); message 'previewInteraction:didUpdateCommitTransition:ended:'; { available in 10_0 }
  end;
{$endif}

