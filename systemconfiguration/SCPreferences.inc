{ Parsed from SystemConfiguration.framework SCPreferences.h }

{$ifndef _SCPREFERENCES_H}

{$ifdef USE_SYSTEMCONFIGURATION_PRIVATE_HEADERS}

{$else}

{$if  not defined(TARGET_OS_IPHONE)}

{$else}
{$ifdef TYPES}
type
  AuthorizationRef = OpaqueType;
{$endif}

{$endif}
{$ifdef TYPES}
type
  SCPreferencesRef = OpaqueType;
  SCPreferencesNotification = cuint32;
  SCPreferencesNotificationPtr = ^SCPreferencesNotification;

const
  kSCPreferencesNotificationCommit = 1 shl 0;
  kSCPreferencesNotificationApply = 1 shl 1;

type
  SCPreferencesContext = record
    version: CFIndex;
    info: void *__nullable;
    info): void *__nonnull ( *__nullable retain)( voidPtr;
    info)_: void ( *__nullable release)( voidPtr;
    info)_: CFStringRef __nonnull ( *__nullable copyDescription)( voidPtr;
  end;
type
  SCPreferencesContextPtr = ^SCPreferencesContext;

type
  SCPreferencesCallBack = procedure (prefs: SCPreferencesRef; notificationType: SCPreferencesNotification; info: void* __nullable); cdecl;
{$endif}

{$endif}
{$endif}
