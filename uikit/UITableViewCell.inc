{ Parsed from UIKit.framework UITableViewCell.h }

{$ifdef TYPES}
type
  UITableViewCellPtr = ^UITableViewCell;
{$endif}

{$ifdef TYPES}
type
  UITableViewCellStyle = NSInteger;
  UITableViewCellStylePtr = ^UITableViewCellStyle;

const
  UITableViewCellStyleDefault = 0;
  UITableViewCellStyleValue1 = 1;
  UITableViewCellStyleValue2 = 2;
  UITableViewCellStyleSubtitle = 3;

type
  UITableViewCellSeparatorStyle = NSInteger;
  UITableViewCellSeparatorStylePtr = ^UITableViewCellSeparatorStyle;

const
  UITableViewCellSeparatorStyleNone = 0;
  UITableViewCellSeparatorStyleSingleLine = 1;
  UITableViewCellSeparatorStyleSingleLineEtched = 2;

type
  UITableViewCellSelectionStyle = NSInteger;
  UITableViewCellSelectionStylePtr = ^UITableViewCellSelectionStyle;

const
  UITableViewCellSelectionStyleNone = 0;
  UITableViewCellSelectionStyleBlue = 1;
  UITableViewCellSelectionStyleGray = 2;
  UITableViewCellSelectionStyleDefault = 3 { available in 7_0 };

type
  UITableViewCellFocusStyle = NSInteger;
  UITableViewCellFocusStylePtr = ^UITableViewCellFocusStyle;

const
  UITableViewCellFocusStyleDefault = 0;
  UITableViewCellFocusStyleCustom = 1;

type
  UITableViewCellEditingStyle = NSInteger;
  UITableViewCellEditingStylePtr = ^UITableViewCellEditingStyle;

const
  UITableViewCellEditingStyleNone = 0;
  UITableViewCellEditingStyleDelete = 1;
  UITableViewCellEditingStyleInsert = 2;

type
  UITableViewCellAccessoryType = NSInteger;
  UITableViewCellAccessoryTypePtr = ^UITableViewCellAccessoryType;

const
  UITableViewCellAccessoryNone = 0;
  UITableViewCellAccessoryDisclosureIndicator = 1;
  UITableViewCellAccessoryDetailDisclosureButton = 2;
  UITableViewCellAccessoryCheckmark = 4;
  UITableViewCellAccessoryDetailButton = 5 { available in 7_0 };

type
  UITableViewCellStateMask = NSUInteger;
  UITableViewCellStateMaskPtr = ^UITableViewCellStateMask;

