{ Parsed from CoreGraphics.framework CGLayer.h }

{$ifndef CGLAYER_H_}
{$ifdef TYPES}
type
  CGLayerRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGLayerCreateWithContext(context: CGContextRef cg_nullable; size: CGSize; auxiliaryInfo: CFDictionaryRef __nullable): CGLayerRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGLayerRetain(layer: CGLayerRef cg_nullable): CGLayerRef cg_nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGLayerRelease(layer: CGLayerRef cg_nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGLayerGetSize(layer: CGLayerRef cg_nullable): CGSize; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGLayerGetContext(layer: CGLayerRef cg_nullable): CGContextRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextDrawLayerInRect(context: CGContextRef cg_nullable; rect: CGRect; layer: CGLayerRef cg_nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextDrawLayerAtPoint(context: CGContextRef cg_nullable; point: CGPoint; layer: CGLayerRef cg_nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGLayerGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
