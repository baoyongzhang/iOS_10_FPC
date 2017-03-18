{ Parsed from QuartzCore.framework CAEmitterBehavior.h }

{$ifdef TYPES}
type
  CAEmitterBehaviorPtr = ^CAEmitterBehavior;
{$endif}

{$ifdef CLASSES}

type
  CAEmitterBehavior = objcclass external (NSObject, NSCodingProtocol)
  private
    _type: cuint;
    _name: NSString;
    _attr: pointer;
    _cache: pointer;
    _flags: cuint32;
  public
    class function behaviorTypes: NSString *ProtocolPtr; message 'behaviorTypes';
    class function behaviorWithType (type_: NSString): CAEmitterBehavior; message 'behaviorWithType:';
    function initWithType (type_: NSString): id; message 'initWithType:';
    function type_: NSString; message 'type';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAEmitterBehaviorWave: NSString; cvar; external;
  kCAEmitterBehaviorDrag: NSString; cvar; external;
  kCAEmitterBehaviorAlignToMotion: NSString; cvar; external;
  kCAEmitterBehaviorValueOverLife: NSString; cvar; external;
  kCAEmitterBehaviorColorOverLife: NSString; cvar; external;
  kCAEmitterBehaviorLight: NSString; cvar; external;
  kCAEmitterBehaviorAttractor: NSString; cvar; external;
  kCAEmitterBehaviorSimpleAttractor: NSString; cvar; external;
{$endif}

