{ Parsed from CoreMedia.framework CMSync.h }

{$ifndef __CMSYNC__}

{$ifdef TYPES}
type
  CMClockRef = OpaqueType;
  CMTimebaseRef = OpaqueType;
  CMClockOrTimebaseRef = CM_BRIDGED_TYPE(id) CFTypeRef;
  CMClockOrTimebaseRefPtr = ^CMClockOrTimebaseRef;
{$endif}

{$ifdef FUNCTIONS}
function CMClockGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMClockGetHostTimeClock: CMClockRef CM_NONNULL; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMClockConvertHostTimeToSystemUnits(hostTime: CMTime): cuint64; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMClockMakeHostTimeFromSystemUnits(hostTime: cuint64): CMTime; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMClockGetTime(clock: CMClockRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMClockGetAnchorTime(clock: CMClockRef CM_NONNULL; outClockTime: CMTime* CM_NONNULL; outReferenceClockTime: CMTime* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMClockMightDrift(clock: CMClockRef CM_NONNULL; otherClock: CMClockRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
procedure CMClockInvalidate(clock: CMClockRef CM_NONNULL); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseCreateWithMasterClock(allocator: CFAllocatorRef CM_NULLABLE; masterClock: CMClockRef CM_NONNULL; timebaseOut: CM_RETURNS_RETAINED_PARAMETER CMTimebaseRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseCreateWithMasterTimebase(allocator: CFAllocatorRef CM_NULLABLE; masterTimebase: CMTimebaseRef CM_NONNULL; timebaseOut: CM_RETURNS_RETAINED_PARAMETER CMTimebaseRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseCopyMasterTimebase(timebase: CMTimebaseRef CM_NONNULL): CMTimebaseRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
function CMTimebaseCopyMasterClock(timebase: CMTimebaseRef CM_NONNULL): CMClockRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
function CMTimebaseCopyMaster(timebase: CMTimebaseRef CM_NONNULL): CMClockOrTimebaseRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
function CMTimebaseCopyUltimateMasterClock(timebase: CMTimebaseRef CM_NONNULL): CMClockRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
function CMTimebaseGetMasterTimebase(timebase: CMTimebaseRef CM_NONNULL): CMTimebaseRef CM_NULLABLE; cdecl; external; deprecated 'in __MAC_10_8, __MAC_10_11, __IPHONE_6_0, __IPHONE_9_0';
function CMTimebaseGetMasterClock(timebase: CMTimebaseRef CM_NONNULL): CMClockRef CM_NULLABLE; cdecl; external; deprecated 'in __MAC_10_8, __MAC_10_11, __IPHONE_6_0, __IPHONE_9_0';
function CMTimebaseGetMaster(timebase: CMTimebaseRef CM_NONNULL): CMClockOrTimebaseRef CM_NULLABLE; cdecl; external; deprecated 'in __MAC_10_8, __MAC_10_11, __IPHONE_6_0, __IPHONE_9_0';
function CMTimebaseGetUltimateMasterClock(timebase: CMTimebaseRef CM_NONNULL): CMClockRef CM_NULLABLE; cdecl; external; deprecated 'in __MAC_10_8, __MAC_10_11, __IPHONE_6_0, __IPHONE_9_0';
function CMTimebaseGetTime(timebase: CMTimebaseRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseGetTimeWithTimeScale(timebase: CMTimebaseRef CM_NONNULL; timescale: CMTimeScale; method: CMTimeRoundingMethod): CMTime; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseSetTime(timebase: CMTimebaseRef CM_NONNULL; time: CMTime): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseSetAnchorTime(timebase: CMTimebaseRef CM_NONNULL; timebaseTime: CMTime; immediateMasterTime: CMTime): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseGetRate(timebase: CMTimebaseRef CM_NONNULL): Float64; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseGetTimeAndRate(timebase: CMTimebaseRef CM_NONNULL; outTime: CMTime* CM_NONNULL; outRate: Float64* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseSetRate(timebase: CMTimebaseRef CM_NONNULL; rate: Float64): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseSetRateAndAnchorTime(timebase: CMTimebaseRef CM_NONNULL; rate: Float64; timebaseTime: CMTime; immediateMasterTime: CMTime): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseGetEffectiveRate(timebase: CMTimebaseRef CM_NONNULL): Float64; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseAddTimer(timebase: CMTimebaseRef CM_NONNULL; timer: CFRunLoopTimerRef CM_NONNULL; runloop: CFRunLoopRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseRemoveTimer(timebase: CMTimebaseRef CM_NONNULL; timer: CFRunLoopTimerRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseSetTimerNextFireTime(timebase: CMTimebaseRef CM_NONNULL; timer: CFRunLoopTimerRef CM_NONNULL; fireTime: CMTime; flags: cuint32): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseSetTimerToFireImmediately(timebase: CMTimebaseRef CM_NONNULL; timer: CFRunLoopTimerRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseAddTimerDispatchSource(timebase: CMTimebaseRef CM_NONNULL; timerSource: dispatch_source_t CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseRemoveTimerDispatchSource(timebase: CMTimebaseRef CM_NONNULL; timerSource: dispatch_source_t CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseSetTimerDispatchSourceNextFireTime(timebase: CMTimebaseRef CM_NONNULL; timerSource: dispatch_source_t CM_NONNULL; fireTime: CMTime; flags: cuint32): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseSetTimerDispatchSourceToFireImmediately(timebase: CMTimebaseRef CM_NONNULL; timerSource: dispatch_source_t CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMSyncGetRelativeRate(ofClockOrTimebase: CMClockOrTimebaseRef CM_NONNULL; relativeToClockOrTimebase: CMClockOrTimebaseRef CM_NONNULL): Float64; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMSyncGetRelativeRateAndAnchorTime(ofClockOrTimebase: CMClockOrTimebaseRef CM_NONNULL; relativeToClockOrTimebase: CMClockOrTimebaseRef CM_NONNULL; outRelativeRate: Float64* CM_NONNULL; outOfClockOrTimebaseAnchorTime: CMTime* CM_NONNULL; outRelativeToClockOrTimebaseAnchorTime: CMTime* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMSyncConvertTime(time: CMTime; fromClockOrTimebase: CMClockOrTimebaseRef CM_NONNULL; toClockOrTimebase: CMClockOrTimebaseRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMSyncMightDrift(clockOrTimebase1: CMClockOrTimebaseRef CM_NONNULL; clockOrTimebase2: CMClockOrTimebaseRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMSyncGetTime(clockOrTimebase: CMClockOrTimebaseRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
function CMTimebaseNotificationBarrier(timebase: CMTimebaseRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimebaseNotification_EffectiveRateChanged: CFStringRef { available starting in __MAC_10_8, __IPHONE_6_0 }; cvar; external;
  kCMTimebaseNotification_TimeJumped: CFStringRef { available starting in __MAC_10_8, __IPHONE_6_0 }; cvar; external;
  kCMTimebaseNotificationKey_EventTime: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
{$endif}

{$endif}
