{ Parsed from CoreGraphics.framework CGPDFPage.h }

{$ifndef CGPDFPAGE_H_}
{$ifdef TYPES}
type
  CGPDFPageRef = OpaqueType;
  CGPDFBox = cint32;
  CGPDFBoxPtr = ^CGPDFBox;

const
  kCGPDFMediaBox = 0;
  kCGPDFCropBox = 1;
  kCGPDFBleedBox = 2;
  kCGPDFTrimBox = 3;
  kCGPDFArtBox = 4;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFPageRetain(page: CGPDFPageRef cg_nullable): CGPDFPageRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGPDFPageRelease(page: CGPDFPageRef cg_nullable); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetDocument(page: CGPDFPageRef cg_nullable): CGPDFDocumentRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetPageNumber(page: CGPDFPageRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetBoxRect(page: CGPDFPageRef cg_nullable; box: CGPDFBox): CGRect; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetRotationAngle(page: CGPDFPageRef cg_nullable): cint; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetDrawingTransform(page: CGPDFPageRef cg_nullable; box: CGPDFBox; rect: CGRect; rotate: cint; preserveAspectRatio: cbool): CGAffineTransform; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetDictionary(page: CGPDFPageRef cg_nullable): CGPDFDictionaryRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
