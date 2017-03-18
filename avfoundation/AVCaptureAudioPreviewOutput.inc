{ Parsed from AVFoundation.framework AVCaptureAudioPreviewOutput.h }

{$ifdef TYPES}
type
  AVCaptureAudioPreviewOutputPtr = ^AVCaptureAudioPreviewOutput;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  AVCaptureAudioPreviewOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureAudioPreviewOutputInternal;
  public
    procedure setOutputDeviceUniqueID(newValue: NSString); message 'setOutputDeviceUniqueID:';
    function outputDeviceUniqueID: NSString; message 'outputDeviceUniqueID';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
  end;
{$endif}

{$endif}
