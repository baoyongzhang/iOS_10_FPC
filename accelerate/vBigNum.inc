{ Parsed from Accelerate.framework vBigNum.h }

{$ifndef __VBIGNUM__}

{$if (defined(__ppc__)) or (defined(__ppc64__)) or (defined(__i386__)) or (defined(__x86_64__))}

{$if defined(_AltiVecPIMLanguageExtensionsAreEnabled)}
{$ifdef TYPES}
type
  vU128 = record
    case longint of
      0: (v: vUInt32);
      1: (
        vs: record
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          MSW: cuint32;
          d2: cuint32;
          d3: cuint32;
          LSW: cuint32;
        end;
      );
  end;
type
  vU128Ptr = ^vU128;
type
  vS128 = record
    case longint of
      0: (v: vUInt32);
      1: (
        vs: record
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          MSW: cint32;
          d2: cuint32;
          d3: cuint32;
          LSW: cuint32;
        end;
      );
  end;
type
  vS128Ptr = ^vS128;
type
  vU256 = record
    case longint of
      0: (v:array[0..1] of vUInt32);
      1: (
        vs: record
          v1: vUInt32;
          v2: vUInt32;
        end;
      );
      2: (
        s: record
          MSW: cuint32;
          d2: cuint32;
          d3: cuint32;
          d4: cuint32;
          d5: cuint32;
          d6: cuint32;
          d7: cuint32;
          LSW: cuint32;
        end;
      );
  end;
type
  vU256Ptr = ^vU256;
type
  vS256 = record
    case longint of
      0: (v:array[0..1] of vUInt32);
      1: (
        vs: record
          v1: vUInt32;
          v2: vUInt32;
        end;
      );
      2: (
        s: record
          MSW: cint32;
          d2: cuint32;
          d3: cuint32;
          d4: cuint32;
          d5: cuint32;
          d6: cuint32;
          d7: cuint32;
          LSW: cuint32;
        end;
      );
  end;
type
  vS256Ptr = ^vS256;
type
  vU512 = record
    case longint of
      0: (v:array[0..3] of vUInt32);
      1: (
        vs: record
          v1: vUInt32;
          v2: vUInt32;
          v3: vUInt32;
          v4: vUInt32;
        end;
      );
      2: (
        s: record
          MSW: cuint32;
          d2: cuint32;
          d3: cuint32;
          d4: cuint32;
          d5: cuint32;
          d6: cuint32;
          d7: cuint32;
          d8: cuint32;
          d9: cuint32;
          d10: cuint32;
          d11: cuint32;
          d12: cuint32;
          d13: cuint32;
          d14: cuint32;
          d15: cuint32;
          LSW: cuint32;
        end;
      );
  end;
type
  vU512Ptr = ^vU512;
type
  vS512 = record
    case longint of
      0: (v:array[0..3] of vUInt32);
      1: (
        vs: record
          v1: vUInt32;
          v2: vUInt32;
          v3: vUInt32;
          v4: vUInt32;
        end;
      );
      2: (
        s: record
          MSW: cint32;
          d2: cuint32;
          d3: cuint32;
          d4: cuint32;
          d5: cuint32;
          d6: cuint32;
          d7: cuint32;
          d8: cuint32;
          d9: cuint32;
          d10: cuint32;
          d11: cuint32;
          d12: cuint32;
          d13: cuint32;
          d14: cuint32;
          d15: cuint32;
          LSW: cuint32;
        end;
      );
  end;
type
  vS512Ptr = ^vS512;
type
  vU1024 = record
    case longint of
      0: (v:array[0..7] of vUInt32);
      1: (
        vs: record
          v1: vUInt32;
          v2: vUInt32;
          v3: vUInt32;
          v4: vUInt32;
          v5: vUInt32;
          v6: vUInt32;
          v7: vUInt32;
          v8: vUInt32;
        end;
      );
      2: (
        s: record
          MSW: cuint32;
          d2: cuint32;
          d3: cuint32;
          d4: cuint32;
          d5: cuint32;
          d6: cuint32;
          d7: cuint32;
          d8: cuint32;
          d9: cuint32;
          d10: cuint32;
          d11: cuint32;
          d12: cuint32;
          d13: cuint32;
          d14: cuint32;
          d15: cuint32;
          d16: cuint32;
          d17: cuint32;
          d18: cuint32;
          d19: cuint32;
          d20: cuint32;
          d21: cuint32;
          d22: cuint32;
          d23: cuint32;
          d24: cuint32;
          d25: cuint32;
          d26: cuint32;
          d27: cuint32;
          d28: cuint32;
          d29: cuint32;
          d30: cuint32;
          d31: cuint32;
          LSW: cuint32;
        end;
      );
  end;
