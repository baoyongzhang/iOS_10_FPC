{ Parsed from NotificationCenter.framework NCWidgetProviding.h }

{$ifdef TYPES}
type
  NCWidgetProvidingProtocolPtr = ^NCWidgetProvidingProtocol;
{$endif}

{$ifdef TYPES}
type
  NCUpdateResult = NSUInteger;
  NCUpdateResultPtr = ^NCUpdateResult;

const
  NCUpdateResultNewData = 0;
  NCUpdateResultNoData = 1;
  NCUpdateResultFailed = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  NCWidgetProvidingProtocol = objcprotocol external name 'NCWidgetProviding' (NSObjectProtocol)
  optional
    procedure widgetPerformUpdateWithCompletionHandler (completionHandler: OpaqueCBlock); message 'widgetPerformUpdateWithCompletionHandler:';
    procedure widgetActiveDisplayModeDidChange_withMaximumSize (activeDisplayMode: NCWidgetDisplayMode; maxSize: CGSize); message 'widgetActiveDisplayModeDidChange:withMaximumSize:'; { available in 10_0 }
    function widgetMarginInsetsForProposedMarginInsets (defaultMarginInsets: UIEdgeInsets): UIEdgeInsets; message 'widgetMarginInsetsForProposedMarginInsets:'; deprecated 'in 8_0, 10_0, "This method will not be called on widgets linked against iOS versions 10.0 and later."';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIVibrancyEffect_NCWidgetAdditions = objccategory external name 'NCWidgetAdditions' (UIVibrancyEffect)
    class function widgetPrimaryVibrancyEffect: UIVibrancyEffect; message 'widgetPrimaryVibrancyEffect'; { available in 10_0 }
    class function widgetSecondaryVibrancyEffect: UIVibrancyEffect; message 'widgetSecondaryVibrancyEffect'; { available in 10_0 }
  end;

type
  NCWidgetAdditions = objccategory external (NSExtensionContext)
    procedure setWidgetLargestAvailableDisplayMode(newValue: NCWidgetDisplayMode); message 'setWidgetLargestAvailableDisplayMode:';
    function widgetLargestAvailableDisplayMode: NCWidgetDisplayMode; message 'widgetLargestAvailableDisplayMode';
    function widgetActiveDisplayMode: NCWidgetDisplayMode; message 'widgetActiveDisplayMode';
    function widgetMaximumSizeForDisplayMode (displayMode: NCWidgetDisplayMode): CGSize; message 'widgetMaximumSizeForDisplayMode:'; { available in 10_0 }
  end;

type
  NCWidgetDeprecated = objccategory external (UIVibrancyEffect)
    class function notificationCenterVibrancyEffect: UIVibrancyEffect; message 'notificationCenterVibrancyEffect'; deprecated 'in 8_0, 10_0, "Please use '-[UIVibrancyEffect widgetPrimaryVibrancyEffect]' instead."';
  end;
{$endif}

