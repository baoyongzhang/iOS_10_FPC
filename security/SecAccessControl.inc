{ Parsed from Security.framework SecAccessControl.h }

{$ifndef _SECURITY_SECACCESSCONTROL_H_}
{$ifdef TYPES}
type
  SecAccessControlCreateFlags = CFOptionFlags;
  SecAccessControlCreateFlagsPtr = ^SecAccessControlCreateFlags;

const
  kSecAccessControlUserPresence = 1 shl 0;
  kSecAccessControlTouchIDAny = 1 shl 1 { available in NA, 9_0 };
  kSecAccessControlTouchIDCurrentSet = 1 shl 3 { available in NA, 9_0 };
  kSecAccessControlDevicePasscode = 1 shl 4 { available in 10_11, 9_0 };
  kSecAccessControlOr = 1 shl 14 { available in NA, 9_0 };
  kSecAccessControlAnd = 1 shl 15 { available in NA, 9_0 };
  kSecAccessControlPrivateKeyUsage = 1 shl 30 { available in NA, 9_0 };
  kSecAccessControlApplicationPassword = 1 shl 31 { available in NA, 9_0 };
{$endif}

{$endif}
