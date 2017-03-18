{ Parsed from MediaPlayer.framework MPRemoteControlTypes.h }
{$ifdef TYPES}
type
  MPShuffleType = NSInteger;
  MPShuffleTypePtr = ^MPShuffleType;

const
  MPShuffleTypeOff = 0;
  MPShuffleTypeItems = 1;
  MPShuffleTypeCollections = 2;

type
  MPRepeatType = NSInteger;
  MPRepeatTypePtr = ^MPRepeatType;

const
  MPRepeatTypeOff = 0;
  MPRepeatTypeOne = 1;
  MPRepeatTypeAll = 2;

type
  MPChangeLanguageOptionSetting = NSInteger;
  MPChangeLanguageOptionSettingPtr = ^MPChangeLanguageOptionSetting;

const
  MPChangeLanguageOptionSettingNone = 0;
  MPChangeLanguageOptionSettingNowPlayingItemOnly = 1;
  MPChangeLanguageOptionSettingPermanent = 2;
{$endif}

