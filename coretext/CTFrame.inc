{ Parsed from CoreText.framework CTFrame.h }

{$ifndef __CTFRAME__}
{$ifdef TYPES}
type
  CTFrameRef = OpaqueType;
  CTFrameProgression = cuint32;
  CTFrameProgressionPtr = ^CTFrameProgression;

const
  kCTFrameProgressionTopToBottom = 0;
  kCTFrameProgressionRightToLeft = 1;
  kCTFrameProgressionLeftToRight = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFrameProgressionAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFramePathFillRule = cuint32;
  CTFramePathFillRulePtr = ^CTFramePathFillRule;

const
  kCTFramePathFillEvenOdd = 0;
  kCTFramePathFillWindingNumber = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFramePathFillRuleAttributeName: CFStringRef { available in 10_7, 4_2 }; cvar; external;
  kCTFramePathWidthAttributeName: CFStringRef { available in 10_7, 4_2 }; cvar; external;
  kCTFrameClippingPathsAttributeName: CFStringRef { available in 10_7, 4_3 }; cvar; external;
  kCTFramePathClippingPathAttributeName: CFStringRef { available in 10_7, 4_3 }; cvar; external;
{$endif}

{$endif}
