{ Parsed from VideoToolbox.framework VTMultiPassStorage.h }

{$ifndef VTMULTIPASSSTORAGE_H}

{$ifdef TYPES}
type
  VTMultiPassStorageRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function VTMultiPassStorageGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTMultiPassStorageCreate(allocator: CM_NULLABLE CFAllocatorRef; fileURL: CM_NULLABLE CFURLRef; timeRange: CMTimeRange; options: CM_NULLABLE CFDictionaryRef; multiPassStorageOut: CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE VTMultiPassStorageRef* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTMultiPassStorageCreationOption_DoNotDelete: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function VTMultiPassStorageClose(multiPassStorage: CM_NONNULL VTMultiPassStorageRef): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$endif}
