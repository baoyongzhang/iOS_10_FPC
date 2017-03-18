{ Parsed from UIKit.framework UIFeedbackGenerator.h }

{$ifdef TYPES}
type
  UIFeedbackGeneratorPtr = ^UIFeedbackGenerator;
{$endif}

{$ifdef CLASSES}

type
  UIFeedbackGenerator = objcclass external (NSObject)
  public
    procedure prepare; message 'prepare';
  end;
{$endif}

