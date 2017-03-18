{ Parsed from Foundation.framework NSProgress.h }

{ Types from NSProgress }
{$ifdef TYPES}



type
  NSProgressUnpublishingHandler = OpaqueCBlock;

type
  NSProgressPublishingHandler = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  NSProgressPtr = ^NSProgress;
  NSProgressReportingProtocolPtr = ^NSProgressReportingProtocol;
{$endif}

{$ifdef TYPES}
{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
{$endif}

{$endif}
{$ifdef TYPES}
{$endif}

{$ifdef CLASSES}

type
  NSProgress = objcclass external (NSObject)
  private
    _parent: NSProgress;
    _reserved4: cint64;
    _values: id;
    _resumingHandler: OpaqueCBlock;
    _cancellationHandler: OpaqueCBlock;
    _pausingHandler: OpaqueCBlock;
    _prioritizationHandler: OpaqueCBlock;
    _flags: cuint64;
    _userInfoProxy: id;
    _publisherID: NSString;
    _reserved5: id;
    _reserved6: NSInteger;
    _reserved7: NSInteger;
    _reserved8: NSInteger;
    _acknowledgementHandlersByLowercaseBundleID: NSMutableDictionary;
    _lastNotificationTimesByKey: NSMutableDictionary;
    _userInfoLastNotificationTimesByKey: NSMutableDictionary;
    _lock: NSLock;
    _children: NSMutableSet;
  public
    class function currentProgress: nullable NSProgressPtr; message 'currentProgress';
    class function progressWithTotalUnitCount (unitCount: cint64): NSProgress; message 'progressWithTotalUnitCount:';
    class function discreteProgressWithTotalUnitCount (unitCount: cint64): NSProgress; message 'discreteProgressWithTotalUnitCount:'; { available in 10_11, 9_0 }
    class function progressWithTotalUnitCount_parent_pendingUnitCount (unitCount: cint64; parent: NSProgress; portionOfParentTotalUnitCount: cint64): NSProgress; message 'progressWithTotalUnitCount:parent:pendingUnitCount:'; { available in 10_11, 9_0 }
    function initWithParent_userInfo (parentProgressOrNil: nullable NSProgressPtr; userInfoOrNil: nullable NSDictionaryPtr): instancetype; message 'initWithParent:userInfo:'; { NS_DESIGNATED_INITIALIZER }
    procedure becomeCurrentWithPendingUnitCount (unitCount: cint64); message 'becomeCurrentWithPendingUnitCount:';
    procedure resignCurrent; message 'resignCurrent';
    procedure addChild_withPendingUnitCount (child: NSProgress; inUnitCount: cint64); message 'addChild:withPendingUnitCount:'; { available in 10_11, 9_0 }
    procedure setTotalUnitCount(newValue: cint64); message 'setTotalUnitCount:';
    function totalUnitCount: cint64; message 'totalUnitCount';
    procedure setCompletedUnitCount(newValue: cint64); message 'setCompletedUnitCount:';
    function completedUnitCount: cint64; message 'completedUnitCount';
    procedure setLocalizedDescription(newValue: NSString); message 'setLocalizedDescription:';
    function localizedDescription: NSString; message 'localizedDescription';
    procedure setLocalizedAdditionalDescription(newValue: NSString); message 'setLocalizedAdditionalDescription:';
    function localizedAdditionalDescription: NSString; message 'localizedAdditionalDescription';
    procedure setCancellable(newValue: boolean); message 'setCancellable:';
    function isCancellable: boolean; message 'isCancellable';
    procedure setPausable(newValue: boolean); message 'setPausable:';
    function isPausable: boolean; message 'isPausable';
    function isCancelled: boolean; message 'isCancelled';
    function isPaused: boolean; message 'isPaused';
    procedure setCancellationHandler(newValue: OpaqueCBlock); message 'setCancellationHandler:';
    function cancellationHandler: OpaqueCBlock; message 'cancellationHandler';
    procedure setPausingHandler(newValue: OpaqueCBlock); message 'setPausingHandler:';
    function pausingHandler: OpaqueCBlock; message 'pausingHandler';
    procedure setResumingHandler(newValue: OpaqueCBlock); message 'setResumingHandler:';
    function resumingHandler: OpaqueCBlock; message 'resumingHandler';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    procedure setUserInfoObject_forKey (objectOrNil: nullable id; key: NSProgressUserInfoKey); message 'setUserInfoObject:forKey:';
    {$else}
    procedure setUserInfoObject_forKey (objectOrNil: nullable id; key: NSString); message 'setUserInfoObject:forKey:';
    {$endif}
    function isIndeterminate: boolean; message 'isIndeterminate';
    function fractionCompleted: double; message 'fractionCompleted';
    procedure cancel; message 'cancel';
    procedure pause; message 'pause';
    procedure resume; message 'resume'; { available in 10_11, 9_0 }
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function userInfo: NSDictionary; message 'userInfo';
    {$else}
    function userInfo_: NSDictionary; message 'userInfo';
    {$endif}
    procedure setKind(newValue: NSProgressKind); message 'setKind:';
    function kind: NSProgressKind; message 'kind';
    procedure publish; message 'publish'; { available in 10_9, NA }
    procedure unpublish; message 'unpublish'; { available in 10_9, NA }
    class function addSubscriberForFileURL_withPublishingHandler (url: NSURL; publishingHandler: NSProgressPublishingHandler): id; message 'addSubscriberForFileURL:withPublishingHandler:'; { available in 10_9, NA }
    class procedure removeSubscriber (subscriber: id); message 'removeSubscriber:'; { available in 10_9, NA }
    function isOld: boolean; message 'isOld';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSProgressReportingProtocol = objcprotocol external name 'NSProgressReporting' (NSObjectProtocol)
    function progress: NSProgress; message 'progress';
  end;
{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressEstimatedTimeRemainingKey: NSProgressUserInfoKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressEstimatedTimeRemainingKey: NSProgressKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressThroughputKey: NSProgressUserInfoKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressThroughputKey: NSProgressKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressKindFile: NSProgressKind { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileOperationKindKey: NSProgressUserInfoKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileOperationKindKey: NSProgressKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileOperationKindDownloading: NSProgressFileOperationKind { available in 10_9, 7_0 }; cvar; external;
  NSProgressFileOperationKindDecompressingAfterDownloading: NSProgressFileOperationKind { available in 10_9, 7_0 }; cvar; external;
  NSProgressFileOperationKindReceiving: NSProgressFileOperationKind { available in 10_9, 7_0 }; cvar; external;
  NSProgressFileOperationKindCopying: NSProgressFileOperationKind { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileURLKey: NSProgressUserInfoKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileURLKey: NSProgressKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileTotalCountKey: NSProgressUserInfoKey { available in 10_9, 7_0 }; cvar; external;
  NSProgressFileCompletedCountKey: NSProgressUserInfoKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileTotalCountKey: NSProgressKey { available in 10_9, 7_0 }; cvar; external;
  NSProgressFileCompletedCountKey: NSProgressKey { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileAnimationImageKey: NSProgressUserInfoKey { available in 10_9, NA }; cvar; external;
  NSProgressFileAnimationImageOriginalRectKey: NSProgressUserInfoKey { available in 10_9, NA }; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileAnimationImageKey: NSProgressKey { available in 10_9, NA }; cvar; external;
  NSProgressFileAnimationImageOriginalRectKey: NSProgressKey { available in 10_9, NA }; cvar; external;
{$endif}

{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileIconKey: NSProgressUserInfoKey { available in 10_9, NA }; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressFileIconKey: NSProgressKey { available in 10_9, NA }; cvar; external;
{$endif}

{$endif}
