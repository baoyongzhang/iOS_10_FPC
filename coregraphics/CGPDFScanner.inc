{ Parsed from CoreGraphics.framework CGPDFScanner.h }

{$ifndef CGPDFSCANNER_H_}
{$ifdef TYPES}
type
  CGPDFScannerRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFScannerCreate(cs: CGPDFContentStreamRef; table: CGPDFOperatorTableRef __nullable; info: void* __nullable): CGPDFScannerRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerRetain(scanner: CGPDFScannerRef cg_nullable): CGPDFScannerRef cg_nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFScannerRelease(scanner: CGPDFScannerRef cg_nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerScan(scanner: CGPDFScannerRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerGetContentStream(scanner: CGPDFScannerRef): CGPDFContentStreamRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopObject(scanner: CGPDFScannerRef; var value: CGPDFObjectRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopBoolean(scanner: CGPDFScannerRef; var value: CGPDFBoolean* __nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopInteger(scanner: CGPDFScannerRef; var value: CGPDFInteger* __nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopNumber(scanner: CGPDFScannerRef; var value: CGPDFReal* __nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopName(scanner: CGPDFScannerRef; var value: char* __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopString(scanner: CGPDFScannerRef; var value: CGPDFStringRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopArray(scanner: CGPDFScannerRef; var value: CGPDFArrayRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopDictionary(scanner: CGPDFScannerRef; var value: CGPDFDictionaryRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopStream(scanner: CGPDFScannerRef; var value: CGPDFStreamRef __nullable* __nullable): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
