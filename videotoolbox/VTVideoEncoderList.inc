{ Parsed from VideoToolbox.framework VTVideoEncoderList.h }

{$ifndef VTVIDEOENCODERLIST_H}

{$ifdef FUNCTIONS}
function VTCopyVideoEncoderList(options: CM_NULLABLE CFDictionaryRef; listOfVideoEncodersOut: CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE CFArrayRef* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTVideoEncoderList_CodecType: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTVideoEncoderList_EncoderID: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTVideoEncoderList_CodecName: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTVideoEncoderList_EncoderName: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTVideoEncoderList_DisplayName: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
{$endif}

{$endif}
