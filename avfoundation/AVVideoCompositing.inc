{ Parsed from AVFoundation.framework AVVideoCompositing.h }

{$ifdef TYPES}
type
  AVVideoCompositionRenderContextPtr = ^AVVideoCompositionRenderContext;
  AVAsynchronousVideoCompositionRequestPtr = ^AVAsynchronousVideoCompositionRequest;
  AVAsynchronousCIImageFilteringRequestPtr = ^AVAsynchronousCIImageFilteringRequest;
  AVVideoCompositingProtocolPtr = ^AVVideoCompositingProtocol;
  AVVideoCompositionInstructionProtocolPtr = ^AVVideoCompositionInstructionProtocol;
{$endif}

{$ifdef TYPES}
type
  AVPixelAspectRatio = record
    horizontalSpacing: NSInteger;
    verticalSpacing: NSInteger;
  end;
type
  AVPixelAspectRatioPtr = ^AVPixelAspectRatio;
type
  AVEdgeWidths = record
    left: CGFloat;
    top: CGFloat;
    right: CGFloat;
    bottom: CGFloat;
  end;
type
  AVEdgeWidthsPtr = ^AVEdgeWidths;
{$endif}

{$ifdef CLASSES}

type
  AVVideoCompositionRenderContext = objcclass external (NSObject)
  private
    _internal: AVVideoCompositionRenderContextInternal;
  public
    function size: CGSize; message 'size';
    function renderTransform: CGAffineTransform; message 'renderTransform';
    function renderScale: single; message 'renderScale';
    function pixelAspectRatio: AVPixelAspectRatio; message 'pixelAspectRatio';
    function edgeWidths: AVEdgeWidths; message 'edgeWidths';
    function highQualityRendering: boolean; message 'highQualityRendering';
    function videoComposition: AVVideoComposition; message 'videoComposition';
    function newPixelBuffer CF_RETURNS_RETAINED: nullable CVPixelBufferRef; message 'newPixelBuffer CF_RETURNS_RETAINED';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVVideoCompositingProtocol = objcprotocol external name 'AVVideoCompositing' (NSObjectProtocol)
  required
    function sourcePixelBufferAttributes: NSDictionary; message 'sourcePixelBufferAttributes';
    function requiredPixelBufferAttributesForRenderContext: NSDictionary; message 'requiredPixelBufferAttributesForRenderContext';
    procedure renderContextChanged (newRenderContext: AVVideoCompositionRenderContext); message 'renderContextChanged:';
    procedure startVideoCompositionRequest (asyncVideoCompositionRequest: AVAsynchronousVideoCompositionRequest); message 'startVideoCompositionRequest:';
  optional
    procedure cancelAllPendingVideoCompositionRequests; message 'cancelAllPendingVideoCompositionRequests';
    function supportsWideColorSourceFrames: boolean; message 'supportsWideColorSourceFrames';
  end;
{$endif}

{$ifdef CLASSES}

type
  AVAsynchronousVideoCompositionRequest = objcclass external (NSObject, NSCopyingProtocol)
  private
    _internal: AVAsynchronousVideoCompositionRequestInternal;
  public
    function renderContext: AVVideoCompositionRenderContext; message 'renderContext';
    function compositionTime: CMTime; message 'compositionTime';
    function sourceTrackIDs: NSNumber *ProtocolPtr; message 'sourceTrackIDs';
    function videoCompositionInstruction: AVVideoCompositionInstructionProtocol; message 'videoCompositionInstruction';
    function sourceFrameByTrackID (trackID: CMPersistentTrackID): nullable CVPixelBufferRef; message 'sourceFrameByTrackID:'; { CF_RETURNS_NOT_RETAINED }
    procedure finishWithComposedVideoFrame (composedVideoFrame: CVPixelBufferRef); message 'finishWithComposedVideoFrame:';
    procedure finishWithError (error: NSError); message 'finishWithError:';
    procedure finishCancelledRequest; message 'finishCancelledRequest';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVAsynchronousCIImageFilteringRequest = objcclass external (NSObject, NSCopyingProtocol)
  private
    _internal: AVAsynchronousCIImageFilteringRequestInternal;
  public
    function renderSize: CGSize; message 'renderSize';
    function compositionTime: CMTime; message 'compositionTime';
    function sourceImage: CIImage; message 'sourceImage';
    procedure finishWithImage_context (filteredImage: CIImage; context: nullable CIContextPtr); message 'finishWithImage:context:';
    procedure finishWithError (error: NSError); message 'finishWithError:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVVideoCompositionInstructionProtocol = objcprotocol external name 'AVVideoCompositionInstruction' (NSObjectProtocol)
  required
    function timeRange: CMTimeRange; message 'timeRange';
    function enablePostProcessing: boolean; message 'enablePostProcessing';
    function containsTweening: boolean; message 'containsTweening';
    function requiredSourceTrackIDs: NSValue *ProtocolPtr; message 'requiredSourceTrackIDs';
    function passthroughTrackID: CMPersistentTrackID; message 'passthroughTrackID';
  end;
{$endif}