type
  vU1024Ptr = ^vU1024;
type
  vS1024 = record
    case longint of
      0: (v:array[0..7] of vUInt32);
      1: (
        vs: record
          v1: vUInt32;
          v2: vUInt32;
          v3: vUInt32;
          v4: vUInt32;
          v5: vUInt32;
          v6: vUInt32;
          v7: vUInt32;
          v8: vUInt32;
        end;
      );
      2: (
        s: record
          MSW: cint32;
          d2: cuint32;
          d3: cuint32;
          d4: cuint32;
          d5: cuint32;
          d6: cuint32;
          d7: cuint32;
          d8: cuint32;
          d9: cuint32;
          d10: cuint32;
          d11: cuint32;
          d12: cuint32;
          d13: cuint32;
          d14: cuint32;
          d15: cuint32;
          d16: cuint32;
          d17: cuint32;
          d18: cuint32;
          d19: cuint32;
          d20: cuint32;
          d21: cuint32;
          d22: cuint32;
          d23: cuint32;
          d24: cuint32;
          d25: cuint32;
          d26: cuint32;
          d27: cuint32;
          d28: cuint32;
          d29: cuint32;
          d30: cuint32;
          d31: cuint32;
          LSW: cuint32;
        end;
      );
  end;
type
  vS1024Ptr = ^vS1024;
{$endif}

{$elseif ((defined(__i386__)) or (defined(__x86_64__))) and (defined(__SSE2__))}
{$ifdef TYPES}
type
  vU128 = record
    case longint of
      0: (v: vUInt32);
      1: (
        vs: record
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          LSW: cuint32;
          d3: cuint32;
          d2: cuint32;
          MSW: cuint32;
        end;
      );
  end;
type
  vU128Ptr = ^vU128;
type
  vS128 = record
    case longint of
      0: (v: vUInt32);
      1: (
        vs: record
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          LSW: cint32;
          d3: cuint32;
          d2: cuint32;
          MSW: cuint32;
        end;
      );
  end;
type
  vS128Ptr = ^vS128;
type
  vU256 = record
    case longint of
      0: (v:array[0..1] of vUInt32);
      1: (
        vs: record
          v2: vUInt32;
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          LSW: cuint32;
          d7: cuint32;
          d6: cuint32;
          d5: cuint32;
          d4: cuint32;
          d3: cuint32;
          d2: cuint32;
          MSW: cuint32;
        end;
      );
  end;
type
  vU256Ptr = ^vU256;
type
  vS256 = record
    case longint of
      0: (v:array[0..1] of vUInt32);
      1: (
        vs: record
          v2: vUInt32;
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          LSW: cint32;
          d7: cuint32;
          d6: cuint32;
          d5: cuint32;
          d4: cuint32;
          d3: cuint32;
          d2: cuint32;
          MSW: cuint32;
        end;
      );
  end;
type
  vS256Ptr = ^vS256;
type
  vU512 = record
    case longint of
      0: (v:array[0..3] of vUInt32);
      1: (
        vs: record
          v4: vUInt32;
          v3: vUInt32;
          v2: vUInt32;
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          LSW: cuint32;
          d15: cuint32;
          d14: cuint32;
          d13: cuint32;
          d12: cuint32;
          d11: cuint32;
          d10: cuint32;
          d9: cuint32;
          d8: cuint32;
          d7: cuint32;
          d6: cuint32;
          d5: cuint32;
          d4: cuint32;
          d3: cuint32;
          d2: cuint32;
          MSW: cuint32;
        end;
      );
  end;
type
  vU512Ptr = ^vU512;
type
  vS512 = record
    case longint of
      0: (v:array[0..3] of vUInt32);
      1: (
        vs: record
          v4: vUInt32;
          v3: vUInt32;
          v2: vUInt32;
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          LSW: cint32;
          d15: cuint32;
          d14: cuint32;
          d13: cuint32;
          d12: cuint32;
          d11: cuint32;
          d10: cuint32;
          d9: cuint32;
          d8: cuint32;
          d7: cuint32;
          d6: cuint32;
          d5: cuint32;
          d4: cuint32;
          d3: cuint32;
          d2: cuint32;
          MSW: cuint32;
        end;
      );
  end;
