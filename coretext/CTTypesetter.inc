{ Parsed from CoreText.framework CTTypesetter.h }

{$ifndef __CTTYPESETTER__}
{$ifdef TYPES}
type
  CTTypesetterRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTTypesetterOptionDisableBidiProcessing: CFStringRef deprecated 'in 10_5, 10_8, 3_2, 6_0'; cvar; external;
  kCTTypesetterOptionForcedEmbeddingLevel: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$endif}
