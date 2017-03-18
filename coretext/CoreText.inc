{ Parsed from CoreText.framework CoreText.h }

{$ifndef __CORETEXT__}
{$ifdef FUNCTIONS}
function CTGetCoreTextVersion: _C_BEGIN



uint32_t; cdecl; external; { available in 10_5, 3_2 }
{$endif}

{$ifdef TYPES}
const
  kCTVersionNumber10_5 = $00020000;
  kCTVersionNumber10_5_2 = $00020001;
  kCTVersionNumber10_5_3 = $00020002;
  kCTVersionNumber10_5_5 = $00020003;
  kCTVersionNumber10_6 = $00030000;
  kCTVersionNumber10_7 = $00040000;
  kCTVersionNumber10_8 = $00050000;
  kCTVersionNumber10_9 = $00060000;
  kCTVersionNumber10_10 = $00070000;
  kCTVersionNumber10_11 = $00080000;
  kCTVersionNumber10_12 = $00090000;
{$endif}

{$endif}