type
  vS512Ptr = ^vS512;
type
  vU1024 = record
    case longint of
      0: (v:array[0..7] of vUInt32);
      1: (
        vs: record
          v8: vUInt32;
          v7: vUInt32;
          v6: vUInt32;
          v5: vUInt32;
          v4: vUInt32;
          v3: vUInt32;
          v2: vUInt32;
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          LSW: cuint32;
          d31: cuint32;
          d30: cuint32;
          d29: cuint32;
          d28: cuint32;
          d27: cuint32;
          d26: cuint32;
          d25: cuint32;
          d24: cuint32;
          d23: cuint32;
          d22: cuint32;
          d21: cuint32;
          d20: cuint32;
          d19: cuint32;
          d18: cuint32;
          d17: cuint32;
          d16: cuint32;
          d15: cuint32;
          d14: cuint32;
          d13: cuint32;
          d12: cuint32;
          d11: cuint32;
          d10: cuint32;
          d9: cuint32;
          d8: cuint32;
          d7: cuint32;
          d6: cuint32;
          d5: cuint32;
          d4: cuint32;
          d3: cuint32;
          d2: cuint32;
          MSW: cuint32;
        end;
      );
  end;
type
  vU1024Ptr = ^vU1024;
type
  vS1024 = record
    case longint of
      0: (v:array[0..7] of vUInt32);
      1: (
        vs: record
          v8: vUInt32;
          v7: vUInt32;
          v6: vUInt32;
          v5: vUInt32;
          v4: vUInt32;
          v3: vUInt32;
          v2: vUInt32;
          v1: vUInt32;
        end;
      );
      2: (
        s: record
          LSW: cint32;
          d31: cuint32;
          d30: cuint32;
          d29: cuint32;
          d28: cuint32;
          d27: cuint32;
          d26: cuint32;
          d25: cuint32;
          d24: cuint32;
          d23: cuint32;
          d22: cuint32;
          d21: cuint32;
          d20: cuint32;
          d19: cuint32;
          d18: cuint32;
          d17: cuint32;
          d16: cuint32;
          d15: cuint32;
          d14: cuint32;
          d13: cuint32;
          d12: cuint32;
          d11: cuint32;
          d10: cuint32;
          d9: cuint32;
          d8: cuint32;
          d7: cuint32;
          d6: cuint32;
          d5: cuint32;
          d4: cuint32;
          d3: cuint32;
          d2: cuint32;
          MSW: cuint32;
        end;
      );
  end;
type
  vS1024Ptr = ^vS1024;
{$endif}

{$endif}

