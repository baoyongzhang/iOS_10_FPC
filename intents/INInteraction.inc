{ Parsed from Intents.framework INInteraction.h }

{$ifdef TYPES}
type
  INInteractionPtr = ^INInteraction;
{$endif}

{$ifdef TYPES}
type
  INIntentHandlingStatus = NSInteger;
  INIntentHandlingStatusPtr = ^INIntentHandlingStatus;

const
  INIntentHandlingStatusUnspecified = 0;
  INIntentHandlingStatusReady = 1;
  INIntentHandlingStatusInProgress = 2;
  INIntentHandlingStatusSuccess = 3;
  INIntentHandlingStatusFailure = 4;
  INIntentHandlingStatusDeferredToApplication = 5;

type
  INInteractionDirection = NSInteger;
  INInteractionDirectionPtr = ^INInteractionDirection;

const
  INInteractionDirectionUnspecified = 0;
  INInteractionDirectionOutgoing = 1;
  INInteractionDirectionIncoming = 2;
{$endif}

{$ifdef CLASSES}

type
  INInteraction = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithIntent_response (intent: INIntent; response: nullable INIntentResponsePtr): instancetype; message 'initWithIntent:response:'; { NS_DESIGNATED_INITIALIZER }
    procedure donateInteractionWithCompletion (completion: void(^_Nullable)(NSError * _Nullable error)); message 'donateInteractionWithCompletion:';
    class procedure deleteAllInteractionsWithCompletion (completion: void (^_Nullable)(NSError * _Nullable error)); message 'deleteAllInteractionsWithCompletion:';
    class procedure deleteInteractionsWithIdentifiers_completion_with (identifiers: nonnull NSString *ProtocolPtr; completion: void(^_Nullable)(NSError * _Nullable error); completion3: id); message 'deleteInteractionsWithIdentifiers:completion:with:';
    class procedure deleteInteractionsWithGroupIdentifier_completion_with (groupIdentifier: nonnull NSStringPtr; completion: void(^_Nullable)(NSError * _Nullable error); completion3: id); message 'deleteInteractionsWithGroupIdentifier:completion:with:';
    function intent: INIntent; message 'intent';
    function intentResponse: INIntentResponse; message 'intentResponse';
    function intentHandlingStatus: INIntentHandlingStatus; message 'intentHandlingStatus';
    procedure setDirection(newValue: INInteractionDirection); message 'setDirection:';
    function direction: INInteractionDirection; message 'direction';
    procedure setDateInterval(newValue: NSDateInterval); message 'setDateInterval:';
    function dateInterval: NSDateInterval; message 'dateInterval';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setGroupIdentifier(newValue: NSString); message 'setGroupIdentifier:';
    function groupIdentifier: NSString; message 'groupIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

