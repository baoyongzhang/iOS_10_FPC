{ Parsed from VideoToolbox.framework VTPixelTransferProperties.h }

{$ifndef VTPIXELTRANSFERPROPERTIES_H}

{$ifndef VT_SUPPORT_COLORSYNC_PIXEL_TRANSFER}

{$if defined(TARGET_OS_TV)}

{$elseif defined(TARGET_OS_WATCH)}
{$ifdef TYPES}
const
  VT_SUPPORT_COLORSYNC_PIXEL_TRANSFER = 0;
{$endif}

{$elseif defined(TARGET_OS_IPHONE)}

{$elseif defined(TARGET_OS_MAC)}

{$else}
{$ifdef TYPES}
const
  VT_SUPPORT_COLORSYNC_PIXEL_TRANSFER = 0;
{$endif}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTPixelTransferPropertyKey_ScalingMode: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTScalingMode_Normal: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTScalingMode_CropSourceToCleanAperture: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTScalingMode_Letterbox: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTScalingMode_Trim: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationCleanAperture: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationPixelAspectRatio: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTPixelTransferPropertyKey_DownsamplingMode: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTDownsamplingMode_Decimate: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTDownsamplingMode_Average: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationColorPrimaries: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationTransferFunction: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationICCProfile: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationYCbCrMatrix: CFStringRef { available starting in __MAC_10_8,__IPHONE_9_0 }; cvar; external;
{$endif}

{$endif}
