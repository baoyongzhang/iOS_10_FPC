{ Parsed from CoreText.framework CTFontManager.h }

{$ifndef __CTFONTMANAGER__}
{$ifdef FUNCTIONS}
function CTFontManagerCopyAvailablePostScriptNames: _C_BEGIN
CF_ASSUME_NONNULL_BEGIN




CFArrayRef; cdecl; external; { available in 10_6, 10_0 }
{$endif}

{$ifdef TYPES}
type
  CTFontManagerScope = cuint32;
  CTFontManagerScopePtr = ^CTFontManagerScope;

const
  kCTFontManagerScopeNone = 0;
  kCTFontManagerScopeProcess = 1;
  kCTFontManagerScopeUser = 2;
  kCTFontManagerScopeSession = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontManagerBundleIdentifier: CFStringRef { available in 10_6 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontManagerAutoActivationSetting = cuint32;
  CTFontManagerAutoActivationSettingPtr = ^CTFontManagerAutoActivationSetting;

const
  kCTFontManagerAutoActivationDefault = 0;
  kCTFontManagerAutoActivationDisabled = 1;
  kCTFontManagerAutoActivationEnabled = 2;
  kCTFontManagerAutoActivationPromptUser = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontManagerRegisteredFontsChangedNotification: CFStringRef { available in 10_6, 7_0 }; cvar; external;
{$endif}

{$endif}
