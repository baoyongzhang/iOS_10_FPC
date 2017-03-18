{ Parsed from CoreGraphics.framework CGPDFOperatorTable.h }

{$ifndef CGPDFOPERATORTABLE_H_}
{$ifdef TYPES}
type
  CGPDFOperatorTableRef = OpaqueType;
  CGPDFOperatorCallback = procedure (scanner: CGPDFScannerRef; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFOperatorTableCreate: CGPDFOperatorTableRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFOperatorTableRetain(table: CGPDFOperatorTableRef cg_nullable): CGPDFOperatorTableRef cg_nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFOperatorTableRelease(table: CGPDFOperatorTableRef cg_nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFOperatorTableSetCallback(table: CGPDFOperatorTableRef cg_nullable; name: char* cg_nullable; callback: CGPDFOperatorCallback cg_nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
