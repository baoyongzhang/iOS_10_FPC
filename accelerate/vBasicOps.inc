{ Parsed from Accelerate.framework vBasicOps.h }

{$ifndef __VBASICOPS__}

{$if (defined(__ppc__)) or (defined(__ppc64__)) or (defined(__i386__)) or (defined(__x86_64__))}

{$if defined(_AltiVecPIMLanguageExtensionsAreEnabled) or defined(__SSE2__)}

{$ifdef FUNCTIONS}
function vU8Divide(vN: vUInt8; vD: vUInt8; vRemainder: vUInt8* __nullable): vUInt8; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS8Divide(vN: vSInt8; vD: vSInt8; vRemainder: vSInt8* __nullable): vSInt8; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU16Divide(vN: vUInt16; vD: vUInt16; vRemainder: vUInt16* __nullable): vUInt16; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS16Divide(vN: vSInt16; vD: vSInt16; vRemainder: vSInt16* __nullable): vSInt16; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU32Divide(vN: vUInt32; vD: vUInt32; vRemainder: vUInt32* __nullable): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS32Divide(vN: vSInt32; vD: vSInt32; vRemainder: vSInt32* __nullable): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU64Divide(vN: vUInt32; vD: vUInt32; vRemainder: vUInt32* __nullable): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS64Divide(vN: vSInt32; vD: vSInt32; vRemainder: vSInt32* __nullable): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU128Divide(vN: vUInt32; vD: vUInt32; vRemainder: vUInt32* __nullable): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS128Divide(vN: vSInt32; vD: vSInt32; vRemainder: vSInt32* __nullable): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU8HalfMultiply(vA: vUInt8; vB: vUInt8): vUInt8; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS8HalfMultiply(vA: vSInt8; vB: vSInt8): vSInt8; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$if defined(__SSE2__)}

{$else}
{$ifdef FUNCTIONS}
function vU16HalfMultiply(vA: vUInt16; vB: vUInt16): vUInt16; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}

{$if defined(__SSE2__)}

{$else}
{$ifdef FUNCTIONS}
function vS16HalfMultiply(vA: vSInt16; vB: vSInt16): vSInt16; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function vU32HalfMultiply(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS32HalfMultiply(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$if (defined(__SSE2__))}

{$else}
{$ifdef FUNCTIONS}
function vU32FullMulEven(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}

{$if defined(__SSE2__)}

{$else}
{$ifdef FUNCTIONS}
function vU32FullMulOdd(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function vS32FullMulEven(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS32FullMulOdd(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU64FullMulEven(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU64FullMulOdd(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU64HalfMultiply(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS64HalfMultiply(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS64FullMulEven(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS64FullMulOdd(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU128HalfMultiply(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS128HalfMultiply(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$if defined(__SSE2__)}

{$else}
{$ifdef FUNCTIONS}
function vU64Sub(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function vU64SubS(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU128Sub(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU128SubS(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$if defined(__SSE2__)}

{$else}
{$ifdef FUNCTIONS}
function vS64Sub(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function vS128Sub(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS64SubS(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS128SubS(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$if (defined(__SSE2__))}

{$else}
{$ifdef FUNCTIONS}
function vU64Add(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function vU64AddS(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU128Add(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU128AddS(vA: vUInt32; vB: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$if defined(__SSE2__)}

{$else}
{$ifdef FUNCTIONS}
function vS64Add(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function vS64AddS(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS128Add(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS128AddS(vA: vSInt32; vB: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vU64Neg(vA: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vS64Neg(vA: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function vU128Neg(vA: vUInt32): vUInt32; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function vS128Neg(vA: vSInt32): vSInt32; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
{$endif}

{$if (defined(__SSE2__))}

{$else}
{$ifdef FUNCTIONS}
function vLL64Shift(vA: vUInt32; vShiftFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function vA64Shift(vA: vUInt32; vShiftFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$if (defined(__SSE2__))}

{$else}
{$ifdef FUNCTIONS}
function vLR64Shift(vA: vUInt32; vShiftFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function vLL64Shift2(vA: vUInt32; vShiftFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vA64Shift2(vA: vUInt32; vShiftFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vLR64Shift2(vA: vUInt32; vShiftFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vLL128Shift(vA: vUInt32; vShiftFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function vLR128Shift(vA: vUInt32; vShiftFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function vA128Shift(vA: vUInt32; vShiftFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vL64Rotate(vA: vUInt32; vRotateFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vR64Rotate(vA: vUInt32; vRotateFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vL64Rotate2(vA: vUInt32; vRotateFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vR64Rotate2(vA: vUInt32; vRotateFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vL128Rotate(vA: vUInt32; vRotateFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vR128Rotate(vA: vUInt32; vRotateFactor: vUInt8): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$endif}

{$endif}
