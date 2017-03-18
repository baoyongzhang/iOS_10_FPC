{ Parsed from Security.framework SecRandom.h }

{$ifndef _SECURITY_SECRANDOM_H_}
{$ifdef TYPES}
type
  SecRandomRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSecRandomDefault: SecRandomRef { available starting in __MAC_10_7, __IPHONE_2_0 }; cvar; external;
{$endif}

{$endif}
