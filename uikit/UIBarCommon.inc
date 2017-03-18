{ Parsed from UIKit.framework UIBarCommon.h }

{$ifdef TYPES}
type
  UIBarPositioningProtocolPtr = ^UIBarPositioningProtocol;
  UIBarPositioningDelegateProtocolPtr = ^UIBarPositioningDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIBarMetrics = NSInteger;
  UIBarMetricsPtr = ^UIBarMetrics;

const
  UIBarMetricsDefault = 0;
  UIBarMetricsCompact = 1;
  UIBarMetricsDefaultPrompt = 101;
  UIBarMetricsCompactPrompt = 102;
  UIBarMetricsLandscapePhone = UIBarMetricsCompact deprecated 'in 5_0, 8_0, "Use UIBarMetricsCompact instead"';
  UIBarMetricsLandscapePhonePrompt = UIBarMetricsCompactPrompt deprecated 'in 7_0, 8_0, "Use UIBarMetricsCompactPrompt"';

type
  UIBarPosition = NSInteger;
  UIBarPositionPtr = ^UIBarPosition;

const
  UIBarPositionAny = 0;
  UIBarPositionBottom = 1;
  UIBarPositionTop = 2;
  UIBarPositionTopAttached = 3;

const
  UIToolbarPositionAny = UIBarPositionAny;
  UIToolbarPositionBottom = UIBarPositionBottom;
  UIToolbarPositionTop = UIBarPositionTop;
{$endif}

{$ifdef PROTOCOLS}

type
  UIBarPositioningProtocol = objcprotocol external name 'UIBarPositioning' (NSObjectProtocol)
    function barPosition: UIBarPosition; message 'barPosition';
  end;

type
  UIBarPositioningDelegateProtocol = objcprotocol external name 'UIBarPositioningDelegate' (NSObjectProtocol)
  optional
    function positionForBar (bar: UIBarPositioningProtocol): UIBarPosition; message 'positionForBar:';
  end;
{$endif}

