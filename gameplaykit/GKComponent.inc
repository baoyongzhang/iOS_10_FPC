{ Parsed from GameplayKit.framework GKComponent.h }

{$ifdef TYPES}
type
  GKComponentPtr = ^GKComponent;
  GKComponentSystemPtr = ^GKComponentSystem;
{$endif}

{$ifdef CLASSES}

type
  GKComponent = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function entity: GKEntity; message 'entity';
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
    procedure didAddToEntity; message 'didAddToEntity';
    procedure willRemoveFromEntity; message 'willRemoveFromEntity';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;

type
  GKComponentSystem = objcclass external (NSObject, ComponentType : GKComponent *Protocol)
  public
    function componentClass: pobjc_class; message 'componentClass';
    function components: ComponentTypeProtocolPtr; message 'components';
    function objectAtIndexedSubscript (idx: NSUInteger): ComponentType; message 'objectAtIndexedSubscript:';
    function initWithComponentClass (cls: pobjc_class): instancetype; message 'initWithComponentClass:';
    procedure addComponent (component: ComponentType); message 'addComponent:';
    procedure addComponentWithEntity (entity: GKEntity); message 'addComponentWithEntity:';
    procedure removeComponentWithEntity (entity: GKEntity); message 'removeComponentWithEntity:';
    procedure removeComponent (component: ComponentType); message 'removeComponent:';
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
    function classForGenericArgumentAtIndex (index: NSUInteger): nonnull Class; message 'classForGenericArgumentAtIndex:';
  end;
{$endif}

