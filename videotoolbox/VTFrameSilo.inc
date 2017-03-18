{ Parsed from VideoToolbox.framework VTFrameSilo.h }

{$ifndef VTFRAMESILO_H}

{$ifdef TYPES}
type
  VTFrameSiloRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function VTFrameSiloGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTFrameSiloCreate(allocator: CM_NULLABLE CFAllocatorRef; fileURL: CM_NULLABLE CFURLRef; timeRange: CMTimeRange; options: CM_NULLABLE CFDictionaryRef; siloOut: CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE VTFrameSiloRef* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTFrameSiloAddSampleBuffer(silo: CM_NONNULL VTFrameSiloRef; sampleBuffer: CM_NONNULL CMSampleBufferRef): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTFrameSiloSetTimeRangesForNextPass(silo: CM_NONNULL VTFrameSiloRef; timeRangeCount: CMItemCount; timeRangeArray: CMTimeRange* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTFrameSiloGetProgressOfCurrentPass(silo: CM_NONNULL VTFrameSiloRef; progressOut: Float32* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$endif}