{$if defined(_AltiVecPIMLanguageExtensionsAreEnabled) or defined(__SSE2__)}
{$ifdef FUNCTIONS}
procedure vU256Divide(numerator: vU256Ptr; divisor: vU256Ptr; result_: vU256Ptr; remainder: vU256* __nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS256Divide(numerator: vS256Ptr; divisor: vS256Ptr; result_: vS256Ptr; remainder: vS256* __nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU512Divide(numerator: vU512Ptr; divisor: vU512Ptr; result_: vU512Ptr; remainder: vU512* __nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS512Divide(numerator: vS512Ptr; divisor: vS512Ptr; result_: vS512Ptr; remainder: vS512* __nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU1024Divide(numerator: vU1024Ptr; divisor: vU1024Ptr; result_: vU1024Ptr; remainder: vU1024* __nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS1024Divide(numerator: vS1024Ptr; divisor: vS1024Ptr; result_: vS1024Ptr; remainder: vS1024* __nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU128FullMultiply(a: vU128Ptr; b: vU128Ptr; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS128FullMultiply(a: vS128Ptr; b: vS128Ptr; result_: vS256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU256FullMultiply(a: vU256Ptr; b: vU256Ptr; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS256FullMultiply(a: vS256Ptr; b: vS256Ptr; result_: vS512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU512FullMultiply(a: vU512Ptr; b: vU512Ptr; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS512FullMultiply(a: vS512Ptr; b: vS512Ptr; result_: vS1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU256HalfMultiply(a: vU256Ptr; b: vU256Ptr; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS256HalfMultiply(a: vS256Ptr; b: vS256Ptr; result_: vS256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU512HalfMultiply(a: vU512Ptr; b: vU512Ptr; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS512HalfMultiply(a: vS512Ptr; b: vS512Ptr; result_: vS512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU1024HalfMultiply(a: vU1024Ptr; b: vU1024Ptr; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS1024HalfMultiply(a: vS1024Ptr; b: vS1024Ptr; result_: vS1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU256Sub(a: vU256Ptr; b: vU256Ptr; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS256Sub(a: vS256Ptr; b: vS256Ptr; result_: vS256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU256SubS(a: vU256Ptr; b: vU256Ptr; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS256SubS(a: vS256Ptr; b: vS256Ptr; result_: vS256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU512Sub(a: vU512Ptr; b: vU512Ptr; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS512Sub(a: vS512Ptr; b: vS512Ptr; result_: vS512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU512SubS(a: vU512Ptr; b: vU512Ptr; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS512SubS(a: vS512Ptr; b: vS512Ptr; result_: vS512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU1024Sub(a: vU1024Ptr; b: vU1024Ptr; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS1024Sub(a: vS1024Ptr; b: vS1024Ptr; result_: vS1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU1024SubS(a: vU1024Ptr; b: vU1024Ptr; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS1024SubS(a: vS1024Ptr; b: vS1024Ptr; result_: vS1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU256Neg(a: vU256Ptr; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS256Neg(a: vS256Ptr; result_: vS256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU512Neg(a: vU512Ptr; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS512Neg(a: vS512Ptr; result_: vS512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU1024Neg(a: vU1024Ptr; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS1024Neg(a: vS1024Ptr; result_: vS1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU256Add(a: vU256Ptr; b: vU256Ptr; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS256Add(a: vS256Ptr; b: vS256Ptr; result_: vS256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU256AddS(a: vU256Ptr; b: vU256Ptr; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS256AddS(a: vS256Ptr; b: vS256Ptr; result_: vS256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU512Add(a: vU512Ptr; b: vU512Ptr; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS512Add(a: vS512Ptr; b: vS512Ptr; result_: vS512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU512AddS(a: vU512Ptr; b: vU512Ptr; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS512AddS(a: vS512Ptr; b: vS512Ptr; result_: vS512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU1024Add(a: vU1024Ptr; b: vU1024Ptr; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS1024Add(a: vS1024Ptr; b: vS1024Ptr; result_: vS1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU1024AddS(a: vU1024Ptr; b: vU1024Ptr; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS1024AddS(a: vS1024Ptr; b: vS1024Ptr; result_: vS1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU256Mod(numerator: vU256Ptr; divisor: vU256Ptr; remainder: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS256Mod(numerator: vS256Ptr; divisor: vS256Ptr; remainder: vS256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU512Mod(numerator: vU512Ptr; divisor: vU512Ptr; remainder: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS512Mod(numerator: vS512Ptr; divisor: vS512Ptr; remainder: vS512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vU1024Mod(numerator: vU1024Ptr; divisor: vU1024Ptr; remainder: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vS1024Mod(numerator: vS1024Ptr; divisor: vS1024Ptr; remainder: vS1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vLL256Shift(a: vU256Ptr; shiftAmount: cuint32; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vLL512Shift(a: vU512Ptr; shiftAmount: cuint32; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vLL1024Shift(a: vU1024Ptr; shiftAmount: cuint32; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vLR256Shift(a: vU256Ptr; shiftAmount: cuint32; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vLR512Shift(a: vU512Ptr; shiftAmount: cuint32; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vLR1024Shift(a: vU1024Ptr; shiftAmount: cuint32; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vA256Shift(a: vS256Ptr; shiftAmount: cuint32; result_: vS256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vA512Shift(a: vS512Ptr; shiftAmount: cuint32; result_: vS512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vA1024Shift(a: vS1024Ptr; shiftAmount: cuint32; result_: vS1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vL256Rotate(a: vU256Ptr; rotateAmount: cuint32; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vL512Rotate(a: vU512Ptr; rotateAmount: cuint32; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vL1024Rotate(a: vU1024Ptr; rotateAmount: cuint32; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vR256Rotate(a: vU256Ptr; rotateAmount: cuint32; result_: vU256Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vR512Rotate(a: vU512Ptr; rotateAmount: cuint32; result_: vU512Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
procedure vR1024Rotate(a: vU1024Ptr; rotateAmount: cuint32; result_: vU1024Ptr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
{$endif}

{$endif}
{$endif}

{$endif}
