{ Parsed from CoreMedia.framework CMMetadata.h }

{$ifndef CMMETADATA_H}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMMetadataKeySpace_QuickTimeUserData: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataKeySpace_ISOUserData: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataKeySpace_QuickTimeMetadata: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataKeySpace_iTunes: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataKeySpace_ID3: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataKeySpace_Icy: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataKeySpace_HLSDateRange: CFStringRef { available starting in __MAC_10_11_3, __IPHONE_9_3 }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataLocation_ISO6709: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataDirection_Facing: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataPreferredAffineTransform: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataVideoOrientation: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMetadataCreateIdentifierForKeyAndKeySpace(allocator: CFAllocatorRef CM_NULLABLE; key: CFTypeRef CM_NONNULL; keySpace: CFStringRef CM_NONNULL; identifierOut: CM_RETURNS_RETAINED_PARAMETER CFStringRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataCreateKeyFromIdentifier(allocator: CFAllocatorRef CM_NULLABLE; identifier: CFStringRef CM_NONNULL; keyOut: CM_RETURNS_RETAINED_PARAMETER CFTypeRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataCreateKeyFromIdentifierAsCFData(allocator: CFAllocatorRef CM_NULLABLE; identifier: CFStringRef CM_NONNULL; keyOut: CM_RETURNS_RETAINED_PARAMETER CFDataRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataCreateKeySpaceFromIdentifier(allocator: CFAllocatorRef CM_NULLABLE; identifier: CFStringRef CM_NONNULL; keySpaceOut: CM_RETURNS_RETAINED_PARAMETER CFStringRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMMetadataBaseDataType_RawData: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_UTF8: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_UTF16: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_GIF: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_JPEG: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_PNG: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_BMP: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_Float32: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_Float64: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_SInt8: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_SInt16: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_SInt32: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_SInt64: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_UInt8: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_UInt16: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_UInt32: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_UInt64: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_PointF32: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_DimensionsF32: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_RectF32: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_AffineTransformF64: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataBaseDataType_PolygonF32: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMMetadataBaseDataType_PolylineF32: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMMetadataBaseDataType_JSON: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMMetadataDataType_QuickTimeMetadataLocation_ISO6709: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMMetadataDataType_QuickTimeMetadataDirection: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMetadataDataTypeRegistryRegisterDataType(dataType: CFStringRef CM_NONNULL; description: CFStringRef CM_NONNULL; conformingDataTypes: CFArrayRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataDataTypeRegistryDataTypeIsRegistered(dataType: CFStringRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataDataTypeRegistryGetDataTypeDescription(dataType: CFStringRef CM_NONNULL): CFStringRef CM_NONNULL; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataDataTypeRegistryGetConformingDataTypes(dataType: CFStringRef CM_NONNULL): CFArrayRef CM_NONNULL; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataDataTypeRegistryDataTypeConformsToDataType(dataType: CFStringRef CM_NONNULL; conformsToDataType: CFStringRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataDataTypeRegistryGetBaseDataTypes: CFArrayRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataDataTypeRegistryDataTypeIsBaseDataType(dataType: CFStringRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataDataTypeRegistryGetBaseDataTypeForConformingDataType(dataType: CFStringRef CM_NONNULL): CFStringRef CM_NONNULL; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$endif}
