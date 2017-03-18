{ Parsed from UIKit.framework UIActivityItemProvider.h }

{ Types from UIActivityItemProvider }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIActivityItemProviderPtr = ^UIActivityItemProvider;
  UIActivityItemSourceProtocolPtr = ^UIActivityItemSourceProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIActivityItemSourceProtocol = objcprotocol external name 'UIActivityItemSource' (NSObjectProtocol)
  required
    function activityViewControllerPlaceholderItem (activityViewController: UIActivityViewController): id; message 'activityViewControllerPlaceholderItem:';
    function activityViewController_itemForActivityType (activityViewController: UIActivityViewController; activityType: UIActivityType): nullable id; message 'activityViewController:itemForActivityType:';
  optional
    function activityViewController_subjectForActivityType (activityViewController: UIActivityViewController; activityType: nullable UIActivityType): NSString; message 'activityViewController:subjectForActivityType:';
    function activityViewController_dataTypeIdentifierForActivityType (activityViewController: UIActivityViewController; activityType: nullable UIActivityType): NSString; message 'activityViewController:dataTypeIdentifierForActivityType:';
    function activityViewController_thumbnailImageForActivityType_suggestedSize (activityViewController: UIActivityViewController; activityType: nullable UIActivityType; size: CGSize): nullable UIImagePtr; message 'activityViewController:thumbnailImageForActivityType:suggestedSize:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIActivityItemProvider = objcclass external (NSOperation, UIActivityItemSourceProtocol)
  public
    function init: instancetype; message 'init';
    function initWithPlaceholderItem (placeholderItem: id): instancetype; message 'initWithPlaceholderItem:'; { NS_DESIGNATED_INITIALIZER }
    function placeholderItem: id; message 'placeholderItem';
    function activityType: UIActivityType; message 'activityType';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function item: id; message 'item';
    {$else}
    function item: nonnull id; message 'item';
    {$endif}

    { Adopted protocols }
    function activityViewController_dataTypeIdentifierForActivityType (activityViewController: UIActivityViewController; activityType: nullable UIActivityType): NSString; message 'activityViewController:dataTypeIdentifierForActivityType:';
    function activityViewController_itemForActivityType (activityViewController: UIActivityViewController; activityType: UIActivityType): nullable id; message 'activityViewController:itemForActivityType:';
    function activityViewController_subjectForActivityType (activityViewController: UIActivityViewController; activityType: nullable UIActivityType): NSString; message 'activityViewController:subjectForActivityType:';
    function activityViewController_thumbnailImageForActivityType_suggestedSize (activityViewController: UIActivityViewController; activityType: nullable UIActivityType; size: CGSize): nullable UIImagePtr; message 'activityViewController:thumbnailImageForActivityType:suggestedSize:';
    function activityViewControllerPlaceholderItem (activityViewController: UIActivityViewController): id; message 'activityViewControllerPlaceholderItem:';
  end;
{$endif}

