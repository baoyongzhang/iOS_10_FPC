{ Parsed from UIKit.framework UIContentSizeCategoryAdjusting.h }

{$ifdef TYPES}
type
  UIContentSizeCategoryAdjustingProtocolPtr = ^UIContentSizeCategoryAdjustingProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIContentSizeCategoryAdjustingProtocol = objcprotocol external name 'UIContentSizeCategoryAdjusting' (NSObjectProtocol)
    procedure setAdjustsFontForContentSizeCategory(newValue: boolean); message 'setAdjustsFontForContentSizeCategory:';
    function adjustsFontForContentSizeCategory: boolean; message 'adjustsFontForContentSizeCategory';
  end;
{$endif}

