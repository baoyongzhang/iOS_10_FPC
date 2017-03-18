{ Parsed from CoreGraphics.framework CGPDFArray.h }

{$ifndef CGPDFARRAY_H_}
{$ifdef TYPES}
type
  CGPDFArrayRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFArrayGetCount(array_: CGPDFArrayRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetObject(array_: CGPDFArrayRef cg_nullable; index: size_t; var value: CGPDFObjectRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetNull(array_: CGPDFArrayRef cg_nullable; index: size_t): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetBoolean(array_: CGPDFArrayRef cg_nullable; index: size_t; var value: CGPDFBoolean* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetInteger(array_: CGPDFArrayRef cg_nullable; index: size_t; var value: CGPDFInteger* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetNumber(array_: CGPDFArrayRef cg_nullable; index: size_t; var value: CGPDFReal* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetName(array_: CGPDFArrayRef cg_nullable; index: size_t; var value: char* __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetString(array_: CGPDFArrayRef cg_nullable; index: size_t; var value: CGPDFStringRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetArray(array_: CGPDFArrayRef cg_nullable; index: size_t; var value: CGPDFArrayRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetDictionary(array_: CGPDFArrayRef cg_nullable; index: size_t; var value: CGPDFDictionaryRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetStream(array_: CGPDFArrayRef cg_nullable; index: size_t; var value: CGPDFStreamRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
