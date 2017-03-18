{ Parsed from UIKit.framework UIAccessibilityElement.h }

{$ifdef TYPES}
type
  UIAccessibilityElementPtr = ^UIAccessibilityElement;
{$endif}

{$ifdef CLASSES}

type
  UIAccessibilityElement = objcclass external (NSObject, UIAccessibilityIdentificationProtocol)
  public
    function initWithAccessibilityContainer (container: id): instancetype; message 'initWithAccessibilityContainer:';
    procedure setAccessibilityContainer(newValue: id); message 'setAccessibilityContainer:';
    function accessibilityContainer: id; message 'accessibilityContainer';
    procedure setIsAccessibilityElement(newValue: boolean); message 'setIsAccessibilityElement:';
    function isAccessibilityElement: boolean; message 'isAccessibilityElement';
    procedure setAccessibilityLabel(newValue: NSString); message 'setAccessibilityLabel:';
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    procedure setAccessibilityHint(newValue: NSString); message 'setAccessibilityHint:';
    function accessibilityHint: NSString; message 'accessibilityHint';
    procedure setAccessibilityValue(newValue: NSString); message 'setAccessibilityValue:';
    function accessibilityValue: NSString; message 'accessibilityValue';
    procedure setAccessibilityFrame(newValue: CGRect); message 'setAccessibilityFrame:';
    function accessibilityFrame: CGRect; message 'accessibilityFrame';
    procedure setAccessibilityTraits(newValue: UIAccessibilityTraits); message 'setAccessibilityTraits:';
    function accessibilityTraits: UIAccessibilityTraits; message 'accessibilityTraits';
    procedure setAccessibilityFrameInContainerSpace(newValue: CGRect); message 'setAccessibilityFrameInContainerSpace:';
    function accessibilityFrameInContainerSpace: CGRect; message 'accessibilityFrameInContainerSpace';

    { Adopted protocols }
    procedure setAccessibilityIdentifier(newValue: NSString); message 'setAccessibilityIdentifier:';
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier';
  end;
{$endif}

