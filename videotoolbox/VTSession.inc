{ Parsed from VideoToolbox.framework VTSession.h }

{$ifndef VTSESSION_H}

{$ifdef TYPES}
type
  VTSessionRef = CM_BRIDGED_TYPE(id) CFTypeRef;
  VTSessionRefPtr = ^VTSessionRef;
{$endif}

{$ifdef FUNCTIONS}
function VTSessionCopySupportedPropertyDictionary(session: CM_NONNULL VTSessionRef; supportedPropertyDictionaryOut: CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE CFDictionaryRef* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTPropertyTypeKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyType_Enumeration: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyType_Boolean: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyType_Number: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyReadWriteStatusKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyReadWriteStatus_ReadOnly: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyReadWriteStatus_ReadWrite: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyShouldBeSerializedKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertySupportedValueMinimumKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertySupportedValueMaximumKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertySupportedValueListKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyDocumentationKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function VTSessionSetProperty(session: CM_NONNULL VTSessionRef; propertyKey: CM_NONNULL CFStringRef; propertyValue: CM_NONNULL CFTypeRef): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTSessionCopyProperty(session: CM_NONNULL VTSessionRef; propertyKey: CM_NONNULL CFStringRef; allocator: CM_NULLABLE CFAllocatorRef; propertyValueOut: void* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTSessionSetProperties(session: CM_NONNULL VTSessionRef; propertyDictionary: CM_NONNULL CFDictionaryRef): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTSessionCopySerializableProperties(session: CM_NONNULL VTSessionRef; allocator: CM_NULLABLE CFAllocatorRef; dictionaryOut: CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE CFDictionaryRef* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
{$endif}

{$endif}
