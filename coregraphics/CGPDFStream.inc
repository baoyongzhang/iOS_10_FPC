{ Parsed from CoreGraphics.framework CGPDFStream.h }

{$ifndef CGPDFSTREAM_H_}
{$ifdef TYPES}
type
  CGPDFStreamRef = OpaqueType;
  CGPDFDataFormat = cint32;
  CGPDFDataFormatPtr = ^CGPDFDataFormat;

const
  CGPDFDataFormatRaw = 0;
  CGPDFDataFormatJPEGEncoded = 1;
  CGPDFDataFormatJPEG2000 = 2;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFStreamGetDictionary(stream: CGPDFStreamRef cg_nullable): CGPDFDictionaryRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFStreamCopyData(stream: CGPDFStreamRef cg_nullable; var format: CGPDFDataFormat* cg_nullable): CFDataRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