const
  UITableViewCellStateDefaultMask = 0;
  UITableViewCellStateShowingEditControlMask = 1 shl 0;
  UITableViewCellStateShowingDeleteConfirmationMask = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  UITableViewCell = objcclass external (UIView, NSCodingProtocol, UIGestureRecognizerDelegateProtocol)
  public
    function initWithStyle_reuseIdentifier (style: UITableViewCellStyle; reuseIdentifier: nullable NSStringPtr): instancetype; message 'initWithStyle:reuseIdentifier:'; { available in 3_0 }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function imageView: UIImageView; message 'imageView';
    function textLabel: UILabel; message 'textLabel';
    function detailTextLabel: UILabel; message 'detailTextLabel';
    function contentView: UIView; message 'contentView';
    procedure setBackgroundView(newValue: UIView); message 'setBackgroundView:';
    function backgroundView: UIView; message 'backgroundView';
    procedure setSelectedBackgroundView(newValue: UIView); message 'setSelectedBackgroundView:';
    function selectedBackgroundView: UIView; message 'selectedBackgroundView';
    procedure setMultipleSelectionBackgroundView(newValue: UIView); message 'setMultipleSelectionBackgroundView:';
    function multipleSelectionBackgroundView: UIView; message 'multipleSelectionBackgroundView';
    function reuseIdentifier: NSString; message 'reuseIdentifier';
    procedure prepareForReuse; message 'prepareForReuse';
    procedure setSelectionStyle(newValue: UITableViewCellSelectionStyle); message 'setSelectionStyle:';
    function selectionStyle: UITableViewCellSelectionStyle; message 'selectionStyle';
    procedure setSelected(newValue: boolean); message 'setSelected:';
    function isSelected: boolean; message 'isSelected';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setSelected_animated (selected: boolean; animated: boolean); message 'setSelected:animated:';
    procedure setHighlighted_animated (highlighted: boolean; animated: boolean); message 'setHighlighted:animated:';
    function editingStyle: UITableViewCellEditingStyle; message 'editingStyle';
    procedure setShowsReorderControl(newValue: boolean); message 'setShowsReorderControl:';
    function showsReorderControl: boolean; message 'showsReorderControl';
    procedure setShouldIndentWhileEditing(newValue: boolean); message 'setShouldIndentWhileEditing:';
    function shouldIndentWhileEditing: boolean; message 'shouldIndentWhileEditing';
    procedure setAccessoryType(newValue: UITableViewCellAccessoryType); message 'setAccessoryType:';
    function accessoryType: UITableViewCellAccessoryType; message 'accessoryType';
    procedure setAccessoryView(newValue: UIView); message 'setAccessoryView:';
    function accessoryView: UIView; message 'accessoryView';
    procedure setEditingAccessoryType(newValue: UITableViewCellAccessoryType); message 'setEditingAccessoryType:';
    function editingAccessoryType: UITableViewCellAccessoryType; message 'editingAccessoryType';
    procedure setEditingAccessoryView(newValue: UIView); message 'setEditingAccessoryView:';
    function editingAccessoryView: UIView; message 'editingAccessoryView';
    procedure setIndentationLevel(newValue: NSInteger); message 'setIndentationLevel:';
    function indentationLevel: NSInteger; message 'indentationLevel';
    procedure setIndentationWidth(newValue: CGFloat); message 'setIndentationWidth:';
    function indentationWidth: CGFloat; message 'indentationWidth';
    procedure set__TVOS_PROHIBITED(newValue: UIEdgeInsets separatorInset); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIEdgeInsets separatorInset; message 'TVOS_PROHIBITED';
    procedure setEditing(newValue: boolean); message 'setEditing:';
    function isEditing: boolean; message 'isEditing';
    procedure setEditing_animated (editing: boolean; animated: boolean); message 'setEditing:animated:';
    function showingDeleteConfirmation: boolean; message 'showingDeleteConfirmation';
    procedure setFocusStyle(newValue: UITableViewCellFocusStyle); message 'setFocusStyle:';
    function focusStyle: UITableViewCellFocusStyle; message 'focusStyle';
    procedure willTransitionToState (state: UITableViewCellStateMask); message 'willTransitionToState:'; { available in 3_0 }
    procedure didTransitionToState (state: UITableViewCellStateMask); message 'didTransitionToState:'; { available in 3_0 }

    { Adopted protocols }
    function gestureRecognizer_shouldBeRequiredToFailByGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:'; { available in 7_0 }
    function gestureRecognizer_shouldReceivePress (gestureRecognizer: UIGestureRecognizer; press: UIPress): boolean; message 'gestureRecognizer:shouldReceivePress:';
    function gestureRecognizer_shouldReceiveTouch (gestureRecognizer: UIGestureRecognizer; touch: UITouch): boolean; message 'gestureRecognizer:shouldReceiveTouch:';
    function gestureRecognizer_shouldRecognizeSimultaneouslyWithGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:';
    function gestureRecognizer_shouldRequireFailureOfGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldRequireFailureOfGestureRecognizer:'; { available in 7_0 }
    function gestureRecognizerShouldBegin (gestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizerShouldBegin:';
  end;


type
  UIDeprecated = objccategory external (UITableViewCell)
    function initWithFrame_reuseIdentifier (frame: CGRect; reuseIdentifier_: nullable NSStringPtr): id; message 'initWithFrame:reuseIdentifier:'; deprecated 'in 2_0, 3_0';
    procedure set__TVOS_PROHIBITED(newValue: NSString *text); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSString *text; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: UIFont *font); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIFont *font; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: NSTextAlignment textAlignment); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: NSTextAlignment textAlignment; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED___(newValue: NSLineBreakMode lineBreakMode); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___: NSLineBreakMode lineBreakMode; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED____(newValue: UIColor *textColor); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED____: UIColor *textColor; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_____(newValue: UIColor *selectedTextColor); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_____: UIColor *selectedTextColor; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED______(newValue: UIImage *image); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED______: UIImage *image; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_______(newValue: UIImage *selectedImage); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_______: UIImage *selectedImage; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED________(newValue: BOOL hidesAccessoryWhenEditing); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED________: BOOL hidesAccessoryWhenEditing; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_________(newValue: id target); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_________: id target; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__________(newValue: SEL editAction); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__________: SEL editAction; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED___________(newValue: SEL accessoryAction); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___________: SEL accessoryAction; message 'TVOS_PROHIBITED';
  end;
{$endif}

