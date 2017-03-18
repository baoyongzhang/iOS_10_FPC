{ Parsed from WatchKit.framework WKInterfaceDevice.h }

{ Types from WKInterfaceDevice }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  WKInterfaceDevicePtr = ^WKInterfaceDevice;
{$endif}

{$ifdef TYPES}
type
  WKHapticType = NSInteger;
  WKHapticTypePtr = ^WKHapticType;

const
  WKHapticTypeNotification = 0;
  WKHapticTypeDirectionUp = 1;
  WKHapticTypeDirectionDown = 2;
  WKHapticTypeSuccess = 3;
  WKHapticTypeFailure = 4;
  WKHapticTypeRetry = 5;
  WKHapticTypeStart = 6;
  WKHapticTypeStop = 7;
  WKHapticTypeClick = 8;

type
  WKInterfaceLayoutDirection = NSInteger;
  WKInterfaceLayoutDirectionPtr = ^WKInterfaceLayoutDirection;

const
  WKInterfaceLayoutDirectionLeftToRight = 0;
  WKInterfaceLayoutDirectionRightToLeft = 1;

type
  WKInterfaceSemanticContentAttribute = NSInteger;
  WKInterfaceSemanticContentAttributePtr = ^WKInterfaceSemanticContentAttribute;

const
  WKInterfaceSemanticContentAttributeUnspecified = 0;
  WKInterfaceSemanticContentAttributePlayback = 1;
  WKInterfaceSemanticContentAttributeSpatial = 2;
  WKInterfaceSemanticContentAttributeForceLeftToRight = 3;
  WKInterfaceSemanticContentAttributeForceRightToLeft = 4;

type
  WKInterfaceDeviceWristLocation = NSInteger;
  WKInterfaceDeviceWristLocationPtr = ^WKInterfaceDeviceWristLocation;

const
  WKInterfaceDeviceWristLocationLeft = 0;
  WKInterfaceDeviceWristLocationRight = 1;

type
  WKInterfaceDeviceCrownOrientation = NSInteger;
  WKInterfaceDeviceCrownOrientationPtr = ^WKInterfaceDeviceCrownOrientation;

const
  WKInterfaceDeviceCrownOrientationLeft = 0;
  WKInterfaceDeviceCrownOrientationRight = 1;
{$endif}

{$if defined(TARGET_OS_WATCH)}
{$ifdef TYPES}
type
  WKWaterResistanceRating = NSInteger;
  WKWaterResistanceRatingPtr = ^WKWaterResistanceRating;

const
  WKWaterResistanceRatingIPX7 = 0;
  NS_SWIFT_NAME = 1;
  ipx7 = 2;
  WKWaterResistanceRatingWR50 = 3;
  NS_SWIFT_NAME = 4;
  wr50 = 5;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  WKInterfaceDevice = objcclass external (NSObject)
  public
    class function currentDevice: WKInterfaceDevice; message 'currentDevice';
    function addCachedImage_name (image: UIImage; name: NSString): boolean; message 'addCachedImage:name:'; { available in 8.2 }
    function addCachedImageWithData_name (imageData: NSData; name: NSString): boolean; message 'addCachedImageWithData:name:'; { available in 8.2 }
    procedure removeCachedImageWithName (name: NSString); message 'removeCachedImageWithName:'; { available in 8.2 }
    procedure removeAllCachedImages; message 'removeAllCachedImages'; { available in 8.2 }
    function cachedImages: NSDictionary; message 'cachedImages';
    function screenBounds: CGRect; message 'screenBounds';
    function screenScale: CGFloat; message 'screenScale';
    function preferredContentSizeCategory: NSString; message 'preferredContentSizeCategory';
    function layoutDirection: WKInterfaceLayoutDirection; message 'layoutDirection';
    function wristLocation: WKInterfaceDeviceWristLocation; message 'wristLocation';
    function crownOrientation: WKInterfaceDeviceCrownOrientation; message 'crownOrientation';
    class function interfaceLayoutDirectionForSemanticContentAttribute (semanticContentAttribute: WKInterfaceSemanticContentAttribute): WKInterfaceLayoutDirection; message 'interfaceLayoutDirectionForSemanticContentAttribute:'; { available in 2.1 }
    function systemVersion: NSString; message 'systemVersion';
    function name: NSString; message 'name';
    function model: NSString; message 'model';
    function localizedModel: NSString; message 'localizedModel';
    function systemName: NSString; message 'systemName';
    {$if defined(TARGET_OS_WATCH)}
    function waterResistanceRating: WKWaterResistanceRating; message 'waterResistanceRating';
    {$endif}
    procedure playHaptic (type_: WKHapticType); message 'playHaptic:'; { available in 2.0 }
  end;
{$endif}

