{ Parsed from AVFAudio.framework AVAudioSettings.h }
{$ifdef TYPES}
const
  AVLinearPCMIsNonInterleavedKey = AVLinearPCMIsNonInterleaved;

type
  AVAudioQuality = NSInteger;
  AVAudioQualityPtr = ^AVAudioQuality;

const
  AVAudioQualityMin = 0;
  AVAudioQualityLow = $20;
  AVAudioQualityMedium = $40;
  AVAudioQualityHigh = $60;
  AVAudioQualityMax = $7F;
{$endif}

