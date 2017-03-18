{ Parsed from CallKit.framework CXTransaction.h }

{$ifdef TYPES}
type
  CXTransactionPtr = ^CXTransaction;
{$endif}

{$ifdef CLASSES}

type
  CXTransaction = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function UUID: NSUUID; message 'UUID';
    function isComplete: boolean; message 'isComplete';
    function actions: __kindof CXAction *ProtocolPtr; message 'actions';
    function initWithActions (actions_: CXAction *ProtocolPtr): instancetype; message 'initWithActions:'; { NS_DESIGNATED_INITIALIZER }
    function initWithAction (action: CXAction): instancetype; message 'initWithAction:';
    procedure addAction (action: CXAction); message 'addAction:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

