{ Parsed from ModelIO.framework MDLObject.h }

{$ifdef TYPES}
type
  MDLObjectPtr = ^MDLObject;
  MDLObjectContainerPtr = ^MDLObjectContainer;
{$endif}

{$ifdef CLASSES}

type
  MDLObject = objcclass external (NSObject, MDLNamedProtocol)
  public
    procedure setComponent_forProtocol (component: MDLComponentProtocol; protocol_: Protocol); message 'setComponent:forProtocol:';
    function componentConformingToProtocol (protocol_: Protocol): nullable MDLComponentProtocol; message 'componentConformingToProtocol:';
    procedure setParent(newValue: MDLObject); message 'setParent:';
    function parent: MDLObject; message 'parent';
    procedure setInstance(newValue: MDLObject); message 'setInstance:';
    function instance: MDLObject; message 'instance';
    function path: NSString; message 'path';
    function objectAtPath (path_: NSString): MDLObject; message 'objectAtPath:';
    procedure enumerateChildObjectsOfClass_root_usingBlock_stopPointer (objectClass: pobjc_class; root: MDLObject; block: OpaqueCBlock; stopPointer: pboolean); message 'enumerateChildObjectsOfClass:root:usingBlock:stopPointer:';
    procedure setTransform(newValue: MDLTransformComponentProtocol); message 'setTransform:';
    function transform: MDLTransformComponentProtocol; message 'transform';
    procedure setChildren(newValue: MDLObjectContainerComponentProtocol); message 'setChildren:';
    function children: MDLObjectContainerComponentProtocol; message 'children';
    procedure setHidden(newValue: boolean); message 'setHidden:';
    function hidden: boolean; message 'hidden';
    procedure addChild (child: MDLObject); message 'addChild:';
    function boundingBoxAtTime (time: NSTimeInterval): MDLAxisAlignedBoundingBox; message 'boundingBoxAtTime:';

    { Adopted protocols }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  MDLObjectContainer = objcclass external (NSObject, MDLObjectContainerComponentProtocol)

    { Adopted protocols }
    procedure addObject (object_: MDLObject); message 'addObject:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id  _Nullable; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    function objects: MDLObject *ProtocolPtr; message 'objects';
    procedure removeObject (object_: MDLObject); message 'removeObject:';
  end;
{$endif}

