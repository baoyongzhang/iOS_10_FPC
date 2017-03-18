{ Parsed from MapKit.framework MKPinAnnotationView.h }

{ Types from MKPinAnnotationView }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  MKPinAnnotationViewPtr = ^MKPinAnnotationView;
{$endif}

{$ifdef TYPES}
type
  MKPinAnnotationColor = NSUInteger;
  MKPinAnnotationColorPtr = ^MKPinAnnotationColor;

const
  MKPinAnnotationColorRed = 0;
  MKPinAnnotationColorGreen = 1;
  MKPinAnnotationColorPurple = 2;
{$endif}

{$ifdef CLASSES}

type
  MKPinAnnotationView = objcclass external (MKAnnotationView)
  public
    {$if defined(TARGET_OS_IPHONE)}
    class function redPinColor: UIColor; message 'redPinColor'; { available in 10_11, 9_0 }
    class function greenPinColor: UIColor; message 'greenPinColor'; { available in 10_11, 9_0 }
    class function purplePinColor: UIColor; message 'purplePinColor'; { available in 10_11, 9_0 }
    {$else}
    class function redPinColor: NSColor; message 'redPinColor'; { available in 10_11, 9_0 }
    class function greenPinColor: NSColor; message 'greenPinColor'; { available in 10_11, 9_0 }
    class function purplePinColor: NSColor; message 'purplePinColor'; { available in 10_11, 9_0 }
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setUI_APPEARANCE_SELECTOR(newValue: UIColor *pinTintColor); message 'setUI_APPEARANCE_SELECTOR:';
    function UI_APPEARANCE_SELECTOR: UIColor *pinTintColor; message 'UI_APPEARANCE_SELECTOR';
    {$else}
    procedure setPinTintColor(newValue: NSColor); message 'setPinTintColor:';
    function pinTintColor: NSColor; message 'pinTintColor';
    {$endif}
    procedure setAnimatesDrop(newValue: boolean); message 'setAnimatesDrop:';
    function animatesDrop: boolean; message 'animatesDrop';
    procedure set__TVOS_PROHIBITED(newValue: MKPinAnnotationColor pinColor); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: MKPinAnnotationColor pinColor; message 'TVOS_PROHIBITED';
  end;
{$endif}

