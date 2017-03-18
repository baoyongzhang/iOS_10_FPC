{ Parsed from UIKit.framework UIBarButtonItem.h }

{$ifdef TYPES}
type
  UIBarButtonItemPtr = ^UIBarButtonItem;
{$endif}

{$ifdef TYPES}
type
  UIBarButtonItemStyle = NSInteger;
  UIBarButtonItemStylePtr = ^UIBarButtonItemStyle;

const
  UIBarButtonItemStylePlain = 0;
  UIBarButtonItemStyleBordered = 1 deprecated 'in 2_0, 8_0, "Use UIBarButtonItemStylePlain when minimum deployment target is iOS7 or later"';
  UIBarButtonItemStyleDone = 2;

type
  UIBarButtonSystemItem = NSInteger;
  UIBarButtonSystemItemPtr = ^UIBarButtonSystemItem;

const
  UIBarButtonSystemItemDone = 0;
  UIBarButtonSystemItemCancel = 1;
  UIBarButtonSystemItemEdit = 2;
  UIBarButtonSystemItemSave = 3;
  UIBarButtonSystemItemAdd = 4;
  UIBarButtonSystemItemFlexibleSpace = 5;
  UIBarButtonSystemItemFixedSpace = 6;
  UIBarButtonSystemItemCompose = 7;
  UIBarButtonSystemItemReply = 8;
  UIBarButtonSystemItemAction = 9;
  UIBarButtonSystemItemOrganize = 10;
  UIBarButtonSystemItemBookmarks = 11;
  UIBarButtonSystemItemSearch = 12;
  UIBarButtonSystemItemRefresh = 13;
  UIBarButtonSystemItemStop = 14;
  UIBarButtonSystemItemCamera = 15;
  UIBarButtonSystemItemTrash = 16;
  UIBarButtonSystemItemPlay = 17;
  UIBarButtonSystemItemPause = 18;
  UIBarButtonSystemItemRewind = 19;
  UIBarButtonSystemItemFastForward = 20;
  UIBarButtonSystemItemUndo = 21 { available in 3_0 };
  UIBarButtonSystemItemRedo = 22 { available in 3_0 };
  UIBarButtonSystemItemPageCurl = 23 { available in 4_0 };
{$endif}

{$ifdef CLASSES}

type
  UIBarButtonItem = objcclass external (UIBarItem, NSCodingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithImage_style_target_action (image_: nullable UIImagePtr; style: UIBarButtonItemStyle; target: nullable id; action: nullable SEL): instancetype; message 'initWithImage:style:target:action:';
    function initWithImage_landscapeImagePhone_style_target_action (image_: nullable UIImagePtr; landscapeImagePhone: nullable UIImagePtr; style: UIBarButtonItemStyle; target: nullable id; action: nullable SEL): instancetype; message 'initWithImage:landscapeImagePhone:style:target:action:'; { available in 5_0 }
    function initWithTitle_style_target_action (title_: nullable NSStringPtr; style: UIBarButtonItemStyle; target: nullable id; action: nullable SEL): instancetype; message 'initWithTitle:style:target:action:';
    function initWithBarButtonSystemItem_target_action (systemItem: UIBarButtonSystemItem; target: nullable id; action: nullable SEL): instancetype; message 'initWithBarButtonSystemItem:target:action:';
    function initWithCustomView (customView: UIView): instancetype; message 'initWithCustomView:';
    procedure setStyle(newValue: UIBarButtonItemStyle); message 'setStyle:';
    function style: UIBarButtonItemStyle; message 'style';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setPossibleTitles(newValue: NSString *ProtocolPtr); message 'setPossibleTitles:';
    function possibleTitles: NSString *ProtocolPtr; message 'possibleTitles';
    procedure setCustomView(newValue: __kindof UIViewPtr); message 'setCustomView:';
    function customView: __kindof UIViewPtr; message 'customView';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setBackgroundImage_forState_barMetrics (backgroundImage: nullable UIImagePtr; state: UIControlState; barMetrics: UIBarMetrics); message 'setBackgroundImage:forState:barMetrics:'; { available in 5_0 }
    function backgroundImageForState_barMetrics (state: UIControlState; barMetrics: UIBarMetrics): nullable UIImagePtr; message 'backgroundImageForState:barMetrics:'; { available in 5_0 }
    procedure setBackgroundImage_forState_style_barMetrics (backgroundImage: nullable UIImagePtr; state: UIControlState; style_: UIBarButtonItemStyle; barMetrics: UIBarMetrics); message 'setBackgroundImage:forState:style:barMetrics:'; { available in 6_0 }
    function backgroundImageForState_style_barMetrics (state: UIControlState; style_: UIBarButtonItemStyle; barMetrics: UIBarMetrics): nullable UIImagePtr; message 'backgroundImageForState:style:barMetrics:'; { available in 6_0 }
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBackgroundVerticalPositionAdjustment_forBarMetrics (adjustment: CGFloat; barMetrics: UIBarMetrics); message 'setBackgroundVerticalPositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function backgroundVerticalPositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): CGFloat; message 'backgroundVerticalPositionAdjustmentForBarMetrics:'; { available in 5_0 }
    procedure setTitlePositionAdjustment_forBarMetrics (adjustment: UIOffset; barMetrics: UIBarMetrics); message 'setTitlePositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function titlePositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): UIOffset; message 'titlePositionAdjustmentForBarMetrics:'; { available in 5_0 }
    procedure setBackButtonBackgroundImage_forState_barMetrics (backgroundImage: nullable UIImagePtr; state: UIControlState; barMetrics: UIBarMetrics); message 'setBackButtonBackgroundImage:forState:barMetrics:'; { available in 5_0 }
    function backButtonBackgroundImageForState_barMetrics (state: UIControlState; barMetrics: UIBarMetrics): nullable UIImagePtr; message 'backButtonBackgroundImageForState:barMetrics:'; { available in 5_0 }
    procedure setBackButtonTitlePositionAdjustment_forBarMetrics (adjustment: UIOffset; barMetrics: UIBarMetrics); message 'setBackButtonTitlePositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function backButtonTitlePositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): UIOffset; message 'backButtonTitlePositionAdjustmentForBarMetrics:'; { available in 5_0 }
    procedure setBackButtonBackgroundVerticalPositionAdjustment_forBarMetrics (adjustment: CGFloat; barMetrics: UIBarMetrics); message 'setBackButtonBackgroundVerticalPositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function backButtonBackgroundVerticalPositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): CGFloat; message 'backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:'; { available in 5_0 }
  end;
{$endif}

