{ Parsed from CoreText.framework CTLine.h }

{$ifndef __CTLINE__}
{$ifdef TYPES}
type
  CTLineRef = OpaqueType;
  CTLineBoundsOptions = CFOptionFlags;
  CTLineBoundsOptionsPtr = ^CTLineBoundsOptions;

const
  kCTLineBoundsExcludeTypographicLeading = 1 shl 0;
  kCTLineBoundsExcludeTypographicShifts = 1 shl 1;
  kCTLineBoundsUseHangingPunctuation = 1 shl 2;
  kCTLineBoundsUseGlyphPathBounds = 1 shl 3;
  kCTLineBoundsUseOpticalBounds = 1 shl 4;
  kCTLineBoundsIncludeLanguageExtents = 1 shl 5 { available in 10_11, 8_0 };

type
  CTLineTruncationType = cuint32;
  CTLineTruncationTypePtr = ^CTLineTruncationType;

const
  kCTLineTruncationStart = 0;
  kCTLineTruncationEnd = 1;
  kCTLineTruncationMiddle = 2;
{$endif}

{$endif}
