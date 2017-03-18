{ Parsed from UIKit.framework UIAccessibilityAdditions.h }

{$ifdef TYPES}
type
  UIPickerViewAccessibilityDelegateProtocolPtr = ^UIPickerViewAccessibilityDelegateProtocol;
  UIScrollViewAccessibilityDelegateProtocolPtr = ^UIScrollViewAccessibilityDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPickerViewAccessibilityDelegateProtocol = objcprotocol external name 'UIPickerViewAccessibilityDelegate' (UIPickerViewDelegateProtocol)
  optional
    function pickerView_accessibilityLabelForComponent (pickerView: UIPickerView; component: NSInteger): nullable NSStringPtr; message 'pickerView:accessibilityLabelForComponent:';
    function pickerView_accessibilityHintForComponent (pickerView: UIPickerView; component: NSInteger): nullable NSStringPtr; message 'pickerView:accessibilityHintForComponent:';
  end;

type
  UIScrollViewAccessibilityDelegateProtocol = objcprotocol external name 'UIScrollViewAccessibilityDelegate' (UIScrollViewDelegateProtocol)
  optional
    function accessibilityScrollStatusForScrollView (scrollView: UIScrollView): nullable NSStringPtr; message 'accessibilityScrollStatusForScrollView:';
  end;
{$endif}

