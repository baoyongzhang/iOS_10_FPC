{ Parsed from PassKit.framework PKLabeledValue.h }

{$ifdef TYPES}
type
  PKLabeledValuePtr = ^PKLabeledValue;
{$endif}

{$ifdef CLASSES}

type
  PKLabeledValue = objcclass external (NSObject)
  public
    function initWithLabel_value (label_: NSString; value: NSString): instancetype; message 'initWithLabel:value:'; { NS_DESIGNATED_INITIALIZER }
    function label_: NSString; message 'label';
    function value: NSString; message 'value';
  end;
{$endif}

