{ Parsed from CoreGraphics.framework CGFunction.h }

{$ifndef CGFUNCTION_H_}
{$ifdef TYPES}
type
  CGFunctionRef = OpaqueType;
  CGFunctionEvaluateCallback = procedure (info: pointer; param2: CGFloatPtr; param3: CGFloatPtr); cdecl;
  CGFunctionReleaseInfoCallback = procedure (info: pointer); cdecl;

type
  CGFunctionCallbacks = record
    version: cuint;
    evaluate: CGFunctionEvaluateCallback;
    releaseInfo: CGFunctionReleaseInfoCallback;
  end;
type
  CGFunctionCallbacksPtr = ^CGFunctionCallbacks;
{$endif}

{$ifdef FUNCTIONS}
function CGFunctionGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGFunctionCreate(info: pointer; domainDimension: size_t; domain: CGFloat; rangeDimension: size_t; range: CGFloat; callbacks: CGFunctionCallbacks): CGFunctionRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGFunctionRetain(function_: CGFunctionRef): CGFunctionRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGFunctionRelease(function_: CGFunctionRef); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
{$endif}

{$endif}
