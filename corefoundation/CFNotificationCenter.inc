{ Parsed from CoreFoundation.framework CFNotificationCenter.h }

{$if  not (defined(__COREFOUNDATION_CFNOTIFICATIONCENTER__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFNOTIFICATIONCENTER__ = 1;

type
  CFNotificationName = CFStringRef;
  CFDictionaryRef = OpaqueType;  
  CFNotificationCenterRef = OpaqueType;
  CFNotificationCallback = procedure (center: CFNotificationCenterRef; observer: pointer; name: CFNotificationName; object_: pointer; userInfo: CFDictionaryRef); cdecl;
  CFNotificationSuspensionBehavior = CFIndex;
  CFNotificationSuspensionBehaviorPtr = ^CFNotificationSuspensionBehavior;

const
  CFNotificationSuspensionBehaviorDrop = 1;
  CFNotificationSuspensionBehaviorCoalesce = 2;
  CFNotificationSuspensionBehaviorHold = 3;
  CFNotificationSuspensionBehaviorDeliverImmediately = 4;
{$endif}

{$ifdef FUNCTIONS}
function CFNotificationCenterGetTypeID: CFTypeID; cdecl; external;
function CFNotificationCenterGetLocalCenter: CFNotificationCenterRef; cdecl; external;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or defined(TARGET_OS_WIN32)}
{$ifdef FUNCTIONS}
function CFNotificationCenterGetDistributedCenter: CFNotificationCenterRef; cdecl; external;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CFNotificationCenterGetDarwinNotifyCenter: CFNotificationCenterRef; cdecl; external;
procedure CFNotificationCenterAddObserver(center: CFNotificationCenterRef; observer: pointer; callBack: CFNotificationCallback; name: CFStringRef; object_: pointer; suspensionBehavior: CFNotificationSuspensionBehavior); cdecl; external;
procedure CFNotificationCenterRemoveObserver(center: CFNotificationCenterRef; observer: pointer; name: CFNotificationName; object_: pointer); cdecl; external;
procedure CFNotificationCenterRemoveEveryObserver(center: CFNotificationCenterRef; observer: pointer); cdecl; external;
procedure CFNotificationCenterPostNotification(center: CFNotificationCenterRef; name: CFNotificationName; object_: pointer; userInfo: CFDictionaryRef; deliverImmediately: Boolean); cdecl; external;
procedure CFNotificationCenterPostNotificationWithOptions(center: CFNotificationCenterRef; name: CFNotificationName; object_: pointer; userInfo: CFDictionaryRef; options: CFOptionFlags); cdecl; external;
{$endif}

{$endif}
