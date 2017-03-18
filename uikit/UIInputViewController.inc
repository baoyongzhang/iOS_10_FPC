{ Parsed from UIKit.framework UIInputViewController.h }

{$ifdef TYPES}
type
  UIInputViewControllerPtr = ^UIInputViewController;
  UITextDocumentProxyProtocolPtr = ^UITextDocumentProxyProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UITextDocumentProxyProtocol = objcprotocol external name 'UITextDocumentProxy' (UIKeyInputProtocol)
    function documentContextBeforeInput: NSString; message 'documentContextBeforeInput';
    function documentContextAfterInput: NSString; message 'documentContextAfterInput';
    function documentInputMode: UITextInputMode; message 'documentInputMode';
    procedure adjustTextPositionByCharacterOffset (offset: NSInteger); message 'adjustTextPositionByCharacterOffset:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIInputViewController = objcclass external (UIViewController, UITextInputDelegateProtocol)
  public
    procedure setInputView(newValue: UIInputView); message 'setInputView:';
    function inputView: UIInputView; message 'inputView';
    function textDocumentProxy: UITextDocumentProxyProtocol; message 'textDocumentProxy';
    procedure setPrimaryLanguage(newValue: NSString); message 'setPrimaryLanguage:';
    function primaryLanguage: NSString; message 'primaryLanguage';
    procedure dismissKeyboard; message 'dismissKeyboard';
    procedure advanceToNextInputMode; message 'advanceToNextInputMode';
    procedure handleInputModeListFromView_withEvent (view_: nonnull UIViewPtr; event: nonnull UIEventPtr); message 'handleInputModeListFromView:withEvent:'; { available in 10_0 }
    procedure requestSupplementaryLexiconWithCompletion (completionHandler: OpaqueCBlock); message 'requestSupplementaryLexiconWithCompletion:';

    { Adopted protocols }
    procedure selectionDidChange (textInput: nullable UITextInputProtocol); message 'selectionDidChange:';
    procedure selectionWillChange (textInput: nullable UITextInputProtocol); message 'selectionWillChange:';
    procedure textDidChange (textInput: nullable UITextInputProtocol); message 'textDidChange:';
    procedure textWillChange (textInput: nullable UITextInputProtocol); message 'textWillChange:';
  end;
{$endif}

