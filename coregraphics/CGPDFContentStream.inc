{ Parsed from CoreGraphics.framework CGPDFContentStream.h }

{$ifndef CGPDFCONTENTSTREAM_H_}
{$ifdef TYPES}
type
  CGPDFContentStreamRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFContentStreamCreateWithPage(page: CGPDFPageRef): CGPDFContentStreamRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFContentStreamCreateWithStream(stream: CGPDFStreamRef; streamResources: CGPDFDictionaryRef; parent: CGPDFContentStreamRef cg_nullable): CGPDFContentStreamRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFContentStreamRetain(cs: CGPDFContentStreamRef): CGPDFContentStreamRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFContentStreamRelease(cs: CGPDFContentStreamRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFContentStreamGetStreams(cs: CGPDFContentStreamRef): CFArrayRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFContentStreamGetResource(cs: CGPDFContentStreamRef; category: PChar; name: PChar): CGPDFObjectRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
