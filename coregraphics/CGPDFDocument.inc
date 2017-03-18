{ Parsed from CoreGraphics.framework CGPDFDocument.h }

{$ifndef CGPDFDOCUMENT_H_}
{$ifdef TYPES}
type
  CGPDFDocumentRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFDocumentCreateWithProvider(provider: CGDataProviderRef cg_nullable): CGPDFDocumentRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPDFDocumentCreateWithURL(url: CFURLRef cg_nullable): CGPDFDocumentRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPDFDocumentRetain(document: CGPDFDocumentRef cg_nullable): CGPDFDocumentRef cg_nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGPDFDocumentRelease(document: CGPDFDocumentRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGPDFDocumentGetVersion(document: CGPDFDocumentRef cg_nullable; var majorVersion: pcint; var minorVersion: pcint); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDocumentIsEncrypted(document: CGPDFDocumentRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentUnlockWithPassword(document: CGPDFDocumentRef cg_nullable; password: PChar): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentIsUnlocked(document: CGPDFDocumentRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentAllowsPrinting(document: CGPDFDocumentRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentAllowsCopying(document: CGPDFDocumentRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentGetNumberOfPages(document: CGPDFDocumentRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPDFDocumentGetPage(document: CGPDFDocumentRef cg_nullable; pageNumber: size_t): CGPDFPageRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDocumentGetCatalog(document: CGPDFDocumentRef cg_nullable): CGPDFDictionaryRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDocumentGetInfo(document: CGPDFDocumentRef cg_nullable): CGPDFDictionaryRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFDocumentGetID(document: CGPDFDocumentRef cg_nullable): CGPDFArrayRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFDocumentGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentGetMediaBox(document: CGPDFDocumentRef cg_nullable; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,                                __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetCropBox(document: CGPDFDocumentRef cg_nullable; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,                                __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetBleedBox(document: CGPDFDocumentRef cg_nullable; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,                                __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetTrimBox(document: CGPDFDocumentRef cg_nullable; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,                                __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetArtBox(document: CGPDFDocumentRef cg_nullable; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,                                __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetRotationAngle(document: CGPDFDocumentRef cg_nullable; page: cint): cint; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,                                __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}
