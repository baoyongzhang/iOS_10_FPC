{ Parsed from UIKit.framework UIDataDetectors.h }
{$ifdef TYPES}
type
  UIDataDetectorTypes = NSUInteger;
  UIDataDetectorTypesPtr = ^UIDataDetectorTypes;

const
  UIDataDetectorTypePhoneNumber = 1 shl 0;
  UIDataDetectorTypeLink = 1 shl 1;
  UIDataDetectorTypeAddress = 1 shl 2 { available in 4_0 };
  UIDataDetectorTypeCalendarEvent = 1 shl 3 { available in 4_0 };
  UIDataDetectorTypeShipmentTrackingNumber = 1 shl 4 { available in 10_0 };
  UIDataDetectorTypeFlightNumber = 1 shl 5 { available in 10_0 };
  UIDataDetectorTypeLookupSuggestion = 1 shl 6 { available in 10_0 };
  UIDataDetectorTypeNone = 0;
  UIDataDetectorTypeAll = ULONG_MAX;
{$endif}

