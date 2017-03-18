{ Parsed from VideoToolbox.framework VTUtilities.h }

{$ifndef VTUTILITIES_H}

{$ifdef FUNCTIONS}
function VTCreateCGImageFromCVPixelBuffer(pixelBuffer: CM_NONNULL CVPixelBufferRef; options: CM_NULLABLE CFDictionaryRef; imageOut: CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE CGImageRef* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
{$endif}

{$endif}
