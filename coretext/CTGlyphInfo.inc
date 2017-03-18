{ Parsed from CoreText.framework CTGlyphInfo.h }

{$ifndef __CTGLYPHINFO__}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CTGlyphInfoRef = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  CTGlyphInfoRef = OpaqueType;
{$endif}

{$endif}
{$ifdef TYPES}
type
  CTCharacterCollection = cuint16;
  CTCharacterCollectionPtr = ^CTCharacterCollection;

const
  kCTCharacterCollectionIdentityMapping = 0 { available in 10_8, 6_0 };
  kCTCharacterCollectionAdobeCNS1 = 1 { available in 10_8, 6_0 };
  kCTCharacterCollectionAdobeGB1 = 2 { available in 10_8, 6_0 };
  kCTCharacterCollectionAdobeJapan1 = 3 { available in 10_8, 6_0 };
  kCTCharacterCollectionAdobeJapan2 = 4 { available in 10_8, 6_0 };
  kCTCharacterCollectionAdobeKorea1 = 5 { available in 10_8, 6_0 };
  kCTIdentityMappingCharacterCollection = kCTCharacterCollectionIdentityMapping deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTAdobeCNS1CharacterCollection = kCTCharacterCollectionAdobeCNS1 deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTAdobeGB1CharacterCollection = kCTCharacterCollectionAdobeGB1 deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTAdobeJapan1CharacterCollection = kCTCharacterCollectionAdobeJapan1 deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTAdobeJapan2CharacterCollection = kCTCharacterCollectionAdobeJapan2 deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTAdobeKorea1CharacterCollection = kCTCharacterCollectionAdobeKorea1 deprecated 'in 10_5, 10_11, 3_2, 9_0';
{$endif}

{$endif}
