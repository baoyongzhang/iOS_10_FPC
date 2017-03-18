{ Parsed from UIKit.framework UITimingCurveProvider.h }

{$ifdef TYPES}
type
  UITimingCurveProviderProtocolPtr = ^UITimingCurveProviderProtocol;
{$endif}

{$ifdef TYPES}
type
  UITimingCurveType = NSInteger;
  UITimingCurveTypePtr = ^UITimingCurveType;

const
  UITimingCurveTypeBuiltin = 0;
  UITimingCurveTypeCubic = 1;
  UITimingCurveTypeSpring = 2;
  UITimingCurveTypeComposed = 3;
{$endif}

{$ifdef PROTOCOLS}

type
  UITimingCurveProviderProtocol = objcprotocol external name 'UITimingCurveProvider' (NSCodingProtocol, NSCopyingProtocol)
    function timingCurveType: UITimingCurveType; message 'timingCurveType';
    function cubicTimingParameters: UICubicTimingParameters; message 'cubicTimingParameters';
    function springTimingParameters: UISpringTimingParameters; message 'springTimingParameters';
  end;
{$endif}

