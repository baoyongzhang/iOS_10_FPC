{ Parsed from HomeKit.framework HMServiceGroup.h }

{$ifdef TYPES}
type
  HMServiceGroupPtr = ^HMServiceGroup;
{$endif}

{$ifdef CLASSES}

type
  HMServiceGroup = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function services: HMService *ProtocolPtr; message 'services';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure addService_completionHandler (service: HMService; completion: OpaqueCBlock); message 'addService:completionHandler:';
    procedure removeService_completionHandler (service: HMService; completion: OpaqueCBlock); message 'removeService:completionHandler:';
  end;
{$endif}

