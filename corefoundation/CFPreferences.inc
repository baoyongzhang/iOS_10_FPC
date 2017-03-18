{ Parsed from CoreFoundation.framework CFPreferences.h }

{$if  not (defined(__COREFOUNDATION_CFPREFERENCES__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFPREFERENCES__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFPreferencesAnyApplication: CFStringRef; cvar; external;
  kCFPreferencesCurrentApplication: CFStringRef; cvar; external;
  kCFPreferencesAnyHost: CFStringRef; cvar; external;
  kCFPreferencesCurrentHost: CFStringRef; cvar; external;
  kCFPreferencesAnyUser: CFStringRef; cvar; external;
  kCFPreferencesCurrentUser: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFPreferencesCopyAppValue(key: CFStringRef; applicationID: CFStringRef): CFPropertyListRef; cdecl; external;
function CFPreferencesGetAppBooleanValue(key: CFStringRef; applicationID: CFStringRef; var keyExistsAndHasValidFormat: Boolean): Boolean; cdecl; external;
function CFPreferencesGetAppIntegerValue(key: CFStringRef; applicationID: CFStringRef; var keyExistsAndHasValidFormat: Boolean): CFIndex; cdecl; external;
procedure CFPreferencesSetAppValue(key: CFStringRef; value: CFPropertyListRef; applicationID: CFStringRef); cdecl; external;
procedure CFPreferencesAddSuitePreferencesToApp(applicationID: CFStringRef; suiteID: CFStringRef); cdecl; external;
procedure CFPreferencesRemoveSuitePreferencesFromApp(applicationID: CFStringRef; suiteID: CFStringRef); cdecl; external;
function CFPreferencesAppSynchronize(applicationID: CFStringRef): Boolean; cdecl; external;
function CFPreferencesCopyValue(key: CFStringRef; applicationID: CFStringRef; userName: CFStringRef; hostName: CFStringRef): CFPropertyListRef; cdecl; external;
function CFPreferencesCopyMultiple(keysToFetch: CFArrayRef; applicationID: CFStringRef; userName: CFStringRef; hostName: CFStringRef): CFDictionaryRef; cdecl; external;
procedure CFPreferencesSetValue(key: CFStringRef; value: CFPropertyListRef; applicationID: CFStringRef; userName: CFStringRef; hostName: CFStringRef); cdecl; external;
procedure CFPreferencesSetMultiple(keysToSet: CFDictionaryRef; keysToRemove: CFArrayRef; applicationID: CFStringRef; userName: CFStringRef; hostName: CFStringRef); cdecl; external;
function CFPreferencesSynchronize(applicationID: CFStringRef; userName: CFStringRef; hostName: CFStringRef): Boolean; cdecl; external;
function CFPreferencesCopyApplicationList(userName: CFStringRef; hostName: CFStringRef): CFArrayRef; cdecl; external; deprecated 'in 10_0, 10_9, 2_0, 7_0';
function CFPreferencesCopyKeyList(applicationID: CFStringRef; userName: CFStringRef; hostName: CFStringRef): CFArrayRef; cdecl; external;
{$endif}

{$ifndef CF_OPEN_SOURCE}
{$ifdef FUNCTIONS}
function CFPreferencesAppValueIsForced(key: CFStringRef; applicationID: CFStringRef): Boolean; cdecl; external;
{$endif}

{$endif}
{$endif}
