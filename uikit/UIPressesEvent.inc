{ Parsed from UIKit.framework UIPressesEvent.h }

{ Types from UIPressesEvent }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIPressesEventPtr = ^UIPressesEvent;
{$endif}

{$ifdef CLASSES}

type
  UIPressesEvent = objcclass external (UIEvent)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function allPresses: UIPress *ProtocolPtr; message 'allPresses';
    {$else}
    function allPresses: UIPress *ProtocolPtr; message 'allPresses';
    {$endif}
    function pressesForGestureRecognizer (gesture: UIGestureRecognizer): UIPress *ProtocolPtr; message 'pressesForGestureRecognizer:';
  end;
{$endif}

