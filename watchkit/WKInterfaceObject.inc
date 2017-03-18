{ Parsed from WatchKit.framework WKInterfaceObject.h }

{$ifdef TYPES}
type
  WKInterfaceObjectPtr = ^WKInterfaceObject;
  WKAccessibilityImageRegionPtr = ^WKAccessibilityImageRegion;
{$endif}

{$ifdef TYPES}
type
  WKInterfaceObjectHorizontalAlignment = NSInteger;
  WKInterfaceObjectHorizontalAlignmentPtr = ^WKInterfaceObjectHorizontalAlignment;

const
  WKInterfaceObjectHorizontalAlignmentLeft = 0;
  WKInterfaceObjectHorizontalAlignmentCenter = 1;
  WKInterfaceObjectHorizontalAlignmentRight = 2;

type
  WKInterfaceObjectVerticalAlignment = NSInteger;
  WKInterfaceObjectVerticalAlignmentPtr = ^WKInterfaceObjectVerticalAlignment;

const
  WKInterfaceObjectVerticalAlignmentTop = 0;
  WKInterfaceObjectVerticalAlignmentCenter = 1;
  WKInterfaceObjectVerticalAlignmentBottom = 2;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceObject = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    procedure setHidden (hidden: boolean); message 'setHidden:';
    procedure setAlpha (alpha: CGFloat); message 'setAlpha:';
    procedure setSemanticContentAttribute (semanticContentAttribute: WKInterfaceSemanticContentAttribute); message 'setSemanticContentAttribute:'; { available in 2.1 }
    procedure setHorizontalAlignment (horizontalAlignment: WKInterfaceObjectHorizontalAlignment); message 'setHorizontalAlignment:'; { available in 2.0 }
    procedure setVerticalAlignment (verticalAlignment: WKInterfaceObjectVerticalAlignment); message 'setVerticalAlignment:'; { available in 2.0 }
    procedure setWidth (width: CGFloat); message 'setWidth:';
    procedure setHeight (height: CGFloat); message 'setHeight:';
    procedure setRelativeWidth_withAdjustment (width: CGFloat; adjustment: CGFloat); message 'setRelativeWidth:withAdjustment:'; { available in 2.0 }
    procedure setRelativeHeight_withAdjustment (height: CGFloat; adjustment: CGFloat); message 'setRelativeHeight:withAdjustment:'; { available in 2.0 }
    procedure sizeToFitWidth; message 'sizeToFitWidth'; { available in 2.0 }
    procedure sizeToFitHeight; message 'sizeToFitHeight'; { available in 2.0 }
    function interfaceProperty: NSString; message 'interfaceProperty';
  end;


type
  WKAccessibility = objccategory external (WKInterfaceObject)
    procedure setAccessibilityIdentifier (accessibilityIdentifier: nullable NSStringPtr); message 'setAccessibilityIdentifier:'; { available in 2.0,9.0 }
    procedure setAccessibilityLabel (accessibilityLabel: nullable NSStringPtr); message 'setAccessibilityLabel:';
    procedure setAccessibilityHint (accessibilityHint: nullable NSStringPtr); message 'setAccessibilityHint:';
    procedure setAccessibilityValue (accessibilityValue: nullable NSStringPtr); message 'setAccessibilityValue:';
    procedure setIsAccessibilityElement (isAccessibilityElement: boolean); message 'setIsAccessibilityElement:';
    procedure setAccessibilityTraits (accessibilityTraits: UIAccessibilityTraits); message 'setAccessibilityTraits:';
    procedure setAccessibilityImageRegions (accessibilityImageRegions: WKAccessibilityImageRegion*ProtocolPtr); message 'setAccessibilityImageRegions:';
  end;


type
  WKAccessibilityImageRegion = objcclass external (NSObject)
  public
    procedure setFrame(newValue: CGRect); message 'setFrame:';
    function frame: CGRect; message 'frame';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
  end;
{$endif}

