{ Parsed from Foundation.framework NSItemProvider.h }

{$ifdef TYPES}
type
  NSItemProviderPtr = ^NSItemProvider;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
type
  NSItemProviderCompletionHandler = OpaqueCBlock;
  NSItemProviderLoadHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  NSItemProvider = objcclass external (NSObject, NSCopyingProtocol)
  public
    function initWithItem_typeIdentifier (item: nullable NSSecureCodingProtocol; typeIdentifier: nullable NSStringPtr): instancetype; message 'initWithItem:typeIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContentsOfURL (fileURL: null_unspecified NSURLPtr): nullable instancetype; message 'initWithContentsOfURL:';
    procedure registerItemForTypeIdentifier_loadHandler (typeIdentifier: NSString; loadHandler: NSItemProviderLoadHandler); message 'registerItemForTypeIdentifier:loadHandler:';
    function registeredTypeIdentifiers: NSArray; message 'registeredTypeIdentifiers';
    function hasItemConformingToTypeIdentifier (typeIdentifier: NSString): boolean; message 'hasItemConformingToTypeIdentifier:';
    procedure loadItemForTypeIdentifier_options_completionHandler (typeIdentifier: NSString; options: nullable NSDictionaryPtr; completionHandler: nullable NSItemProviderCompletionHandler); message 'loadItemForTypeIdentifier:options:completionHandler:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSItemProviderPreferredImageSizeKey: NSString *__null_unspecified { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSPreviewSupport = objccategory external (NSItemProvider)
    procedure setPreviewImageHandler(newValue: NSItemProviderLoadHandler); message 'setPreviewImageHandler:';
    function previewImageHandler: NSItemProviderLoadHandler; message 'previewImageHandler';
    procedure loadPreviewImageWithOptions_completionHandler (options: null_unspecified NSDictionaryPtr; completionHandler: null_unspecified NSItemProviderCompletionHandler); message 'loadPreviewImageWithOptions:completionHandler:'; { available in 10_10, 8_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSExtensionJavaScriptPreprocessingResultsKey: NSString *__null_unspecified { available in 10_10, 8_0 }; cvar; external;
  NSExtensionJavaScriptFinalizeArgumentKey: NSString *__null_unspecified { available in 8_0 }; cvar; external;
  NSItemProviderErrorDomain: NSString *__null_unspecified { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSItemProviderErrorCode = NSInteger;
  NSItemProviderErrorCodePtr = ^NSItemProviderErrorCode;

const
  NSItemProviderUnknownError = -1;
  NSItemProviderItemUnavailableError = -1000;
  NSItemProviderUnexpectedValueClassError = -1100;
  NSItemProviderUnavailableCoercionError = -1200 { available in 10_11, 9_0 };
{$endif}

{$endif}
