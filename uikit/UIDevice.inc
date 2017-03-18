{ Parsed from UIKit.framework UIDevice.h }

{ Types from UIDevice }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIDevicePtr = ^UIDevice;
  UIInputViewAudioFeedbackProtocolPtr = ^UIInputViewAudioFeedbackProtocol;
{$endif}

{$ifdef TYPES}
type
  UIDeviceOrientation = NSInteger;
  UIDeviceOrientationPtr = ^UIDeviceOrientation;

const
  UIDeviceOrientationUnknown = 0;
  UIDeviceOrientationPortrait = 1;
  UIDeviceOrientationPortraitUpsideDown = 2;
  UIDeviceOrientationLandscapeLeft = 3;
  UIDeviceOrientationLandscapeRight = 4;
  UIDeviceOrientationFaceUp = 5;
  UIDeviceOrientationFaceDown = 6;

type
  UIDeviceBatteryState = NSInteger;
  UIDeviceBatteryStatePtr = ^UIDeviceBatteryState;

const
  UIDeviceBatteryStateUnknown = 0;
  UIDeviceBatteryStateUnplugged = 1;
  UIDeviceBatteryStateCharging = 2;
  UIDeviceBatteryStateFull = 3;

type
  UIUserInterfaceIdiom = NSInteger;
  UIUserInterfaceIdiomPtr = ^UIUserInterfaceIdiom;

const
  UIUserInterfaceIdiomUnspecified = -1;
  UIUserInterfaceIdiomPhone = 0 { available in 3_2 };
  UIUserInterfaceIdiomPad = 1 { available in 3_2 };
  UIUserInterfaceIdiomTV = 2 { available in 9_0 };
  UIUserInterfaceIdiomCarPlay = 3 { available in 9_0 };
{$endif}

{$ifdef CLASSES}

type
  UIDevice = objcclass external (NSObject)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function currentDevice: UIDevice; message 'currentDevice';
    {$else}
    class function currentDevice: UIDevice; message 'currentDevice';
    {$endif}
    function name: NSString; message 'name';
    function model: NSString; message 'model';
    function localizedModel: NSString; message 'localizedModel';
    function systemName: NSString; message 'systemName';
    function systemVersion: NSString; message 'systemVersion';
    function __TVOS_PROHIBITED_: UIDeviceOrientation orientation; message 'TVOS_PROHIBITED';
    function identifierForVendor: NSUUID; message 'identifierForVendor';
    function isGeneratingDeviceOrientationNotifications: BOOL generatesDeviceOrientationNotifications; message 'isGeneratingDeviceOrientationNotifications';
    procedure beginGeneratingDeviceOrientationNotifications __TVOS_PROHIBITED; message 'beginGeneratingDeviceOrientationNotifications __TVOS_PROHIBITED';
    procedure endGeneratingDeviceOrientationNotifications __TVOS_PROHIBITED; message 'endGeneratingDeviceOrientationNotifications __TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED(newValue: BOOL batteryMonitoringEnabled); message 'set__TVOS_PROHIBITED:';
    function isBatteryMonitoringEnabled: BOOL batteryMonitoringEnabled; message 'isBatteryMonitoringEnabled';
    function __TVOS_PROHIBITED_: UIDeviceBatteryState batteryState; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED__: float batteryLevel; message 'TVOS_PROHIBITED';
    procedure setProximityMonitoringEnabled(newValue: boolean); message 'setProximityMonitoringEnabled:';
    function isProximityMonitoringEnabled: boolean; message 'isProximityMonitoringEnabled';
    function proximityState: boolean; message 'proximityState';
    function isMultitaskingSupported: boolean; message 'isMultitaskingSupported';
    function userInterfaceIdiom: UIUserInterfaceIdiom; message 'userInterfaceIdiom';
    procedure playInputClick; message 'playInputClick'; { available in 4_2 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIInputViewAudioFeedbackProtocol = objcprotocol external name 'UIInputViewAudioFeedback' (NSObjectProtocol)
  optional
    function enableInputClicksWhenVisible: boolean; message 'enableInputClicksWhenVisible';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSNotificationName UIDeviceOrientationDidChangeNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIDeviceBatteryStateDidChangeNotification { available in 3_0 }; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIDeviceBatteryLevelDidChangeNotification { available in 3_0 }; cvar; external;
  UIDeviceProximityStateDidChangeNotification: NSNotificationName { available in 3_0 }; cvar; external;
{$endif}

