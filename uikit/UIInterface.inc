{ Parsed from UIKit.framework UIInterface.h }

{ Types from UIColorSystemColors }
{$ifdef TYPES}

{$endif}


{ Types from UIFontSystemFonts }
{$ifdef TYPES}

{$endif}

{$ifdef TYPES}
type
  UIBarStyle = NSInteger;
  UIBarStylePtr = ^UIBarStyle;

const
  UIBarStyleDefault = 0;
  UIBarStyleBlack = 1;
  UIBarStyleBlackOpaque = 1;
  UIBarStyleBlackTranslucent = 2;

type
  UIUserInterfaceSizeClass = NSInteger;
  UIUserInterfaceSizeClassPtr = ^UIUserInterfaceSizeClass;

const
  UIUserInterfaceSizeClassUnspecified = 0;
  UIUserInterfaceSizeClassCompact = 1;
  UIUserInterfaceSizeClassRegular = 2;

type
  UIUserInterfaceStyle = NSInteger;
  UIUserInterfaceStylePtr = ^UIUserInterfaceStyle;

const
  UIUserInterfaceStyleUnspecified = 0;
  UIUserInterfaceStyleLight = 1;
  UIUserInterfaceStyleDark = 2;

type
  UIUserInterfaceLayoutDirection = NSInteger;
  UIUserInterfaceLayoutDirectionPtr = ^UIUserInterfaceLayoutDirection;

const
  UIUserInterfaceLayoutDirectionLeftToRight = 0;
  UIUserInterfaceLayoutDirectionRightToLeft = 1;

type
  UITraitEnvironmentLayoutDirection = NSInteger;
  UITraitEnvironmentLayoutDirectionPtr = ^UITraitEnvironmentLayoutDirection;

const
  UITraitEnvironmentLayoutDirectionUnspecified = -1;
  UITraitEnvironmentLayoutDirectionLeftToRight = UIUserInterfaceLayoutDirectionLeftToRight;
  UITraitEnvironmentLayoutDirectionRightToLeft = UIUserInterfaceLayoutDirectionRightToLeft;

type
  UIDisplayGamut = NSInteger;
  UIDisplayGamutPtr = ^UIDisplayGamut;

const
  UIDisplayGamutUnspecified = -1;
  UIDisplayGamutSRGB = 0;
  UIDisplayGamutP3 = 1;
{$endif}

{$ifdef CLASSES}

type
  UIColorSystemColors = objccategory external (UIColor)
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function __TVOS_PROHIBITED_: UIColor *lightTextColor; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: UIColor *darkTextColor; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED__: UIColor *groupTableViewBackgroundColor; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED___: UIColor *viewFlipsideBackgroundColor; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED____: UIColor *scrollViewTexturedBackgroundColor; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_____: UIColor *underPageBackgroundColor; message 'TVOS_PROHIBITED';
    {$else}
    class function lightTextColor __TVOS_PROHIBITED: UIColor; message 'lightTextColor __TVOS_PROHIBITED';
    class function darkTextColor __TVOS_PROHIBITED: UIColor; message 'darkTextColor __TVOS_PROHIBITED';
    class function groupTableViewBackgroundColor __TVOS_PROHIBITED: UIColor; message 'groupTableViewBackgroundColor __TVOS_PROHIBITED';
    class function viewFlipsideBackgroundColor                             __TVOS_PROHIBITED: UIColor; message 'viewFlipsideBackgroundColor                             __TVOS_PROHIBITED'; deprecated 'in 2_0, 7_0';
    class function scrollViewTexturedBackgroundColor                             __TVOS_PROHIBITED: UIColor; message 'scrollViewTexturedBackgroundColor                             __TVOS_PROHIBITED'; deprecated 'in 3_2, 7_0';
    class function underPageBackgroundColor                             __TVOS_PROHIBITED: UIColor; message 'underPageBackgroundColor                             __TVOS_PROHIBITED'; deprecated 'in 5_0, 7_0';
    {$endif}
  end;

type
  UIFontSystemFonts = objccategory external (UIFont)
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function __TVOS_PROHIBITED_: CGFloat labelFontSize; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: CGFloat buttonFontSize; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED__: CGFloat smallSystemFontSize; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED___: CGFloat systemFontSize; message 'TVOS_PROHIBITED';
    {$else}
    class function labelFontSize __TVOS_PROHIBITED: CGFloat; message 'labelFontSize __TVOS_PROHIBITED';
    class function buttonFontSize __TVOS_PROHIBITED: CGFloat; message 'buttonFontSize __TVOS_PROHIBITED';
    class function smallSystemFontSize __TVOS_PROHIBITED: CGFloat; message 'smallSystemFontSize __TVOS_PROHIBITED';
    class function systemFontSize __TVOS_PROHIBITED: CGFloat; message 'systemFontSize __TVOS_PROHIBITED';
    {$endif}
  end;
{$endif}

