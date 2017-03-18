{ Parsed from CoreText.framework CTRubyAnnotation.h }

{$ifndef __CTRUBYANNOTATION__}
{$ifdef TYPES}
type
  CTRubyAnnotationRef = OpaqueType;
  CTRubyAlignment = cuint8;
  CTRubyAlignmentPtr = ^CTRubyAlignment;

const
  kCTRubyAlignmentInvalid = -1;
  kCTRubyAlignmentAuto = 0;
  kCTRubyAlignmentStart = 1;
  kCTRubyAlignmentCenter = 2;
  kCTRubyAlignmentEnd = 3;
  kCTRubyAlignmentDistributeLetter = 4;
  kCTRubyAlignmentDistributeSpace = 5;
  kCTRubyAlignmentLineEdge = 6;

type
  CTRubyOverhang = cuint8;
  CTRubyOverhangPtr = ^CTRubyOverhang;

const
  kCTRubyOverhangInvalid = -1;
  kCTRubyOverhangAuto = 0;
  kCTRubyOverhangStart = 1;
  kCTRubyOverhangEnd = 2;
  kCTRubyOverhangNone = 3;

type
  CTRubyPosition = cuint8;
  CTRubyPositionPtr = ^CTRubyPosition;

const
  kCTRubyPositionBefore = 0;
  kCTRubyPositionAfter = 1;
  kCTRubyPositionInterCharacter = 2;
  kCTRubyPositionInline = 3;
  kCTRubyPositionCount = 4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTRubyAnnotationSizeFactorAttributeName: CFStringRef { available in 10_12, 10_0 }; cvar; external;
  kCTRubyAnnotationScaleToFitAttributeName: CFStringRef { available in 10_12, 10_0 }; cvar; external;
{$endif}

{$endif}
