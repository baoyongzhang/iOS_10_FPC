{ Parsed from CoreData.framework NSMappingModel.h }

{$ifdef TYPES}
type
  NSMappingModelPtr = ^NSMappingModel;
{$endif}

{$ifdef CLASSES}

type
  NSMappingModel = objcclass external (NSObject)
  private
    {$if (not defined(__OBJC2__))}
    _reserved: pointer;
    _reserved1: pointer;
    _reserved2: pointer;
    _entityMappings: NSMutableArray;
    _entityMappingsByName: NSMutableDictionary;
    __modelMappingFlags: bitpacked record
      case byte of
        0: (_anonBitField___modelMappingFlags0: cuint);
        1: (
          _isInUse: 0..1;
          _reservedModelMapping: 0..((1 shl 31)-1);
        );
      end;
    {$endif}
  public
    class function mappingModelFromBundles_forSourceModel_destinationModel (bundles: nullable NSBundle *ProtocolPtr; sourceModel: nullable NSManagedObjectModelPtr; destinationModel: nullable NSManagedObjectModelPtr): nullable NSMappingModelPtr; message 'mappingModelFromBundles:forSourceModel:destinationModel:';
    class function inferredMappingModelForSourceModel_destinationModel_error (sourceModel: NSManagedObjectModel; destinationModel: NSManagedObjectModel; error: NSErrorPtr): nullable NSMappingModelPtr; message 'inferredMappingModelForSourceModel:destinationModel:error:'; { available in macosx(10.6 }
    function initWithContentsOfURL (url: nullable NSURLPtr): nullable instancetype; message 'initWithContentsOfURL:';
    procedure setEntityMappings(newValue: NSEntityMapping *ProtocolPtr); message 'setEntityMappings:';
    function entityMappings: NSEntityMapping *ProtocolPtr; message 'entityMappings';
    function entityMappingsByName: NSDictionary; message 'entityMappingsByName';
  end;
{$endif}

