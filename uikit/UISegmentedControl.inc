{ Parsed from UIKit.framework UISegmentedControl.h }

{$ifdef TYPES}
type
  UISegmentedControlPtr = ^UISegmentedControl;
{$endif}

{$ifdef TYPES}
type
  UISegmentedControlStyle = NSInteger;
  UISegmentedControlStylePtr = ^UISegmentedControlStyle;

const
  UISegmentedControlStylePlain = 0;
  UISegmentedControlStyleBordered = 1;
  UISegmentedControlStyleBar = 2;
  UISegmentedControlStyleBezeled = 3;
const
  UISegmentedControlNoSegment = -1;

type
  UISegmentedControlSegment = NSInteger;
  UISegmentedControlSegmentPtr = ^UISegmentedControlSegment;

const
  UISegmentedControlSegmentAny = 0;
  UISegmentedControlSegmentLeft = 1;
  UISegmentedControlSegmentCenter = 2;
  UISegmentedControlSegmentRight = 3;
  UISegmentedControlSegmentAlone = 4;
{$endif}

{$ifdef CLASSES}

type
  UISegmentedControl = objcclass external (UIControl, NSCodingProtocol)
  public
    function initWithItems (items: nullable NSArrayPtr): instancetype; message 'initWithItems:';
    procedure set__TVOS_PROHIBITED(newValue: UISegmentedControlStyle segmentedControlStyle); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UISegmentedControlStyle segmentedControlStyle; message 'TVOS_PROHIBITED';
    procedure setMomentary(newValue: boolean); message 'setMomentary:';
    function isMomentary: boolean; message 'isMomentary';
    function numberOfSegments: NSUInteger; message 'numberOfSegments';
    procedure setApportionsSegmentWidthsByContent(newValue: boolean); message 'setApportionsSegmentWidthsByContent:';
    function apportionsSegmentWidthsByContent: boolean; message 'apportionsSegmentWidthsByContent';
    procedure insertSegmentWithTitle_atIndex_animated (title: nullable NSStringPtr; segment: NSUInteger; animated: boolean); message 'insertSegmentWithTitle:atIndex:animated:';
    procedure insertSegmentWithImage_atIndex_animated (image: nullable UIImagePtr; segment: NSUInteger; animated: boolean); message 'insertSegmentWithImage:atIndex:animated:';
    procedure removeSegmentAtIndex_animated (segment: NSUInteger; animated: boolean); message 'removeSegmentAtIndex:animated:';
    procedure removeAllSegments; message 'removeAllSegments';
    procedure setTitle_forSegmentAtIndex (title: nullable NSStringPtr; segment: NSUInteger); message 'setTitle:forSegmentAtIndex:';
    function titleForSegmentAtIndex (segment: NSUInteger): nullable NSStringPtr; message 'titleForSegmentAtIndex:';
    procedure setImage_forSegmentAtIndex (image: nullable UIImagePtr; segment: NSUInteger); message 'setImage:forSegmentAtIndex:';
    function imageForSegmentAtIndex (segment: NSUInteger): nullable UIImagePtr; message 'imageForSegmentAtIndex:';
    procedure setWidth_forSegmentAtIndex (width: CGFloat; segment: NSUInteger); message 'setWidth:forSegmentAtIndex:';
    function widthForSegmentAtIndex (segment: NSUInteger): CGFloat; message 'widthForSegmentAtIndex:';
    procedure setContentOffset_forSegmentAtIndex (offset: CGSize; segment: NSUInteger); message 'setContentOffset:forSegmentAtIndex:';
    function contentOffsetForSegmentAtIndex (segment: NSUInteger): CGSize; message 'contentOffsetForSegmentAtIndex:';
    procedure setEnabled_forSegmentAtIndex (enabled: boolean; segment: NSUInteger); message 'setEnabled:forSegmentAtIndex:';
    function isEnabledForSegmentAtIndex (segment: NSUInteger): boolean; message 'isEnabledForSegmentAtIndex:';
    procedure setSelectedSegmentIndex(newValue: NSInteger); message 'setSelectedSegmentIndex:';
    function selectedSegmentIndex: NSInteger; message 'selectedSegmentIndex';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBackgroundImage_forState_barMetrics (backgroundImage: nullable UIImagePtr; state_: UIControlState; barMetrics: UIBarMetrics); message 'setBackgroundImage:forState:barMetrics:'; { available in 5_0 }
    function backgroundImageForState_barMetrics (state_: UIControlState; barMetrics: UIBarMetrics): nullable UIImagePtr; message 'backgroundImageForState:barMetrics:'; { available in 5_0 }
    procedure setDividerImage_forLeftSegmentState_rightSegmentState_barMetrics (dividerImage: nullable UIImagePtr; leftState: UIControlState; rightState: UIControlState; barMetrics: UIBarMetrics); message 'setDividerImage:forLeftSegmentState:rightSegmentState:barMetrics:'; { available in 5_0 }
    function dividerImageForLeftSegmentState_rightSegmentState_barMetrics (leftState: UIControlState; rightState: UIControlState; barMetrics: UIBarMetrics): nullable UIImagePtr; message 'dividerImageForLeftSegmentState:rightSegmentState:barMetrics:'; { available in 5_0 }
    procedure setTitleTextAttributes_forState (attributes: nullable NSDictionaryPtr; state_: UIControlState); message 'setTitleTextAttributes:forState:'; { available in 5_0 }
    function titleTextAttributesForState (state_: UIControlState): nullable NSDictionaryPtr; message 'titleTextAttributesForState:'; { available in 5_0 }
    procedure setContentPositionAdjustment_forSegmentType_barMetrics (adjustment: UIOffset; leftCenterRightOrAlone: UISegmentedControlSegment; barMetrics: UIBarMetrics); message 'setContentPositionAdjustment:forSegmentType:barMetrics:'; { available in 5_0 }
    function contentPositionAdjustmentForSegmentType_barMetrics (leftCenterRightOrAlone: UISegmentedControlSegment; barMetrics: UIBarMetrics): UIOffset; message 'contentPositionAdjustmentForSegmentType:barMetrics:'; { available in 5_0 }
  end;
{$endif}

