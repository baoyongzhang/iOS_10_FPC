{ Parsed from HomeKit.framework HMService.h }

{$ifdef TYPES}
type
  HMServicePtr = ^HMService;
{$endif}

{$ifdef CLASSES}

type
  HMService = objcclass external (NSObject)
  public
    function accessory: HMAccessory; message 'accessory';
    function serviceType: NSString; message 'serviceType';
    function localizedDescription: NSString; message 'localizedDescription';
    function name: NSString; message 'name';
    function associatedServiceType: NSString; message 'associatedServiceType';
    function characteristics: HMCharacteristic *ProtocolPtr; message 'characteristics';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    function isUserInteractive: boolean; message 'isUserInteractive';
    function isPrimaryService: boolean; message 'isPrimaryService';
    function linkedServices: HMService *Protocol *__nullable; message 'linkedServices';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure updateAssociatedServiceType_completionHandler (serviceType_: nullable NSStringPtr; completion: OpaqueCBlock); message 'updateAssociatedServiceType:completionHandler:';
  end;
{$endif}

