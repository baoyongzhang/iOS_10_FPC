{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesCallKit;
interface

type
  CXAction = objcclass external;
  CXAnswerCallAction = objcclass external;
  CXCall = objcclass external;
  CXCallAction = objcclass external;
  CXCallController = objcclass external;
  CXCallDirectoryExtensionContext = objcclass external;
  CXCallDirectoryManager = objcclass external;
  CXCallDirectoryProvider = objcclass external;
  CXCallObserver = objcclass external;
  CXCallUpdate = objcclass external;
  CXEndCallAction = objcclass external;
  CXHandle = objcclass external;
  CXPlayDTMFCallAction = objcclass external;
  CXProvider = objcclass external;
  CXProviderConfiguration = objcclass external;
  CXSetGroupCallAction = objcclass external;
  CXSetHeldCallAction = objcclass external;
  CXSetMutedCallAction = objcclass external;
  CXStartCallAction = objcclass external;
  CXTransaction = objcclass external;
  CXCallDirectoryExtensionContextDelegateProtocol = objcprotocol external name 'CXCallDirectoryExtensionContextDelegate';
  CXCallObserverDelegateProtocol = objcprotocol external name 'CXCallObserverDelegate';
  CXProviderDelegateProtocol = objcprotocol external name 'CXProviderDelegate';

type
  AVAudioSession = objcclass external;

implementation
end.
