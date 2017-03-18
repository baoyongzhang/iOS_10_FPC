{ Parsed from NetworkExtension.framework NEHotspotHelper.h }

{$ifdef TYPES}
type
  NEHotspotNetworkPtr = ^NEHotspotNetwork;
  NEHotspotHelperCommandPtr = ^NEHotspotHelperCommand;
  NEHotspotHelperResponsePtr = ^NEHotspotHelperResponse;
  NEHotspotHelperPtr = ^NEHotspotHelper;
{$endif}

{$ifdef TYPES}
type
  NEHotspotHelperCommandType = NSInteger;
  NEHotspotHelperCommandTypePtr = ^NEHotspotHelperCommandType;

const
  kNEHotspotHelperCommandTypeNone = 0;
  kNEHotspotHelperCommandTypeFilterScanList = 1;
  kNEHotspotHelperCommandTypeEvaluate = 2;
  kNEHotspotHelperCommandTypeAuthenticate = 3;
  kNEHotspotHelperCommandTypePresentUI = 4;
  kNEHotspotHelperCommandTypeMaintain = 5;
  kNEHotspotHelperCommandTypeLogoff = 6;

type
  NEHotspotHelperResult = NSInteger;
  NEHotspotHelperResultPtr = ^NEHotspotHelperResult;

const
  kNEHotspotHelperResultSuccess = 0;
  kNEHotspotHelperResultFailure = 1;
  kNEHotspotHelperResultUIRequired = 2;
  kNEHotspotHelperResultCommandNotRecognized = 3;
  kNEHotspotHelperResultAuthenticationRequired = 4;
  kNEHotspotHelperResultUnsupportedNetwork = 5;
  kNEHotspotHelperResultTemporaryFailure = 6;

type
  NEHotspotHelperConfidence = NSInteger;
  NEHotspotHelperConfidencePtr = ^NEHotspotHelperConfidence;

const
  kNEHotspotHelperConfidenceNone = 0;
  kNEHotspotHelperConfidenceLow = 1;
  kNEHotspotHelperConfidenceHigh = 2;
{$endif}

{$ifdef CLASSES}

type
  NEHotspotNetwork = objcclass external (NSObject)
  public
    function SSID: NSString; message 'SSID';
    function BSSID: NSString; message 'BSSID';
    function signalStrength: double; message 'signalStrength';
    function isSecure: boolean; message 'isSecure';
    function didAutoJoin: boolean; message 'didAutoJoin';
    function didJustJoin: boolean; message 'didJustJoin';
    function isChosenHelper: boolean; message 'isChosenHelper';
    procedure setConfidence (confidence: NEHotspotHelperConfidence); message 'setConfidence:'; { available in NA, 9_0 }
    procedure setPassword (password: NSString); message 'setPassword:'; { available in NA, 9_0 }
  end;

type
  NEHotspotHelperCommand = objcclass external (NSObject)
  public
    function commandType: NEHotspotHelperCommandType; message 'commandType';
    function network: NEHotspotNetwork; message 'network';
    function networkList: NEHotspotNetwork *ProtocolPtr; message 'networkList';
    function createResponse (result_: NEHotspotHelperResult): NEHotspotHelperResponse; message 'createResponse:'; { available in NA, 9_0 }
    function createTCPConnection (endpoint: NWEndpoint): NWTCPConnection; message 'createTCPConnection:'; { available in NA, 9_0 }
    function createUDPSession (endpoint: NWEndpoint): NWUDPSession; message 'createUDPSession:'; { available in NA, 9_0 }
  end;

type
  NEHotspotHelperResponse = objcclass external (NSObject)
  public
    procedure setNetwork (network: NEHotspotNetwork); message 'setNetwork:'; { available in NA, 9_0 }
    procedure setNetworkList (networkList: NEHotspotNetwork *ProtocolPtr); message 'setNetworkList:'; { available in NA, 9_0 }
    procedure deliver; message 'deliver'; { available in NA, 9_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  NEHotspotHelperHandler = OpaqueCBlock { available in NA, 9_0 };
{$endif}

{$ifdef CLASSES}

type
  NEHotspotHelper = objcclass external (NSObject)
  public
    class function registerWithOptions_queue_handler (options: nullable NSDictionaryPtr; queue: dispatch_queue_t; handler: NEHotspotHelperHandler): boolean; message 'registerWithOptions:queue:handler:'; { available in NA, 9_0 }
    class function logoff (network: NEHotspotNetwork): boolean; message 'logoff:'; { available in NA, 9_0 }
    class function supportedNetworkInterfaces: NSArray; message 'supportedNetworkInterfaces';
  end;


type
  NSMutableURLRequest_NEHotspotHelper = objccategory external name 'NEHotspotHelper' (NSMutableURLRequest)
    procedure bindToHotspotHelperCommand (command: NEHotspotHelperCommand); message 'bindToHotspotHelperCommand:'; { available in NA, 9_0 }
  end;
{$endif}

