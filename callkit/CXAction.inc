{ Parsed from CallKit.framework CXAction.h }

{$ifdef TYPES}
type
  CXActionPtr = ^CXAction;
{$endif}

{$ifdef CLASSES}

type
  CXAction = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function UUID: NSUUID; message 'UUID';
    function isComplete: boolean; message 'isComplete';
    function timeoutDate: NSDate; message 'timeoutDate';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure fulfill; message 'fulfill';
    procedure fail; message 'fail';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

