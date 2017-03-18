{ Parsed from CoreGraphics.framework CGPDFString.h }

{$ifndef CGPDFSTRING_H_}
{$ifdef TYPES}
type
  CGPDFStringRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFStringGetLength(string_: CGPDFStringRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFStringGetBytePtr(string_: CGPDFStringRef cg_nullable): char * __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFStringCopyTextString(string_: CGPDFStringRef cg_nullable): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFStringCopyDate(string_: CGPDFStringRef cg_nullable): CFDateRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
