{ Parsed from GameplayKit.framework GKEntity.h }

{ Types from GKEntity }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  GKEntityPtr = ^GKEntity;
{$endif}

{$ifdef CLASSES}

type
  GKEntity = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function entity: instancetype; message 'entity';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
    function components: GKComponent *ProtocolPtr; message 'components';
    procedure addComponent (component: GKComponent); message 'addComponent:';
    {$if ((defined(SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH >= 1))}
    procedure removeComponentForClass (componentClass: pobjc_class); message 'removeComponentForClass:';
    {$else}
    procedure removeComponentForClass (componentClass: pobjc_class); message 'removeComponentForClass:';
    {$endif}
    {$if ((defined(SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH >= 1))}
    function componentForClass (componentClass: pobjc_class): nullable GKComponentPtr; message 'componentForClass:';
    {$else}
    function componentForClass_ComponentType_componentClass (componentClass: pobjc_class; GKComponent_: id; ComponentType: id): nullable GKComponentPtr; message 'componentForClass:ComponentType:componentClass:';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

