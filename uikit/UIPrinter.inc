{ Parsed from UIKit.framework UIPrinter.h }

{$ifdef TYPES}
type
  UIPrinterPtr = ^UIPrinter;
{$endif}

{$ifdef CLASSES}

type
  UIPrinter = objcclass external (NSObject)
  private
  public
    class function printerWithURL (url: NSURL): UIPrinter; message 'printerWithURL:';
    function URL: NSURL; message 'URL';
    function displayName: NSString; message 'displayName';
    function displayLocation: NSString; message 'displayLocation';
    function supportedJobTypes: UIPrinterJobTypes; message 'supportedJobTypes';
    function makeAndModel: NSString; message 'makeAndModel';
    function supportsColor: boolean; message 'supportsColor';
    function supportsDuplex: boolean; message 'supportsDuplex';
    procedure contactPrinter (completionHandler: void(^ __nullable)(BOOL available)); message 'contactPrinter:';
  end;
{$endif}

