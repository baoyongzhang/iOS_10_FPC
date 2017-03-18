{ Parsed from UIKit.framework NSText.h }

{$ifdef TYPES}
type
  NSTextAlignment = NSInteger;
  NSTextAlignmentPtr = ^NSTextAlignment;

const
  NSTextAlignmentLeft = 0;
  {$if defined(TARGET_OS_IPHONE)}
  NSTextAlignmentCenter = 1;
  NSTextAlignmentRight = 2;
  {$else}
  NSTextAlignmentRight = 1;
  NSTextAlignmentCenter = 2;
  {$endif}
  NSTextAlignmentJustified = 3;
  NSTextAlignmentNatural = 4;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef FUNCTIONS}
function NSTextAlignmentToCTTextAlignment(nsTextAlignment: NSTextAlignment): CTTextAlignment; cdecl; external; { available in 6_0 }
function NSTextAlignmentFromCTTextAlignment(ctTextAlignment: CTTextAlignment): NSTextAlignment; cdecl; external; { available in 6_0 }
{$endif}

{$endif}
{$ifdef TYPES}
type
  NSWritingDirection = NSInteger;
  NSWritingDirectionPtr = ^NSWritingDirection;

const
  NSWritingDirectionNatural = -1;
  NSWritingDirectionLeftToRight = 0;
  NSWritingDirectionRightToLeft = 1;
{$endif}

