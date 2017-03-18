{ Parsed from UIKit.framework UITextField.h }

{$ifdef TYPES}
type
  UITextFieldPtr = ^UITextField;
  UITextFieldDelegateProtocolPtr = ^UITextFieldDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UITextBorderStyle = NSInteger;
  UITextBorderStylePtr = ^UITextBorderStyle;

const
  UITextBorderStyleNone = 0;
  UITextBorderStyleLine = 1;
  UITextBorderStyleBezel = 2;
  UITextBorderStyleRoundedRect = 3;

type
  UITextFieldViewMode = NSInteger;
  UITextFieldViewModePtr = ^UITextFieldViewMode;

const
  UITextFieldViewModeNever = 0;
  UITextFieldViewModeWhileEditing = 1;
  UITextFieldViewModeUnlessEditing = 2;
  UITextFieldViewModeAlways = 3;

type
  UITextFieldDidEndEditingReason = NSInteger;
  UITextFieldDidEndEditingReasonPtr = ^UITextFieldDidEndEditingReason;

const
  UITextFieldDidEndEditingReasonCommitted = 0;
  UITextFieldDidEndEditingReasonCancelled = 1 { available in 10_0 };
{$endif}

{$ifdef CLASSES}

type
  UITextField = objcclass external (UIControl, UITextInputProtocol, NSCodingProtocol, UIContentSizeCategoryAdjustingProtocol)
  public
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setAttributedText(newValue: NSAttributedString); message 'setAttributedText:';
    function attributedText: NSAttributedString; message 'attributedText';
    procedure setTextColor(newValue: UIColor); message 'setTextColor:';
    function textColor: UIColor; message 'textColor';
    procedure setFont(newValue: UIFont); message 'setFont:';
    function font: UIFont; message 'font';
    procedure setTextAlignment(newValue: NSTextAlignment); message 'setTextAlignment:';
    function textAlignment: NSTextAlignment; message 'textAlignment';
    procedure setBorderStyle(newValue: UITextBorderStyle); message 'setBorderStyle:';
    function borderStyle: UITextBorderStyle; message 'borderStyle';
    procedure setDefaultTextAttributes(newValue: NSDictionary); message 'setDefaultTextAttributes:';
    function defaultTextAttributes: NSDictionary; message 'defaultTextAttributes';
    procedure setPlaceholder(newValue: NSString); message 'setPlaceholder:';
    function placeholder: NSString; message 'placeholder';
    procedure setAttributedPlaceholder(newValue: NSAttributedString); message 'setAttributedPlaceholder:';
    function attributedPlaceholder: NSAttributedString; message 'attributedPlaceholder';
    procedure setClearsOnBeginEditing(newValue: boolean); message 'setClearsOnBeginEditing:';
    function clearsOnBeginEditing: boolean; message 'clearsOnBeginEditing';
    procedure setAdjustsFontSizeToFitWidth(newValue: boolean); message 'setAdjustsFontSizeToFitWidth:';
    function adjustsFontSizeToFitWidth: boolean; message 'adjustsFontSizeToFitWidth';
    procedure setMinimumFontSize(newValue: CGFloat); message 'setMinimumFontSize:';
    function minimumFontSize: CGFloat; message 'minimumFontSize';
    procedure setDelegate(newValue: UITextFieldDelegateProtocol); message 'setDelegate:';
    function delegate: UITextFieldDelegateProtocol; message 'delegate';
    procedure setBackground(newValue: UIImage); message 'setBackground:';
    function background: UIImage; message 'background';
    procedure setDisabledBackground(newValue: UIImage); message 'setDisabledBackground:';
    function disabledBackground: UIImage; message 'disabledBackground';
    function isEditing: boolean; message 'isEditing';
    procedure setAllowsEditingTextAttributes(newValue: boolean); message 'setAllowsEditingTextAttributes:';
    function allowsEditingTextAttributes: boolean; message 'allowsEditingTextAttributes';
    procedure setTypingAttributes(newValue: NSDictionary); message 'setTypingAttributes:';
    function typingAttributes: NSDictionary; message 'typingAttributes';
    procedure setClearButtonMode(newValue: UITextFieldViewMode); message 'setClearButtonMode:';
    function clearButtonMode: UITextFieldViewMode; message 'clearButtonMode';
    procedure setLeftView(newValue: UIView); message 'setLeftView:';
    function leftView: UIView; message 'leftView';
    procedure setLeftViewMode(newValue: UITextFieldViewMode); message 'setLeftViewMode:';
    function leftViewMode: UITextFieldViewMode; message 'leftViewMode';
    procedure setRightView(newValue: UIView); message 'setRightView:';
    function rightView: UIView; message 'rightView';
    procedure setRightViewMode(newValue: UITextFieldViewMode); message 'setRightViewMode:';
    function rightViewMode: UITextFieldViewMode; message 'rightViewMode';
    function borderRectForBounds (bounds: CGRect): CGRect; message 'borderRectForBounds:';
    function textRectForBounds (bounds: CGRect): CGRect; message 'textRectForBounds:';
    function placeholderRectForBounds (bounds: CGRect): CGRect; message 'placeholderRectForBounds:';
    function editingRectForBounds (bounds: CGRect): CGRect; message 'editingRectForBounds:';
    function clearButtonRectForBounds (bounds: CGRect): CGRect; message 'clearButtonRectForBounds:';
    function leftViewRectForBounds (bounds: CGRect): CGRect; message 'leftViewRectForBounds:';
    function rightViewRectForBounds (bounds: CGRect): CGRect; message 'rightViewRectForBounds:';
    procedure drawTextInRect (rect: CGRect); message 'drawTextInRect:';
    procedure drawPlaceholderInRect (rect: CGRect); message 'drawPlaceholderInRect:';
    procedure setInputView(newValue: UIView); message 'setInputView:';
    function inputView: UIView; message 'inputView';
    procedure setInputAccessoryView(newValue: UIView); message 'setInputAccessoryView:';
    function inputAccessoryView: UIView; message 'inputAccessoryView';
    procedure setClearsOnInsertion(newValue: boolean); message 'setClearsOnInsertion:';
    function clearsOnInsertion: boolean; message 'clearsOnInsertion';

    { Adopted protocols }
    procedure setAdjustsFontForContentSizeCategory(newValue: boolean); message 'setAdjustsFontForContentSizeCategory:';
    function adjustsFontForContentSizeCategory: boolean; message 'adjustsFontForContentSizeCategory';
    procedure setAutocapitalizationType(newValue: UITextAutocapitalizationType); message 'setAutocapitalizationType:';
    function autocapitalizationType: UITextAutocapitalizationType; message 'autocapitalizationType';
    procedure setAutocorrectionType(newValue: UITextAutocorrectionType); message 'setAutocorrectionType:';
    function autocorrectionType: UITextAutocorrectionType; message 'autocorrectionType';
    function baseWritingDirectionForPosition_inDirection (position: UITextPosition; direction: UITextStorageDirection): UITextWritingDirection; message 'baseWritingDirectionForPosition:inDirection:';
    procedure beginFloatingCursorAtPoint (point: CGPoint); message 'beginFloatingCursorAtPoint:'; { available in 9_0 }
    function beginningOfDocument: UITextPosition; message 'beginningOfDocument';
    function caretRectForPosition (position: UITextPosition): CGRect; message 'caretRectForPosition:';
    function characterOffsetOfPosition_withinRange (position: UITextPosition; range: UITextRange): NSInteger; message 'characterOffsetOfPosition:withinRange:';
    function characterRangeAtPoint (point: CGPoint): nullable UITextRangePtr; message 'characterRangeAtPoint:';
    function characterRangeByExtendingPosition_inDirection (position: UITextPosition; direction: UITextLayoutDirection): nullable UITextRangePtr; message 'characterRangeByExtendingPosition:inDirection:';
    function closestPositionToPoint (point: CGPoint): nullable UITextPositionPtr; message 'closestPositionToPoint:';
    function closestPositionToPoint_withinRange (point: CGPoint; range: UITextRange): nullable UITextPositionPtr; message 'closestPositionToPoint:withinRange:';
    function comparePosition_toPosition (position: UITextPosition; other: UITextPosition): NSComparisonResult; message 'comparePosition:toPosition:';
    procedure deleteBackward; message 'deleteBackward';
    procedure dictationRecognitionFailed; message 'dictationRecognitionFailed';
    procedure dictationRecordingDidEnd; message 'dictationRecordingDidEnd';
    procedure setEnablesReturnKeyAutomatically(newValue: boolean); message 'setEnablesReturnKeyAutomatically:';
    function enablesReturnKeyAutomatically: boolean; message 'enablesReturnKeyAutomatically';
    procedure endFloatingCursor; message 'endFloatingCursor'; { available in 9_0 }
    function endOfDocument: UITextPosition; message 'endOfDocument';
    function firstRectForRange (range: UITextRange): CGRect; message 'firstRectForRange:';
    function frameForDictationResultPlaceholder (placeholder: id): CGRect; message 'frameForDictationResultPlaceholder:';
    function hasText: boolean; message 'hasText';
    procedure setInputDelegate(newValue: UITextInputDelegateProtocol); message 'setInputDelegate:';
    function inputDelegate: UITextInputDelegateProtocol; message 'inputDelegate';
    procedure insertDictationResult (dictationResult: UIDictationPhrase *ProtocolPtr); message 'insertDictationResult:';
    function insertDictationResultPlaceholder: id; message 'insertDictationResultPlaceholder';
    procedure insertText (text: NSString); message 'insertText:';
    procedure setKeyboardAppearance(newValue: UIKeyboardAppearance); message 'setKeyboardAppearance:';
    function keyboardAppearance: UIKeyboardAppearance; message 'keyboardAppearance';
    procedure setKeyboardType(newValue: UIKeyboardType); message 'setKeyboardType:';
    function keyboardType: UIKeyboardType; message 'keyboardType';
    function markedTextRange: UITextRange; message 'markedTextRange';
    procedure setMarkedTextStyle(newValue: NSDictionary); message 'setMarkedTextStyle:';
    function markedTextStyle: NSDictionary; message 'markedTextStyle';
    function offsetFromPosition_toPosition (from: UITextPosition; toPosition: UITextPosition): NSInteger; message 'offsetFromPosition:toPosition:';
    function positionFromPosition_inDirection_offset (position: UITextPosition; direction: UITextLayoutDirection; offset: NSInteger): nullable UITextPositionPtr; message 'positionFromPosition:inDirection:offset:';
    function positionFromPosition_offset (position: UITextPosition; offset: NSInteger): nullable UITextPositionPtr; message 'positionFromPosition:offset:';
    function positionWithinRange_atCharacterOffset (range: UITextRange; offset: NSInteger): nullable UITextPositionPtr; message 'positionWithinRange:atCharacterOffset:';
    function positionWithinRange_farthestInDirection (range: UITextRange; direction: UITextLayoutDirection): nullable UITextPositionPtr; message 'positionWithinRange:farthestInDirection:';
    procedure removeDictationResultPlaceholder_willInsertResult (placeholder: id; willInsertResult: boolean); message 'removeDictationResultPlaceholder:willInsertResult:';
    procedure replaceRange_withText (range: UITextRange; text: NSString); message 'replaceRange:withText:';
    procedure setReturnKeyType(newValue: UIReturnKeyType); message 'setReturnKeyType:';
    function returnKeyType: UIReturnKeyType; message 'returnKeyType';
    procedure setSecureTextEntry(newValue: boolean); message 'setSecureTextEntry:';
    function isSecureTextEntry: boolean; message 'isSecureTextEntry';
    procedure setSelectedTextRange(newValue: UITextRange); message 'setSelectedTextRange:';
    function selectedTextRange: UITextRange; message 'selectedTextRange';
    procedure setSelectionAffinity(newValue: UITextStorageDirection); message 'setSelectionAffinity:';
    function selectionAffinity: UITextStorageDirection; message 'selectionAffinity';
    function selectionRectsForRange (range: UITextRange): NSArray; message 'selectionRectsForRange:'; { available in 6_0 }
    procedure setBaseWritingDirection_forRange (writingDirection: UITextWritingDirection; range: UITextRange); message 'setBaseWritingDirection:forRange:';
    procedure setMarkedText_selectedRange (markedText: nullable NSStringPtr; selectedRange: NSRange); message 'setMarkedText:selectedRange:';
    function shouldChangeTextInRange_replacementText (range: UITextRange; text: NSString): boolean; message 'shouldChangeTextInRange:replacementText:'; { available in 6_0 }
    procedure setSpellCheckingType(newValue: UITextSpellCheckingType); message 'setSpellCheckingType:';
    function spellCheckingType: UITextSpellCheckingType; message 'spellCheckingType';
    procedure setTextContentType(newValue: UITextContentType); message 'setTextContentType:';
    function textContentType: UITextContentType; message 'textContentType';
    function textInputView: __kindof UIViewPtr; message 'textInputView';
    function textInRange (range: UITextRange): nullable NSStringPtr; message 'textInRange:';
    function textRangeFromPosition_toPosition (fromPosition: UITextPosition; toPosition: UITextPosition): nullable UITextRangePtr; message 'textRangeFromPosition:toPosition:';
    function textStylingAtPosition_inDirection (position: UITextPosition; direction: UITextStorageDirection): nullable NSDictionaryPtr; message 'textStylingAtPosition:inDirection:';
    function tokenizer: UITextInputTokenizerProtocol; message 'tokenizer';
    procedure unmarkText; message 'unmarkText';
    procedure updateFloatingCursorAtPoint (point: CGPoint); message 'updateFloatingCursorAtPoint:'; { available in 9_0 }
  end;


