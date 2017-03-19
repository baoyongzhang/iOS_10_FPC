{ Parsed from UIKit.framework UIPrinterPickerController.h }

{$ifdef TYPES}
type
  UIPrinterPickerControllerPtr = ^UIPrinterPickerController;
  UIPrinterPickerControllerDelegateProtocolPtr = ^UIPrinterPickerControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIPrinterPickerCompletionHandler = OpaqueCBlock;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPrinterPickerControllerDelegateProtocol = objcprotocol external name 'UIPrinterPickerControllerDelegate' (NSObjectProtocol)
  optional
    function printerPickerControllerParentViewController (printerPickerController: UIPrinterPickerController): UIViewControllerPtr; message 'printerPickerControllerParentViewController:';
    function printerPickerController_shouldShowPrinter (printerPickerController: UIPrinterPickerController; printer: UIPrinter): boolean; message 'printerPickerController:shouldShowPrinter:';
    procedure printerPickerControllerWillPresent (printerPickerController: UIPrinterPickerController); message 'printerPickerControllerWillPresent:';
    procedure printerPickerControllerDidPresent (printerPickerController: UIPrinterPickerController); message 'printerPickerControllerDidPresent:';
    procedure printerPickerControllerWillDismiss (printerPickerController: UIPrinterPickerController); message 'printerPickerControllerWillDismiss:';
    procedure printerPickerControllerDidDismiss (printerPickerController: UIPrinterPickerController); message 'printerPickerControllerDidDismiss:';
    procedure printerPickerControllerDidSelectPrinter (printerPickerController: UIPrinterPickerController); message 'printerPickerControllerDidSelectPrinter:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIPrinterPickerController = objcclass external (NSObject)
  public
    class function printerPickerControllerWithInitiallySelectedPrinter (printer: UIPrinterPtr): UIPrinterPickerController; message 'printerPickerControllerWithInitiallySelectedPrinter:';
    function selectedPrinter: UIPrinter; message 'selectedPrinter';
    procedure setDelegate(newValue: UIPrinterPickerControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIPrinterPickerControllerDelegateProtocol; message 'delegate';
    function presentAnimated_completionHandler (animated: boolean; completion: UIPrinterPickerCompletionHandler): boolean; message 'presentAnimated:completionHandler:';
    function presentFromRect_inView_animated_completionHandler (rect: CGRect; view: UIView; animated: boolean; completion: UIPrinterPickerCompletionHandler): boolean; message 'presentFromRect:inView:animated:completionHandler:';
    function presentFromBarButtonItem_animated_completionHandler (item: UIBarButtonItem; animated: boolean; completion: UIPrinterPickerCompletionHandler): boolean; message 'presentFromBarButtonItem:animated:completionHandler:';
    procedure dismissAnimated (animated: boolean); message 'dismissAnimated:';
  end;
{$endif}

