{ Parsed from MediaPlayer.framework MPRemoteCommand.h }

{$ifdef TYPES}
type
  MPRemoteCommandPtr = ^MPRemoteCommand;
  MPSkipIntervalCommandPtr = ^MPSkipIntervalCommand;
  MPFeedbackCommandPtr = ^MPFeedbackCommand;
  MPRatingCommandPtr = ^MPRatingCommand;
  MPChangePlaybackRateCommandPtr = ^MPChangePlaybackRateCommand;
  MPChangePlaybackPositionCommandPtr = ^MPChangePlaybackPositionCommand;
  MPChangeShuffleModeCommandPtr = ^MPChangeShuffleModeCommand;
  MPChangeRepeatModeCommandPtr = ^MPChangeRepeatModeCommand;
{$endif}

{$ifdef TYPES}
type
  MPRemoteCommandHandlerStatus = NSInteger;
  MPRemoteCommandHandlerStatusPtr = ^MPRemoteCommandHandlerStatus;

const
  MPRemoteCommandHandlerStatusSuccess = 0;
  MPRemoteCommandHandlerStatusNoSuchContent = 100;
  MPRemoteCommandHandlerStatusNoActionableNowPlayingItem = 110 { available in 10_12_2, 9_1 };
  MPRemoteCommandHandlerStatusCommandFailed = 200;
{$endif}

{$ifdef CLASSES}

type
  MPRemoteCommand = objcclass external (NSObject)
  public
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure addTarget_action (target: id; action: SEL); message 'addTarget:action:';
    procedure removeTarget_action (target: id; action: nullable SEL); message 'removeTarget:action:';
    procedure removeTarget (target: nullable id); message 'removeTarget:';
    function addTargetWithHandler (handler: OpaqueCBlock): id; message 'addTargetWithHandler:';
    function init: instancetype; message 'init';
  end;

type
  MPSkipIntervalCommand = objcclass external (MPRemoteCommand)
  public
    procedure setPreferredIntervals(newValue: NSNumber *ProtocolPtr); message 'setPreferredIntervals:';
    function preferredIntervals: NSNumber *ProtocolPtr; message 'preferredIntervals';
  end;

type
  MPFeedbackCommand = objcclass external (MPRemoteCommand)
  public
    procedure setActive(newValue: boolean); message 'setActive:';
    function isActive: boolean; message 'isActive';
    procedure setLocalizedTitle(newValue: NSString); message 'setLocalizedTitle:';
    function localizedTitle: NSString; message 'localizedTitle';
    procedure setLocalizedShortTitle(newValue: NSString); message 'setLocalizedShortTitle:';
    function localizedShortTitle: NSString; message 'localizedShortTitle';
  end;

type
  MPRatingCommand = objcclass external (MPRemoteCommand)
  public
    procedure setMinimumRating(newValue: single); message 'setMinimumRating:';
    function minimumRating: single; message 'minimumRating';
    procedure setMaximumRating(newValue: single); message 'setMaximumRating:';
    function maximumRating: single; message 'maximumRating';
  end;

type
  MPChangePlaybackRateCommand = objcclass external (MPRemoteCommand)
  public
    procedure setSupportedPlaybackRates(newValue: NSNumber *ProtocolPtr); message 'setSupportedPlaybackRates:';
    function supportedPlaybackRates: NSNumber *ProtocolPtr; message 'supportedPlaybackRates';
  end;

type
  MPChangePlaybackPositionCommand = objcclass external (MPRemoteCommand)
  end;

type
  MPChangeShuffleModeCommand = objcclass external (MPRemoteCommand)
  public
    procedure setCurrentShuffleType(newValue: MPShuffleType); message 'setCurrentShuffleType:';
    function currentShuffleType: MPShuffleType; message 'currentShuffleType';
  end;

type
  MPChangeRepeatModeCommand = objcclass external (MPRemoteCommand)
  public
    procedure setCurrentRepeatType(newValue: MPRepeatType); message 'setCurrentRepeatType:';
    function currentRepeatType: MPRepeatType; message 'currentRepeatType';
  end;
{$endif}

