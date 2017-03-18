{ Parsed from Intents.framework INSearchForMessagesIntentResponse.h }

{$ifdef TYPES}
type
  INSearchForMessagesIntentResponsePtr = ^INSearchForMessagesIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSearchForMessagesIntentResponseCode = NSInteger;
  INSearchForMessagesIntentResponseCodePtr = ^INSearchForMessagesIntentResponseCode;

const
  INSearchForMessagesIntentResponseCodeUnspecified = 0;
  INSearchForMessagesIntentResponseCodeReady = 1;
  INSearchForMessagesIntentResponseCodeInProgress = 2;
  INSearchForMessagesIntentResponseCodeSuccess = 3;
  INSearchForMessagesIntentResponseCodeFailure = 4;
  INSearchForMessagesIntentResponseCodeFailureRequiringAppLaunch = 5;
  INSearchForMessagesIntentResponseCodeFailureMessageServiceNotAvailable = 6;
{$endif}

{$ifdef CLASSES}

type
  INSearchForMessagesIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSearchForMessagesIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSearchForMessagesIntentResponseCode; message 'code';
    procedure setMessages(newValue: INMessage *ProtocolPtr); message 'setMessages:';
    function messages: INMessage *ProtocolPtr; message 'messages';
  end;
{$endif}

