{ Parsed from Intents.framework INSetRadioStationIntent.h }

{$ifdef TYPES}
type
  INSetRadioStationIntentPtr = ^INSetRadioStationIntent;
  INSetRadioStationIntentHandlingProtocolPtr = ^INSetRadioStationIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSetRadioStationIntent = objcclass external (INIntent)
  public
    function initWithRadioType_frequency_stationName_channel_presetNumber (radioType: INRadioType; frequency: nullable NSNumberPtr; stationName: nullable NSStringPtr; channel: nullable NSStringPtr; presetNumber: nullable NSNumberPtr): instancetype; message 'initWithRadioType:frequency:stationName:channel:presetNumber:'; { NS_DESIGNATED_INITIALIZER }
    function radioType: INRadioType; message 'radioType';
    function NS_REFINED_FOR_SWIFT_: NSNumber *frequency; message 'NS_REFINED_FOR_SWIFT';
    function stationName: NSString; message 'stationName';
    function channel: NSString; message 'channel';
    function NS_REFINED_FOR_SWIFT_: NSNumber *presetNumber; message 'NS_REFINED_FOR_SWIFT';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSetRadioStationIntentHandlingProtocol = objcprotocol external name 'INSetRadioStationIntentHandling' (NSObjectProtocol)
  required
    procedure handleSetRadioStation_completion_setRadioStation (intent: INSetRadioStationIntent; completion: OpaqueCBlock; completion3: id); message 'handleSetRadioStation:completion:setRadioStation:';
  optional
    procedure confirmSetRadioStation_completion_setRadioStation (intent: INSetRadioStationIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSetRadioStation:completion:setRadioStation:';
    procedure resolveRadioTypeForSetRadioStation_withCompletion_forSetRadioStation (intent: INSetRadioStationIntent; completion: OpaqueCBlock; with_: id); message 'resolveRadioTypeForSetRadioStation:withCompletion:forSetRadioStation:';
    procedure resolveFrequencyForSetRadioStation_withCompletion_forSetRadioStation (intent: INSetRadioStationIntent; completion: OpaqueCBlock; with_: id); message 'resolveFrequencyForSetRadioStation:withCompletion:forSetRadioStation:';
    procedure resolveStationNameForSetRadioStation_withCompletion_forSetRadioStation (intent: INSetRadioStationIntent; completion: OpaqueCBlock; with_: id); message 'resolveStationNameForSetRadioStation:withCompletion:forSetRadioStation:';
    procedure resolveChannelForSetRadioStation_withCompletion_forSetRadioStation (intent: INSetRadioStationIntent; completion: OpaqueCBlock; with_: id); message 'resolveChannelForSetRadioStation:withCompletion:forSetRadioStation:';
    procedure resolvePresetNumberForSetRadioStation_withCompletion_forSetRadioStation (intent: INSetRadioStationIntent; completion: OpaqueCBlock; with_: id); message 'resolvePresetNumberForSetRadioStation:withCompletion:forSetRadioStation:';
  end;
{$endif}

