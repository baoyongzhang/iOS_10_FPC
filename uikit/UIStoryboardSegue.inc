{ Parsed from UIKit.framework UIStoryboardSegue.h }

{$ifdef TYPES}
type
  UIStoryboardSeguePtr = ^UIStoryboardSegue;
  UIStoryboardUnwindSegueSourcePtr = ^UIStoryboardUnwindSegueSource;
{$endif}

{$ifdef CLASSES}

type
  UIStoryboardSegue = objcclass external (NSObject)
  public
    class function segueWithIdentifier_source_destination_performHandler (identifier: nullable NSStringPtr; source: UIViewController; destination: UIViewController; performHandler: OpaqueCBlock): instancetype; message 'segueWithIdentifier:source:destination:performHandler:'; { available in 6_0 }
    function initWithIdentifier_source_destination (identifier: nullable NSStringPtr; source: UIViewController; destination: UIViewController): instancetype; message 'initWithIdentifier:source:destination:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    function identifier: NSString; message 'identifier';
    function sourceViewController: __kindof UIViewControllerPtr; message 'sourceViewController';
    function destinationViewController: __kindof UIViewControllerPtr; message 'destinationViewController';
    procedure perform; message 'perform';
  end;

type
  UIStoryboardUnwindSegueSource = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function sourceViewController: UIViewController; message 'sourceViewController';
    function unwindAction: SEL; message 'unwindAction';
    function sender: id; message 'sender';
  end;
{$endif}

