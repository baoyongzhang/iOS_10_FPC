{ Parsed from UIKit.framework UISelectionFeedbackGenerator.h }

{$ifdef TYPES}
type
  UISelectionFeedbackGeneratorPtr = ^UISelectionFeedbackGenerator;
{$endif}

{$ifdef CLASSES}

type
  UISelectionFeedbackGenerator = objcclass external (UIFeedbackGenerator)
  public
    procedure selectionChanged; message 'selectionChanged';
  end;
{$endif}

