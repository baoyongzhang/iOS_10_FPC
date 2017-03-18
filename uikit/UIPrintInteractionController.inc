{ Parsed from UIKit.framework UIPrintInteractionController.h }

{ Types from UIPrintInteractionController }
{$ifdef TYPES}



{$endif}


{$ifdef TYPES}
type
  UIPrintInteractionControllerPtr = ^UIPrintInteractionController;
  UIPrintInteractionControllerDelegateProtocolPtr = ^UIPrintInteractionControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  __TVOS_PROHIBITED = void (^UIPrintInteractionCompletionHandler)(UIPrintInteractionController BOOL NSError *__nullable error) { available in 9_0 };
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED { available in 9_0 };
  UIPrinterCutterBehavior = NSInteger;
  UIPrinterCutterBehaviorPtr = ^UIPrinterCutterBehavior;

const
  UIPrinterCutterBehaviorNoCut = 0;
  UIPrinterCutterBehaviorPrinterDefault = 1;
  UIPrinterCutterBehaviorCutAfterEachPage = 2;
  UIPrinterCutterBehaviorCutAfterEachCopy = 3;
  UIPrinterCutterBehaviorCutAfterEachJob = 4;
{$endif}

{$ifdef CLASSES}

type
  UIPrintInteractionController = objcclass external (NSObject)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isPrintingAvailable: boolean; message 'isPrintingAvailable';
    {$else}
    class function isPrintingAvailable: boolean; message 'isPrintingAvailable';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function printableUTIs: NSString *ProtocolPtr; message 'printableUTIs';
    {$else}
    class function printableUTIs: NSString *ProtocolPtr; message 'printableUTIs';
    {$endif}
    class function canPrintURL (url: NSURL): boolean; message 'canPrintURL:';
    class function canPrintData (data: NSData): boolean; message 'canPrintData:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function sharedPrintController: UIPrintInteractionController; message 'sharedPrintController';
    {$else}
    class function sharedPrintController: UIPrintInteractionController; message 'sharedPrintController';
    {$endif}
    procedure setPrintInfo(newValue: UIPrintInfo); message 'setPrintInfo:';
    function printInfo: UIPrintInfo; message 'printInfo';
    procedure setDelegate(newValue: UIPrintInteractionControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIPrintInteractionControllerDelegateProtocol; message 'delegate';
    procedure setShowsPageRange(newValue: boolean); message 'setShowsPageRange:';
    function showsPageRange: boolean; message 'showsPageRange';
    procedure setShowsNumberOfCopies(newValue: boolean); message 'setShowsNumberOfCopies:';
    function showsNumberOfCopies: boolean; message 'showsNumberOfCopies';
    procedure setShowsPaperSelectionForLoadedPapers(newValue: boolean); message 'setShowsPaperSelectionForLoadedPapers:';
    function showsPaperSelectionForLoadedPapers: boolean; message 'showsPaperSelectionForLoadedPapers';
    function printPaper: UIPrintPaper; message 'printPaper';
    procedure setPrintPageRenderer(newValue: UIPrintPageRenderer); message 'setPrintPageRenderer:';
    function printPageRenderer: UIPrintPageRenderer; message 'printPageRenderer';
    procedure setPrintFormatter(newValue: UIPrintFormatter); message 'setPrintFormatter:';
    function printFormatter: UIPrintFormatter; message 'printFormatter';
    procedure setPrintingItem(newValue: id); message 'setPrintingItem:';
    function printingItem: id; message 'printingItem';
    procedure setPrintingItems(newValue: NSArray); message 'setPrintingItems:';
    function printingItems: NSArray; message 'printingItems';
    function presentAnimated_completionHandler (animated: boolean; completion: nullable UIPrintInteractionCompletionHandler): boolean; message 'presentAnimated:completionHandler:';
    function presentFromRect_inView_animated_completionHandler (rect: CGRect; view: UIView; animated: boolean; completion: nullable UIPrintInteractionCompletionHandler): boolean; message 'presentFromRect:inView:animated:completionHandler:';
    function presentFromBarButtonItem_animated_completionHandler (item: UIBarButtonItem; animated: boolean; completion: nullable UIPrintInteractionCompletionHandler): boolean; message 'presentFromBarButtonItem:animated:completionHandler:';
    function printToPrinter_completionHandler (printer: UIPrinter; completion: nullable UIPrintInteractionCompletionHandler): boolean; message 'printToPrinter:completionHandler:';
    procedure dismissAnimated (animated: boolean); message 'dismissAnimated:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPrintInteractionControllerDelegateProtocol = objcprotocol external name 'UIPrintInteractionControllerDelegate' (NSObjectProtocol)
  optional
    function printInteractionControllerParentViewController (printInteractionController_: UIPrintInteractionController): UIViewController * _Nullable; message 'printInteractionControllerParentViewController:';
    function printInteractionController_choosePaper (printInteractionController_: UIPrintInteractionController; paperList: UIPrintPaper *ProtocolPtr): UIPrintPaper; message 'printInteractionController:choosePaper:';
    procedure printInteractionControllerWillPresentPrinterOptions (printInteractionController_: UIPrintInteractionController); message 'printInteractionControllerWillPresentPrinterOptions:';
    procedure printInteractionControllerDidPresentPrinterOptions (printInteractionController_: UIPrintInteractionController); message 'printInteractionControllerDidPresentPrinterOptions:';
    procedure printInteractionControllerWillDismissPrinterOptions (printInteractionController_: UIPrintInteractionController); message 'printInteractionControllerWillDismissPrinterOptions:';
    procedure printInteractionControllerDidDismissPrinterOptions (printInteractionController_: UIPrintInteractionController); message 'printInteractionControllerDidDismissPrinterOptions:';
    procedure printInteractionControllerWillStartJob (printInteractionController_: UIPrintInteractionController); message 'printInteractionControllerWillStartJob:';
    procedure printInteractionControllerDidFinishJob (printInteractionController_: UIPrintInteractionController); message 'printInteractionControllerDidFinishJob:';
    function printInteractionController_cutLengthForPaper (printInteractionController_: UIPrintInteractionController; paper: UIPrintPaper): CGFloat; message 'printInteractionController:cutLengthForPaper:'; { available in 7_0 }
    function printInteractionController_chooseCutterBehavior (printInteractionController_: UIPrintInteractionController; availableBehaviors: NSArray): UIPrinterCutterBehavior; message 'printInteractionController:chooseCutterBehavior:'; { available in 9_0 }
  end;
{$endif}

