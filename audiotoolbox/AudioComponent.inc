{ Parsed from AudioToolbox.framework AudioComponent.h }

{$ifndef AudioUnit_AudioComponent_h}

{$ifdef TYPES}
type
  AudioComponentFlags = UInt32;
  AudioComponentFlagsPtr = ^AudioComponentFlags;

const
  kAudioComponentFlag_Unsearchable = 1 { available in 10_7, 5_0 };
  kAudioComponentFlag_SandboxSafe = 2 { available in 10_8, 6_0 };
  kAudioComponentFlag_IsV3AudioUnit = 4 { available in 10_11, 9_0 };
  kAudioComponentFlag_RequiresAsyncInstantiation = 8 { available in 10_11, 9_0 };
  kAudioComponentFlag_CanLoadInProcess = $10 { available in 10_11, 9_0 };

type
  AudioComponentInstantiationOptions = UInt32;
  AudioComponentInstantiationOptionsPtr = ^AudioComponentInstantiationOptions;

const
  kAudioComponentInstantiation_LoadOutOfProcess = 1 { available in 10_11,  9_0 };
  kAudioComponentInstantiation_LoadInProcess = 2 { available in 10_11,  NA };

type
  AudioComponentDescription = record
    componentType: OSType;
    componentSubType: OSType;
    componentManufacturer: OSType;
    componentFlags: UInt32;
    componentFlagsMask: UInt32;
  end;
type
  AudioComponentDescriptionPtr = ^AudioComponentDescription;

type
  AudioComponent = OpaqueType;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AudioComponentInstance = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  AudioComponentInstance = OpaqueType;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioComponentMethod = function (self_: pointer): OSStatus; varargs; cdecl;

type
  AudioComponentPlugInInterface = record
    Open: function (self_: pointer; mInstance: AudioComponentInstance): OSStatus; cdecl;
    Close: function (self_: pointer): OSStatus; cdecl;
    selector): AudioComponentMethod __nullable ( *__nonnull Lookup)(SInt16;
    reserved: void *__nullable;
  end;
type
  AudioComponentPlugInInterfacePtr = ^AudioComponentPlugInInterface;

type
  AudioComponentFactoryFunction = function (inDesc: AudioComponentDescriptionPtr): AudioComponentPlugInInterface * __nullable; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioComponentFindNext(inComponent: AudioComponent __nullable; inDesc: AudioComponentDescriptionPtr): AudioComponent __nullable; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentCount(inDesc: AudioComponentDescriptionPtr): UInt32; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentCopyName(inComponent: AudioComponent; var outName: CFStringRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentGetDescription(inComponent: AudioComponent; var outDesc: AudioComponentDescription): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentGetVersion(inComponent: AudioComponent; var outVersion: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
{$endif}

{$if (defined(__OBJC__)) and not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioComponentGetIcon(comp: AudioComponent): NSImage * __nullable; cdecl; external; { available starting in __MAC_10_11, __IPHONE_NA }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioComponentInstanceNew(inComponent: AudioComponent; var outInstance: AudioComponentInstance __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentInstanceDispose(inInstance: AudioComponentInstance): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentInstanceGetComponent(inInstance: AudioComponentInstance): AudioComponent; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentInstanceCanDo(inInstance: AudioComponentInstance; inSelectorID: SInt16): Boolean; cdecl; external; { available starting in __MAC_10_6,__IPHONE_3_0 }
function AudioComponentRegister(inDesc: AudioComponentDescriptionPtr; inName: CFStringRef; inVersion: UInt32; inFactory: AudioComponentFactoryFunction): AudioComponent; cdecl; external; { available starting in __MAC_10_7,__IPHONE_5_0 }
function AudioComponentCopyConfigurationInfo(inComponent: AudioComponent; outConfigurationInfo: CFDictionaryRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_NA }
{$endif}

{$ifdef TYPES}
type
  AudioComponentValidationResult = UInt32;
  AudioComponentValidationResultPtr = ^AudioComponentValidationResult;

const
  kAudioComponentValidationResult_Unknown = 0;
  kAudioComponentValidationResult_Passed = 1;
  kAudioComponentValidationResult_Failed = 2;
  kAudioComponentValidationResult_TimedOut = 3;
  kAudioComponentValidationResult_UnauthorizedError_Open = 4;
  kAudioComponentValidationResult_UnauthorizedError_Init = 5;

const
  kAudioComponentConfigurationInfo_ValidationResult = 'ValidationResult';
{$endif}

{$ifdef FUNCTIONS}
function AudioComponentValidate(inComponent: AudioComponent; inValidationParameters: CFDictionaryRef __nullable; outValidationResult: AudioComponentValidationResultPtr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_NA }
{$endif}

{$ifdef TYPES}
const
  kAudioComponentValidationParameter_TimeOut = 'TimeOut';
  kAudioComponentValidationParameter_ForceValidation = 'ForceValidation';
{$endif}

{$endif}
