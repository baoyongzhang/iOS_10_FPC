{ Parsed from UIKit.framework UIFocusGuide.h }

{$ifdef TYPES}
type
  UIFocusGuidePtr = ^UIFocusGuide;
{$endif}

{$ifdef CLASSES}

type
  UIFocusGuide = objcclass external (UILayoutGuide)
  public
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setPreferredFocusEnvironments(newValue: UIFocusEnvironmentProtocolProtocolPtr); message 'setPreferredFocusEnvironments:';
    function preferredFocusEnvironments: UIFocusEnvironmentProtocolProtocolPtr; message 'preferredFocusEnvironments';
    procedure setPreferredFocusedView(newValue: UIView); message 'setPreferredFocusedView:';
    function preferredFocusedView: UIView; message 'preferredFocusedView';
  end;
{$endif}

