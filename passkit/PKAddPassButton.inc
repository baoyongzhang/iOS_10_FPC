{ Parsed from PassKit.framework PKAddPassButton.h }

{$ifdef TYPES}
type
  PKAddPassButtonPtr = ^PKAddPassButton;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  PKAddPassButtonStyle = NSInteger;
  PKAddPassButtonStylePtr = ^PKAddPassButtonStyle;

const
  PKAddPassButtonStyleBlack = 0;
  PKAddPassButtonStyleBlackOutline = 1;
{$endif}

{$ifdef CLASSES}

type
  PKAddPassButton = objcclass external (UIButton)
  public
    class function addPassButtonWithStyle (addPassButtonStyle: PKAddPassButtonStyle): instancetype; message 'addPassButtonWithStyle:';
    function initWithAddPassButtonStyle (style: PKAddPassButtonStyle): instancetype; message 'initWithAddPassButtonStyle:'; { NS_DESIGNATED_INITIALIZER }
    procedure setUI_APPEARANCE_SELECTOR(newValue: PKAddPassButtonStyle addPassButtonStyle); message 'setUI_APPEARANCE_SELECTOR:';
    function UI_APPEARANCE_SELECTOR: PKAddPassButtonStyle addPassButtonStyle; message 'UI_APPEARANCE_SELECTOR';
  end;
{$endif}

{$endif}
