{ Parsed from UIKit.framework UIAccessibilityIdentification.h }

{$ifdef TYPES}
type
  UIAccessibilityIdentificationProtocolPtr = ^UIAccessibilityIdentificationProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAccessibilityIdentificationProtocol = objcprotocol external name 'UIAccessibilityIdentification' (NSObjectProtocol)
  required
    procedure setAccessibilityIdentifier(newValue: NSString); message 'setAccessibilityIdentifier:';
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIView_UIAccessibility = objccategory external name 'UIAccessibility' (UIView)
  end;

type
  UIBarItem_UIAccessibility = objccategory external name 'UIAccessibility' (UIBarItem)
  end;

type
  UIImage_UIAccessibility = objccategory external name 'UIAccessibility' (UIImage)
  end;
{$endif}

