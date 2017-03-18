{ Parsed from MediaPlayer.framework MPNowPlayingInfoLanguageOption.h }

{$ifdef TYPES}
type
  MPNowPlayingInfoLanguageOptionPtr = ^MPNowPlayingInfoLanguageOption;
  MPNowPlayingInfoLanguageOptionGroupPtr = ^MPNowPlayingInfoLanguageOptionGroup;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPLanguageOptionCharacteristicIsMainProgramContent: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPLanguageOptionCharacteristicIsAuxiliaryContent: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPLanguageOptionCharacteristicContainsOnlyForcedSubtitles: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPLanguageOptionCharacteristicTranscribesSpokenDialog: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPLanguageOptionCharacteristicDescribesMusicAndSound: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPLanguageOptionCharacteristicEasyToRead: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPLanguageOptionCharacteristicDescribesVideo: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPLanguageOptionCharacteristicLanguageTranslation: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPLanguageOptionCharacteristicDubbedTranslation: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPLanguageOptionCharacteristicVoiceOverTranslation: NSString { available in 10_12_2, 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MPNowPlayingInfoLanguageOptionType = NSUInteger;
  MPNowPlayingInfoLanguageOptionTypePtr = ^MPNowPlayingInfoLanguageOptionType;

const
  MPNowPlayingInfoLanguageOptionTypeAudible = 0;
  MPNowPlayingInfoLanguageOptionTypeLegible = 1;
{$endif}

{$ifdef CLASSES}

type
  MPNowPlayingInfoLanguageOption = objcclass external (NSObject)
  public
    function initWithType_languageTag_characteristics_displayName_identifier (languageOptionType: MPNowPlayingInfoLanguageOptionType; languageTag: NSString; languageOptionCharacteristics: nullable NSString *ProtocolPtr; displayName: NSString; identifier: NSString): instancetype; message 'initWithType:languageTag:characteristics:displayName:identifier:';
    function isAutomaticLegibleLanguageOption: boolean; message 'isAutomaticLegibleLanguageOption';
    function isAutomaticAudibleLanguageOption: boolean; message 'isAutomaticAudibleLanguageOption';
    function languageOptionType: MPNowPlayingInfoLanguageOptionType; message 'languageOptionType';
    function languageTag: NSString; message 'languageTag';
    function languageOptionCharacteristics: NSString *ProtocolPtr; message 'languageOptionCharacteristics';
    function displayName: NSString; message 'displayName';
    function identifier: NSString; message 'identifier';
  end;

type
  MPNowPlayingInfoLanguageOptionGroup = objcclass external (NSObject)
  public
    function initWithLanguageOptions_defaultLanguageOption_allowEmptySelection (languageOptions: MPNowPlayingInfoLanguageOption *ProtocolPtr; defaultLanguageOption: nullable MPNowPlayingInfoLanguageOptionPtr; allowEmptySelection: boolean): instancetype; message 'initWithLanguageOptions:defaultLanguageOption:allowEmptySelection:';
    function languageOptions: MPNowPlayingInfoLanguageOption *ProtocolPtr; message 'languageOptions';
    function defaultLanguageOption: MPNowPlayingInfoLanguageOption; message 'defaultLanguageOption';
    function allowEmptySelection: boolean; message 'allowEmptySelection';
  end;
{$endif}

