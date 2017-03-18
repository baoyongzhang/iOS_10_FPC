{ Parsed from Intents.framework INDateComponentsRange.h }

{$ifdef TYPES}
type
  INDateComponentsRangePtr = ^INDateComponentsRange;
{$endif}

{$ifdef CLASSES}

type
  INDateComponentsRange = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithStartDateComponents_endDateComponents (startDateComponents: nullable NSDateComponentsPtr; endDateComponents: nullable NSDateComponentsPtr): instancetype; message 'initWithStartDateComponents:endDateComponents:'; { NS_DESIGNATED_INITIALIZER }
    function startDateComponents: NSDateComponents; message 'startDateComponents';
    function endDateComponents: NSDateComponents; message 'endDateComponents';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

