{ Parsed from ReplayKit.framework RPBroadcastExtension.h }

{$ifdef TYPES}
type
  RPBroadcastHandlerPtr = ^RPBroadcastHandler;
  RPBroadcastMP4ClipHandlerPtr = ^RPBroadcastMP4ClipHandler;
  RPBroadcastSampleHandlerPtr = ^RPBroadcastSampleHandler;
{$endif}

{$ifdef CLASSES}

type
  RPBroadcastExtension = objccategory external (NSExtensionContext)
    procedure loadBroadcastingApplicationInfoWithCompletion (handler: OpaqueCBlock); message 'loadBroadcastingApplicationInfoWithCompletion:';
    procedure completeRequestWithBroadcastURL_broadcastConfiguration_setupInfo (broadcastURL: NSURL; broadcastConfiguration: RPBroadcastConfiguration; setupInfo: nullable NSDictionary *>Ptr); message 'completeRequestWithBroadcastURL:broadcastConfiguration:setupInfo:';
  end;


type
  RPBroadcastHandler = objcclass external (NSObject, NSExtensionRequestHandlingProtocol)
  public
    procedure updateServiceInfo (serviceInfo: NSDictionary *>Ptr); message 'updateServiceInfo:';

    { Adopted protocols }
    procedure beginRequestWithExtensionContext (context: NSExtensionContext); message 'beginRequestWithExtensionContext:';
  end;

type
  RPBroadcastMP4ClipHandler = objcclass external (RPBroadcastHandler)
  public
    procedure processMP4ClipWithURL_setupInfo_finished (mp4ClipURL: nullable NSURLPtr; setupInfo: nullable NSDictionaryPtr; finished: boolean); message 'processMP4ClipWithURL:setupInfo:finished:';
    procedure finishedProcessingMP4ClipWithUpdatedBroadcastConfiguration_error (broadcastConfiguration: nullable RPBroadcastConfigurationPtr; error: nullable NSErrorPtr); message 'finishedProcessingMP4ClipWithUpdatedBroadcastConfiguration:error:';
  end;
{$endif}

{$ifdef TYPES}
type
  RPSampleBufferType = NSInteger;
  RPSampleBufferTypePtr = ^RPSampleBufferType;

const
  RPSampleBufferTypeVideo = 1;
  RPSampleBufferTypeAudioApp = 2;
  RPSampleBufferTypeAudioMic = 3;
{$endif}

{$ifdef CLASSES}

type
  RPBroadcastSampleHandler = objcclass external (RPBroadcastHandler)
  public
    procedure broadcastStartedWithSetupInfo (setupInfo: nullable NSDictionaryPtr); message 'broadcastStartedWithSetupInfo:';
    procedure broadcastPaused; message 'broadcastPaused';
    procedure broadcastResumed; message 'broadcastResumed';
    procedure broadcastFinished; message 'broadcastFinished';
    procedure processSampleBuffer_withType (sampleBuffer: CMSampleBufferRef; sampleBufferType: RPSampleBufferType); message 'processSampleBuffer:withType:';
    procedure finishBroadcastWithError (error: NSError); message 'finishBroadcastWithError:';
  end;
{$endif}

