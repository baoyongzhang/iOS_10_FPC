{ Parsed from UIKit.framework UIDocumentPickerExtensionViewController.h }

{$ifdef TYPES}
type
  UIDocumentPickerExtensionViewControllerPtr = ^UIDocumentPickerExtensionViewController;
{$endif}

{$ifdef CLASSES}

type
  UIDocumentPickerExtensionViewController = objcclass external (UIViewController)
  public
    procedure dismissGrantingAccessToURL (url: nullable NSURLPtr); message 'dismissGrantingAccessToURL:';
    procedure prepareForPresentationInMode (mode: UIDocumentPickerMode); message 'prepareForPresentationInMode:';
    function documentPickerMode: UIDocumentPickerMode; message 'documentPickerMode';
    function originalURL: NSURL; message 'originalURL';
    function validTypes: NSString *ProtocolPtr; message 'validTypes';
    function providerIdentifier: NSString; message 'providerIdentifier';
    function documentStorageURL: NSURL; message 'documentStorageURL';
  end;
{$endif}

