{ Parsed from AVFAudio.framework AVAudioUnit.h }

{ Types from AVAudioUnit }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioUnitPtr = ^AVAudioUnit;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOUNIT_HAVE_AUDIOUNIT = 1;
{$endif}

{$endif}

{$ifdef CLASSES}

type
  AVAudioUnit = objcclass external (AVAudioNode)
  public
    {$if defined(AVAUDIOUNIT_HAVE_AUDIOUNIT)}
    class procedure instantiateWithComponentDescription_options_completionHandler (audioComponentDescription_: AudioComponentDescription; options: AudioComponentInstantiationOptions; completionHandler: OpaqueCBlock); message 'instantiateWithComponentDescription:options:completionHandler:'; { available in 10_11, 9_0 }
    function loadAudioUnitPresetAtURL_error (url: NSURL; outError: NSErrorPtr): boolean; message 'loadAudioUnitPresetAtURL:error:';
    function audioComponentDescription: AudioComponentDescription; message 'audioComponentDescription';
    function audioUnit: AudioUnit; message 'audioUnit';
    {$if defined(__OBJC2__)}
    function AUAudioUnit_: AUAudioUnit; message 'AUAudioUnit';
    {$endif}
    function name: NSString; message 'name';
    function manufacturerName: NSString; message 'manufacturerName';
    function version: NSUInteger; message 'version';
    {$endif}
  end;
{$endif}

