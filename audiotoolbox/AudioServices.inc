{ Parsed from AudioToolbox.framework AudioServices.h }

{$ifndef AudioToolbox_AudioServices_h}

{$ifdef TYPES}
type
  SystemSoundID = UInt32;
  SystemSoundIDPtr = ^SystemSoundID;
  AudioServicesPropertyID = UInt32;
  AudioServicesPropertyIDPtr = ^AudioServicesPropertyID;
  AudioServicesSystemSoundCompletionProc = procedure (ssID: SystemSoundID; clientData: void* __nullable); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioServicesCreateSystemSoundID(inFileURL: CFURLRef; outSystemSoundID: SystemSoundIDPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesDisposeSystemSoundID(inSystemSoundID: SystemSoundID): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesGetPropertyInfo(inPropertyID: AudioServicesPropertyID; inSpecifierSize: UInt32; inSpecifier: void* __nullable; outPropertyDataSize: UInt32* __nullable; outWritable: Boolean* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesGetProperty(inPropertyID: AudioServicesPropertyID; inSpecifierSize: UInt32; inSpecifier: void* __nullable; ioPropertyDataSize: UInt32Ptr; outPropertyData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesSetProperty(inPropertyID: AudioServicesPropertyID; inSpecifierSize: UInt32; inSpecifier: void* __nullable; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
procedure AudioServicesPlayAlertSound(inSystemSoundID: SystemSoundID); cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
procedure AudioServicesPlaySystemSound(inSystemSoundID: SystemSoundID); cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioServicesAddSystemSoundCompletion(inSystemSoundID: SystemSoundID; inRunLoop: CFRunLoopRef __nullable; inRunLoopMode: CFStringRef __nullable; inCompletionRoutine: AudioServicesSystemSoundCompletionProc; inClientData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
procedure AudioServicesRemoveSystemSoundCompletion(inSystemSoundID: SystemSoundID); cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$endif}
