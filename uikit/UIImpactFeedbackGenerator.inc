{ Parsed from UIKit.framework UIImpactFeedbackGenerator.h }

{$ifdef TYPES}
type
  UIImpactFeedbackGeneratorPtr = ^UIImpactFeedbackGenerator;
{$endif}

{$ifdef TYPES}
type
  UIImpactFeedbackStyle = NSInteger;
  UIImpactFeedbackStylePtr = ^UIImpactFeedbackStyle;

const
  UIImpactFeedbackStyleLight = 0;
  UIImpactFeedbackStyleMedium = 1;
  UIImpactFeedbackStyleHeavy = 2;
{$endif}

{$ifdef CLASSES}

type
  UIImpactFeedbackGenerator = objcclass external (UIFeedbackGenerator)
  public
    function initWithStyle (style: UIImpactFeedbackStyle): instancetype; message 'initWithStyle:';
    procedure impactOccurred; message 'impactOccurred';
  end;
{$endif}

