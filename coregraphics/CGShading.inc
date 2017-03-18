{ Parsed from CoreGraphics.framework CGShading.h }

{$ifndef CGSHADING_H_}
{$ifdef TYPES}
type
  CGShadingRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGShadingGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGShadingCreateAxial(space: CGColorSpaceRef cg_nullable; start: CGPoint; end_: CGPoint; function_: CGFunctionRef cg_nullable; extendStart: cbool; extendEnd: cbool): CGShadingRef __nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGShadingCreateRadial(space: CGColorSpaceRef cg_nullable; start: CGPoint; startRadius: CGFloat; end_: CGPoint; endRadius: CGFloat; function_: CGFunctionRef cg_nullable; extendStart: cbool; extendEnd: cbool): CGShadingRef __nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGShadingRetain(shading: CGShadingRef cg_nullable): CGShadingRef cg_nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGShadingRelease(shading: CGShadingRef cg_nullable); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
{$endif}

{$endif}
