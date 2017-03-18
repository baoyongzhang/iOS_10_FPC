{ Parsed from AudioToolbox.framework AudioFormat.h }

{$ifndef AudioToolbox_AudioFormat_h}

{$ifdef TYPES}
type
  AudioFormatPropertyID = UInt32;
  AudioFormatPropertyIDPtr = ^AudioFormatPropertyID;
  AudioPanningMode = UInt32;
  AudioPanningModePtr = ^AudioPanningMode;

const
  kPanningMode_SoundField = 3;
  kPanningMode_VectorBasedPanning = 4;

type
  AudioPanningInfo = record
    mPanningMode: AudioPanningMode;
    mCoordinateFlags: UInt32;
    mCoordinates:array[0..2] of Float32;
    mGainScale: Float32;
    mOutputChannelMap: AudioChannelLayoutPtr;
  end;
type
  AudioPanningInfoPtr = ^AudioPanningInfo;

type
  AudioBalanceFadeType = UInt32;
  AudioBalanceFadeTypePtr = ^AudioBalanceFadeType;

const
  kAudioBalanceFadeType_MaxUnityGain = 0;
  kAudioBalanceFadeType_EqualPower = 1;

type
  AudioBalanceFade = record
    mLeftRightBalance: Float32;
    mBackFrontFade: Float32;
    mType: AudioBalanceFadeType;
    mChannelLayout: AudioChannelLayoutPtr;
  end;
type
  AudioBalanceFadePtr = ^AudioBalanceFade;
type
  AudioFormatInfo = record
    mASBD: AudioStreamBasicDescription;
    mMagicCookie: pointer;
    mMagicCookieSize: UInt32;
  end;
type
  AudioFormatInfoPtr = ^AudioFormatInfo;
type
  ExtendedAudioFormatInfo = record
    mASBD: AudioStreamBasicDescription;
    mMagicCookie: pointer;
    mMagicCookieSize: UInt32;
    mClassDescription: AudioClassDescription;
  end;
type
  ExtendedAudioFormatInfoPtr = ^ExtendedAudioFormatInfo;
type
  AudioFormatListItem = record
    mASBD: AudioStreamBasicDescription;
    mChannelLayoutTag: AudioChannelLayoutTag;
  end;
type
  AudioFormatListItemPtr = ^AudioFormatListItem;
{$endif}

{$ifdef FUNCTIONS}
function AudioFormatGetPropertyInfo(inPropertyID: AudioFormatPropertyID; inSpecifierSize: UInt32; inSpecifier: void* __nullable; outPropertyDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
function AudioFormatGetProperty(inPropertyID: AudioFormatPropertyID; inSpecifierSize: UInt32; inSpecifier: void* __nullable; ioPropertyDataSize: UInt32* __nullable; outPropertyData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
{$endif}

{$endif}
