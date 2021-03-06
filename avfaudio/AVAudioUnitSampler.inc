{ Parsed from AVFAudio.framework AVAudioUnitSampler.h }

{$ifdef TYPES}
type
  AVAudioUnitSamplerPtr = ^AVAudioUnitSampler;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitSampler = objcclass external (AVAudioUnitMIDIInstrument)
  public
    function loadSoundBankInstrumentAtURL_program_bankMSB_bankLSB_error (bankURL: NSURL; program_: cuint8; bankMSB: cuint8; bankLSB: cuint8; outError: NSErrorPtr): boolean; message 'loadSoundBankInstrumentAtURL:program:bankMSB:bankLSB:error:';
    function loadInstrumentAtURL_error (instrumentURL: NSURL; outError: NSErrorPtr): boolean; message 'loadInstrumentAtURL:error:';
    function loadAudioFilesAtURLs_error (audioFiles: NSURL *ProtocolPtr; outError: NSErrorPtr): boolean; message 'loadAudioFilesAtURLs:error:';
    procedure setStereoPan(newValue: single); message 'setStereoPan:';
    function stereoPan: single; message 'stereoPan';
    procedure setMasterGain(newValue: single); message 'setMasterGain:';
    function masterGain: single; message 'masterGain';
    procedure setGlobalTuning(newValue: single); message 'setGlobalTuning:';
    function globalTuning: single; message 'globalTuning';
  end;
{$endif}

