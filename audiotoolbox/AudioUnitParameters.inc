{ Parsed from AudioToolbox.framework AudioUnitParameters.h }

{$ifndef AudioUnit_AudioUnitParameters_h}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAUNetStatus_NotConnected = 0;
  kAUNetStatus_Connected = 1;
  kAUNetStatus_Overflow = 2;
  kAUNetStatus_Underflow = 3;
  kAUNetStatus_Connecting = 4;
  kAUNetStatus_Listening = 5;
{$endif}

{$endif}
{$endif}