type
  UIView_UITextField = objccategory external name 'UITextField' (UIView)
    function endEditing (force: boolean): boolean; message 'endEditing:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITextFieldDelegateProtocol = objcprotocol external name 'UITextFieldDelegate' (NSObjectProtocol)
  optional
    function textFieldShouldBeginEditing (textField: UITextField): boolean; message 'textFieldShouldBeginEditing:';
    procedure textFieldDidBeginEditing (textField: UITextField); message 'textFieldDidBeginEditing:';
    function textFieldShouldEndEditing (textField: UITextField): boolean; message 'textFieldShouldEndEditing:';
    procedure textFieldDidEndEditing (textField: UITextField); message 'textFieldDidEndEditing:';
    procedure textFieldDidEndEditing_reason (textField: UITextField; reason: UITextFieldDidEndEditingReason); message 'textFieldDidEndEditing:reason:'; { available in 10_0 }
    function textField_shouldChangeCharactersInRange_replacementString (textField: UITextField; range: NSRange; string_: NSString): boolean; message 'textField:shouldChangeCharactersInRange:replacementString:';
    function textFieldShouldClear (textField: UITextField): boolean; message 'textFieldShouldClear:';
    function textFieldShouldReturn (textField: UITextField): boolean; message 'textFieldShouldReturn:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UITextFieldTextDidBeginEditingNotification: NSNotificationName; cvar; external;
  UITextFieldTextDidEndEditingNotification: NSNotificationName; cvar; external;
  UITextFieldTextDidChangeNotification: NSNotificationName; cvar; external;
  UITextFieldDidEndEditingReasonKey: NSString { available in 10_0 }; cvar; external;
{$endif}

