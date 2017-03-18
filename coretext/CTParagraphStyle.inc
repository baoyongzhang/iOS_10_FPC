{ Parsed from CoreText.framework CTParagraphStyle.h }

{$ifndef __CTPARAGRAPHSTYLE__}
{$ifdef TYPES}
type
  CTParagraphStyleRef = OpaqueType;
  CTTextAlignment = cuint8;
  CTTextAlignmentPtr = ^CTTextAlignment;

const
  kCTTextAlignmentLeft = 0 { available in 10_8, 6_0 };
  kCTTextAlignmentRight = 1 { available in 10_8, 6_0 };
  kCTTextAlignmentCenter = 2 { available in 10_8, 6_0 };
  kCTTextAlignmentJustified = 3 { available in 10_8, 6_0 };
  kCTTextAlignmentNatural = 4 { available in 10_8, 6_0 };
  kCTLeftTextAlignment = kCTTextAlignmentLeft deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTRightTextAlignment = kCTTextAlignmentRight deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTCenterTextAlignment = kCTTextAlignmentCenter deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTJustifiedTextAlignment = kCTTextAlignmentJustified deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTNaturalTextAlignment = kCTTextAlignmentNatural deprecated 'in 10_5, 10_11, 3_2, 9_0';

type
  CTLineBreakMode = cuint8;
  CTLineBreakModePtr = ^CTLineBreakMode;

const
  kCTLineBreakByWordWrapping = 0;
  kCTLineBreakByCharWrapping = 1;
  kCTLineBreakByClipping = 2;
  kCTLineBreakByTruncatingHead = 3;
  kCTLineBreakByTruncatingTail = 4;
  kCTLineBreakByTruncatingMiddle = 5;

type
  CTWritingDirection = cint8;
  CTWritingDirectionPtr = ^CTWritingDirection;

const
  kCTWritingDirectionNatural = -1;
  kCTWritingDirectionLeftToRight = 0;
  kCTWritingDirectionRightToLeft = 1;

type
  CTParagraphStyleSpecifier = cuint32;
  CTParagraphStyleSpecifierPtr = ^CTParagraphStyleSpecifier;

const
  kCTParagraphStyleSpecifierAlignment = 0;
  kCTParagraphStyleSpecifierFirstLineHeadIndent = 1;
  kCTParagraphStyleSpecifierHeadIndent = 2;
  kCTParagraphStyleSpecifierTailIndent = 3;
  kCTParagraphStyleSpecifierTabStops = 4;
  kCTParagraphStyleSpecifierDefaultTabInterval = 5;
  kCTParagraphStyleSpecifierLineBreakMode = 6;
  kCTParagraphStyleSpecifierLineHeightMultiple = 7;
  kCTParagraphStyleSpecifierMaximumLineHeight = 8;
  kCTParagraphStyleSpecifierMinimumLineHeight = 9;
  kCTParagraphStyleSpecifierLineSpacing = 10 deprecated 'in 10_5, 10_8, 3_2, 6_0';
  kCTParagraphStyleSpecifierParagraphSpacing = 11;
  kCTParagraphStyleSpecifierParagraphSpacingBefore = 12;
  kCTParagraphStyleSpecifierBaseWritingDirection = 13;
  kCTParagraphStyleSpecifierMaximumLineSpacing = 14;
  kCTParagraphStyleSpecifierMinimumLineSpacing = 15;
  kCTParagraphStyleSpecifierLineSpacingAdjustment = 16;
  kCTParagraphStyleSpecifierLineBoundsOptions = 17;
  kCTParagraphStyleSpecifierCount = 18;

type
  CTParagraphStyleSetting = record
    spec: CTParagraphStyleSpecifier;
    valueSize: size_t;
    value: pointer;
  end;
type
  CTParagraphStyleSettingPtr = ^CTParagraphStyleSetting;
{$endif}

{$endif}
