{ Parsed from UIKit.framework UIActivity.h }

{ Types from UIActivity }
{$ifdef TYPES}



{$endif}


{$ifdef TYPES}
type
  UIActivityPtr = ^UIActivity;
{$endif}

{$if defined(UIKIT_STRING_ENUMS)}
{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString *UIActivityType;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  UIActivityType = ^NSString;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: UIActivityType UIActivityTypePostToFacebook { available in 6_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypePostToTwitter { available in 6_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypePostToWeibo { available in 6_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypeMessage { available in 6_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypeMail { available in 6_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypePrint { available in 6_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypeCopyToPasteboard { available in 6_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypeAssignToContact { available in 6_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypeSaveToCameraRoll { available in 6_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypeAddToReadingList { available in 7_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypePostToFlickr { available in 7_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypePostToVimeo { available in 7_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypePostToTencentWeibo { available in 7_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypeAirDrop { available in 7_0 }; cvar; external;
  __TVOS_PROHIBITED: UIActivityType UIActivityTypeOpenInIBooks { available in 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UIActivityCategory = NSInteger;
  UIActivityCategoryPtr = ^UIActivityCategory;

const
  UIActivityCategoryAction = 0;
  UIActivityCategoryShare = 1;
{$endif}

{$ifdef CLASSES}

type
  UIActivity = objcclass external (NSObject)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function activityCategory: UIActivityCategory; message 'activityCategory';
    {$else}
    class function activityCategory: UIActivityCategory; message 'activityCategory'; { available in 7_0 }
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function activityType: UIActivityType; message 'activityType';
    function activityTitle: NSString; message 'activityTitle';
    function activityImage: UIImage; message 'activityImage';
    {$else}
    function activityType: nullable UIActivityType; message 'activityType';
    function activityTitle: nullable NSStringPtr; message 'activityTitle';
    function activityImage: nullable UIImagePtr; message 'activityImage';
    {$endif}
    function canPerformWithActivityItems (activityItems: NSArray): boolean; message 'canPerformWithActivityItems:';
    procedure prepareWithActivityItems (activityItems: NSArray); message 'prepareWithActivityItems:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function activityViewController: UIViewController; message 'activityViewController';
    {$else}
    function activityViewController: nullable UIViewControllerPtr; message 'activityViewController';
    {$endif}
    procedure performActivity; message 'performActivity';
    procedure activityDidFinish (completed_: boolean); message 'activityDidFinish:';
  end;
{$endif}

