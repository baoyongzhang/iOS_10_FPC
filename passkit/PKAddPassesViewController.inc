{ Parsed from PassKit.framework PKAddPassesViewController.h }

{$ifdef TYPES}
type
  PKAddPassesViewControllerPtr = ^PKAddPassesViewController;
  PKAddPassesViewControllerDelegateProtocolPtr = ^PKAddPassesViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef PROTOCOLS}

type
  PKAddPassesViewControllerDelegateProtocol = objcprotocol external name 'PKAddPassesViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure addPassesViewControllerDidFinish (controller: PKAddPassesViewController); message 'addPassesViewControllerDidFinish:';
  end;
{$endif}

{$ifdef CLASSES}

type
  PKAddPassesViewController = objcclass external (UIViewController)
  public
    function initWithPass (pass: PKPass): instancetype; message 'initWithPass:';
    function initWithPasses (passes: PKPass *ProtocolPtr): instancetype; message 'initWithPasses:'; { available in 7_0 }
    class function canAddPasses: boolean; message 'canAddPasses'; { available in 8_0 }
    procedure setDelegate(newValue: PKAddPassesViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: PKAddPassesViewControllerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$endif}
