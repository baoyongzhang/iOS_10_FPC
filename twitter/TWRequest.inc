{ Parsed from Twitter.framework TWRequest.h }

{$ifdef TYPES}
type
  TWRequestPtr = ^TWRequest;
{$endif}

{$ifdef TYPES}
const
  TWRequestMethodGET = SLRequestMethodGET;
  TWRequestMethodPOST = SLRequestMethodPOST;
  TWRequestMethodDELETE = SLRequestMethodDELETE;

type
  TWRequestMethod = SLRequestMethod;
  TWRequestMethodPtr = ^TWRequestMethod;
  TWRequestHandler = SLRequestHandler deprecated 'in NA, NA, 5_0, 6_0';
  TWRequestHandlerPtr = ^TWRequestHandler deprecated 'in NA, NA, 5_0, 6_0';
{$endif}

{$ifdef CLASSES}

type
  TWRequest = objcclass external (NSObject)
  public
    function initWithURL_parameters_requestMethod (url: NSURL; parameters: NSDictionary; requestMethod: TWRequestMethod): id; message 'initWithURL:parameters:requestMethod:';
    procedure setAccount(newValue: ACAccount); message 'setAccount:';
    function account: ACAccount; message 'account';
    function requestMethod: TWRequestMethod; message 'requestMethod';
    function URL: NSURL; message 'URL';
    function parameters: NSDictionary; message 'parameters';
    procedure addMultiPartData_withName_type (data: NSData; name: NSString; type_: NSString); message 'addMultiPartData:withName:type:';
    function signedURLRequest: NSURLRequest; message 'signedURLRequest';
    procedure performRequestWithHandler (handler: TWRequestHandler); message 'performRequestWithHandler:';
  end;
{$endif}

