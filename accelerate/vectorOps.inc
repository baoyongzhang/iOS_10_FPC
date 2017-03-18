{ Parsed from Accelerate.framework vectorOps.h }

{$ifndef __VECTOROPS__}

{$if defined(_AltiVecPIMLanguageExtensionsAreEnabled) or defined(__SSE__)}
{$ifdef FUNCTIONS}
function vIsamax(count: cint32; x: vFloatPtr): cint32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vIsamin(count: cint32; x: vFloatPtr): cint32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vIsmax(count: cint32; x: vFloatPtr): cint32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vIsmin(count: cint32; x: vFloatPtr): cint32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vSasum(count: cint32; x: vFloatPtr): single; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vSsum(count: cint32; x: vFloatPtr): single; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSaxpy(n: cint32; alpha: single; x: vFloatPtr; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vScopy(n: cint32; x: vFloatPtr; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vSdot(n: cint32; x: vFloatPtr; y: vFloatPtr): single; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSnaxpy(n: cint32; m: cint32; a: vFloatPtr; x: vFloatPtr; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSndot(n: cint32; m: cint32; s: psingle; isw: cint32; x: vFloatPtr; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vSnrm2(count: cint32; x: vFloatPtr): single; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vSnorm2(count: cint32; x: vFloatPtr): single; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSrot(n: cint32; x: vFloatPtr; y: vFloatPtr; c: single; s: single); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSscal(n: cint32; alpha: single; x: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSswap(n: cint32; x: vFloatPtr; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSyax(n: cint32; alpha: single; x: vFloatPtr; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSzaxpy(n: cint32; alpha: single; x: vFloatPtr; y: vFloatPtr; z: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgemv(forma: char; m: cint32; n: cint32; alpha: single; a: vFloatPtr; x: vFloatPtr; beta: single; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgemx(m: cint32; n: cint32; alpha: single; a: vFloatPtr; x: vFloatPtr; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgemtx(m: cint32; n: cint32; alpha: single; a: vFloatPtr; x: vFloatPtr; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgeadd(height: cint32; width: cint32; a: vFloatPtr; forma: char; b: vFloatPtr; formb: char; c: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgesub(height: cint32; width: cint32; a: vFloatPtr; forma: char; b: vFloatPtr; formb: char; c: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgemul(l: cint32; m: cint32; n: cint32; a: vFloatPtr; forma: char; b: vFloatPtr; formb: char; matrix: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgemm(l: cint32; m: cint32; n: cint32; a: vFloatPtr; forma: char; b: vFloatPtr; formb: char; c: vFloatPtr; alpha: single; beta: single; matrix: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgetmi(size: cint32; x: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgetmo(height: cint32; width: cint32; x: vFloatPtr; y: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vSgevv(l: cint32; n: cint32; A: vFloatPtr; B: vFloatPtr; M: vFloatPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}

{$endif}
