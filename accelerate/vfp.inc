{ Parsed from Accelerate.framework vfp.h }

{$ifndef __VFP__}

{$if defined(__SSE2__) or defined(__ARM_NEON__)}

{$if defined(__SSE4_1__)}

{$else}
{$ifdef FUNCTIONS}
function vceilf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_6_0 }
function vfloorf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_6_0 }
function vtruncf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
function vnintf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_6_0 }
function vintf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
{$endif}

{$endif}

{$ifdef FUNCTIONS}
function vexpf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vexp2f(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
function vexpm1f(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vlogf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vlog2f(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
function vlog10f(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_6_0 }
function vlog1pf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vlogbf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vscalbf(param1: vFloat; param2: vSInt32): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vpowf(param1: vFloat; param2: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vipowf(param1: vFloat; param2: vSInt32): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vsinf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vcosf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vsincosf(param1: vFloat; param2: vFloatPtr): vFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_6_0 }
function vtanf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vsinpif(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
function vcospif(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
function vtanpif(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
function vasinf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vacosf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vatanf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vatan2f(param1: vFloat; param2: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vsinhf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vcoshf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vtanhf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vasinhf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vacoshf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vatanhf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vrecf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_6_0 }
function vsqrtf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vrsqrtf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vdivf(param1: vFloat; param2: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vfmodf(param1: vFloat; param2: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vremainderf(param1: vFloat; param2: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vremquof(param1: vFloat; param2: vFloat; param3: vUInt32Ptr): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vfabsf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
function vcopysignf(param1: vFloat; param2: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vsignbitf(param1: vFloat): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vnextafterf(param1: vFloat; param2: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vclassifyf(param1: vFloat): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
function vfabf(param1: vFloat): vFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function vtablelookup(param1: vSInt32; param2: pcuint32): vUInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_6_0 }
{$endif}

{$endif}
{$endif}
