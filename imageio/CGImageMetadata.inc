{ Parsed from ImageIO.framework CGImageMetadata.h }

{$ifndef CGIMAGEMETADATA_H_}
{$ifdef TYPES}
type
  CGImageMetadataRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGImageMetadataGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  struct IIO_BRIDGED_TYPE = function (CGImageMetadataCreateMutable(void: id) CGImageMetadata* CGMutableImageMetadataRef;IMAGEIO_EXTERN CGMutableImageMetadataRef __nonnull): ; cdecl { available starting in __MAC_10_8, __IPHONE_7_0 };
{$endif}

{$ifdef FUNCTIONS}
function CGImageMetadataCreateMutableCopy(metadata: CGImageMetadataRef __nonnull): CGMutableImageMetadataRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$ifdef TYPES}
type
  struct IIO_BRIDGED_TYPE = function (CGImageMetadataTagGetTypeID(void: id) CGImageMetadataTag* CGImageMetadataTagRef;IMAGEIO_EXTERN CFTypeID): ; cdecl { available starting in __MAC_10_8, __IPHONE_7_0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageMetadataNamespaceExif: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceExifAux: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceExifEX: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceDublinCore: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceIPTCCore: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespacePhotoshop: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceTIFF: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceXMPBasic: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceXMPRights: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixExif: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixExifAux: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixExifEX: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixDublinCore: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixIPTCCore: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixPhotoshop: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixTIFF: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixXMPBasic: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixXMPRights: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CGImageMetadataType = cint32;
  CGImageMetadataTypePtr = ^CGImageMetadataType;

const
  kCGImageMetadataTypeInvalid = -1;
  kCGImageMetadataTypeDefault = 0;
  kCGImageMetadataTypeString = 1;
  kCGImageMetadataTypeArrayUnordered = 2;
  kCGImageMetadataTypeArrayOrdered = 3;
  kCGImageMetadataTypeAlternateArray = 4;
  kCGImageMetadataTypeAlternateText = 5;
  kCGImageMetadataTypeStructure = 6;
{$endif}

{$ifdef FUNCTIONS}
function CGImageMetadataTagCreate(xmlns: CFStringRef __nonnull; prefix: CFStringRef __nullable; name: CFStringRef __nonnull; type_: CGImageMetadataType; value: CFTypeRef __nonnull): CGImageMetadataTagRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyNamespace(tag: CGImageMetadataTagRef __nonnull): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyPrefix(tag: CGImageMetadataTagRef __nonnull): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyName(tag: CGImageMetadataTagRef __nonnull): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyValue(tag: CGImageMetadataTagRef __nonnull): CFTypeRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagGetType(tag: CGImageMetadataTagRef __nonnull): CGImageMetadataType; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyQualifiers(tag: CGImageMetadataTagRef __nonnull): CFArrayRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCopyTags(metadata: CGImageMetadataRef __nonnull): CFArrayRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCopyTagWithPath(metadata: CGImageMetadataRef __nonnull; parent: CGImageMetadataTagRef __nullable; path: CFStringRef __nonnull): CGImageMetadataTagRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCopyStringValueWithPath(metadata: CGImageMetadataRef __nonnull; parent: CGImageMetadataTagRef __nullable; path: CFStringRef __nonnull): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataRegisterNamespaceForPrefix(metadata: CGMutableImageMetadataRef __nonnull; xmlns: CFStringRef __nonnull; prefix: CFStringRef __nonnull; err: __nullable CFErrorRef* __nullable): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataSetTagWithPath(metadata: CGMutableImageMetadataRef __nonnull; parent: CGImageMetadataTagRef __nullable; path: CFStringRef __nonnull; tag: CGImageMetadataTagRef __nonnull): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataSetValueWithPath(metadata: CGMutableImageMetadataRef __nonnull; parent: CGImageMetadataTagRef __nullable; path: CFStringRef __nonnull; value: CFTypeRef __nonnull): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataRemoveTagWithPath(metadata: CGMutableImageMetadataRef __nonnull; parent: CGImageMetadataTagRef __nullable; path: CFStringRef __nonnull): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$ifdef __BLOCKS__}
{$ifdef TYPES}
type
  CGImageMetadataTagBlock = OpaqueCBlock;
{$endif}

{$ifdef FUNCTIONS}
procedure CGImageMetadataEnumerateTagsUsingBlock(metadata: CGImageMetadataRef __nonnull; rootPath: CFStringRef __nullable; options: CFDictionaryRef __nullable; block: CGImageMetadataTagBlock __nonnull); cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageMetadataEnumerateRecursively: CFStringRef __nonnull { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGImageMetadataCopyTagMatchingImageProperty(metadata: CGImageMetadataRef __nonnull; dictionaryName: CFStringRef __nonnull; propertyName: CFStringRef __nonnull): CGImageMetadataTagRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataSetValueMatchingImageProperty(metadata: CGMutableImageMetadataRef __nonnull; dictionaryName: CFStringRef __nonnull; propertyName: CFStringRef __nonnull; value: CFTypeRef __nonnull): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCreateXMPData(metadata: CGImageMetadataRef __nonnull; options: CFDictionaryRef __nullable): CFDataRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCreateFromXMPData(data: CFDataRef __nonnull): CGImageMetadataRef __nullable; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFErrorDomainCGImageMetadata: CFStringRef __nonnull; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CGImageMetadataErrors = cint32;
  CGImageMetadataErrorsPtr = ^CGImageMetadataErrors;
{$endif}

{$endif}
