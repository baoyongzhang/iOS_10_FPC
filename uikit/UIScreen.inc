{ Parsed from UIKit.framework UIScreen.h }

{ Types from UIScreen }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  UIScreenPtr = ^UIScreen;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIScreenDidConnectNotification: NSNotificationName { available in 3_2 }; cvar; external;
  UIScreenDidDisconnectNotification: NSNotificationName { available in 3_2 }; cvar; external;
  UIScreenModeDidChangeNotification: NSNotificationName { available in 3_2 }; cvar; external;
  UIScreenBrightnessDidChangeNotification: NSNotificationName { available in 5_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UIScreenOverscanCompensation = NSInteger;
  UIScreenOverscanCompensationPtr = ^UIScreenOverscanCompensation;

const
  UIScreenOverscanCompensationScale = 0;
  UIScreenOverscanCompensationInsetBounds = 1;
  UIScreenOverscanCompensationNone = 2 { available in 9_0 };
  UIScreenOverscanCompensationInsetApplicationFrame = 2 deprecated 'in 5_0, 9_0, "Use UIScreenOverscanCompensationNone"';
{$endif}

{$ifdef CLASSES}

type
  UIScreen = objcclass external (NSObject, UITraitEnvironmentProtocol)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function screens: UIScreen *ProtocolPtr; message 'screens';
    function mainScreen: UIScreen; message 'mainScreen';
    {$else}
    class function screens: UIScreen *ProtocolPtr; message 'screens'; { available in 3_2 }
    class function mainScreen: UIScreen; message 'mainScreen';
    {$endif}
    function bounds: CGRect; message 'bounds';
    function scale: CGFloat; message 'scale';
    function __TVOS_PROHIBITED_: UIScreenMode *Protocol *availableModes; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: UIScreenMode *preferredMode; message 'TVOS_PROHIBITED';
    {$if defined(TARGET_OS_TV)}
    function currentMode: UIScreenMode; message 'currentMode';
    {$else}
    procedure setCurrentMode(newValue: UIScreenMode); message 'setCurrentMode:';
    function currentMode_: UIScreenMode; message 'currentMode';
    {$endif}
    procedure setOverscanCompensation(newValue: UIScreenOverscanCompensation); message 'setOverscanCompensation:';
    function overscanCompensation: UIScreenOverscanCompensation; message 'overscanCompensation';
    function overscanCompensationInsets: UIEdgeInsets; message 'overscanCompensationInsets';
    function mirroredScreen: UIScreen; message 'mirroredScreen';
    procedure set__TVOS_PROHIBITED(newValue: CGFloat brightness); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: CGFloat brightness; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: BOOL wantsSoftwareDimming); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___: BOOL wantsSoftwareDimming; message 'TVOS_PROHIBITED';
    function coordinateSpace: UICoordinateSpaceProtocol; message 'coordinateSpace';
    function fixedCoordinateSpace: UICoordinateSpaceProtocol; message 'fixedCoordinateSpace';
    function nativeBounds: CGRect; message 'nativeBounds';
    function nativeScale: CGFloat; message 'nativeScale';
    function displayLinkWithTarget_selector (target: id; sel_: SEL): nullable CADisplayLinkPtr; message 'displayLinkWithTarget:selector:'; { available in 4_0 }
    function focusedItem: UIFocusItemProtocol; message 'focusedItem';
    function focusedView: UIView; message 'focusedView';
    function supportsFocus: boolean; message 'supportsFocus';
    function __TVOS_PROHIBITED____: CGRect applicationFrame; message 'TVOS_PROHIBITED';

    { Adopted protocols }
    function traitCollection: UITraitCollection; message 'traitCollection';
    procedure traitCollectionDidChange (previousTraitCollection: nullable UITraitCollectionPtr); message 'traitCollectionDidChange:'; { available in 8_0 }
  end;


type
  UISnapshotting = objccategory external (UIScreen)
    function snapshotViewAfterScreenUpdates (afterUpdates: boolean): UIView; message 'snapshotViewAfterScreenUpdates:'; { available in 7_0 }
  end;
{$endif}

