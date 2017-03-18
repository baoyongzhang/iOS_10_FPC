{ Parsed from CoreGraphics.framework CGPDFDictionary.h }

{$ifndef CGPDFDICTIONARY_H_}
{$ifdef TYPES}
type
  CGPDFDictionaryRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFDictionaryGetCount(dict: CGPDFDictionaryRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetObject(dict: CGPDFDictionaryRef cg_nullable; key: PChar; var value: CGPDFObjectRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetBoolean(dict: CGPDFDictionaryRef cg_nullable; key: PChar; var value: CGPDFBoolean* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetInteger(dict: CGPDFDictionaryRef cg_nullable; key: PChar; var value: CGPDFInteger* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetNumber(dict: CGPDFDictionaryRef cg_nullable; key: PChar; var value: CGPDFReal* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetName(dict: CGPDFDictionaryRef cg_nullable; key: PChar; var value: char* __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetString(dict: CGPDFDictionaryRef cg_nullable; key: PChar; var value: CGPDFStringRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetArray(dict: CGPDFDictionaryRef cg_nullable; key: PChar; var value: CGPDFArrayRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetDictionary(dict: CGPDFDictionaryRef cg_nullable; key: PChar; var value: CGPDFDictionaryRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetStream(dict: CGPDFDictionaryRef cg_nullable; key: PChar; var value: CGPDFStreamRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  CGPDFDictionaryApplierFunction = procedure (key: PChar; value: CGPDFObjectRef; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
procedure CGPDFDictionaryApplyFunction(dict: CGPDFDictionaryRef; function_: CGPDFDictionaryApplierFunction; info: pointer); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
