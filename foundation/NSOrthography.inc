{ Parsed from Foundation.framework NSOrthography.h }

{$ifdef TYPES}
type
  NSOrthographyPtr = ^NSOrthography;
{$endif}

{$ifdef CLASSES}

type
  NSOrthography = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function dominantScript: NSString; message 'dominantScript';
    function languageMap: NSDictionary *>Ptr; message 'languageMap';
    function initWithDominantScript_languageMap (script: NSString; map: NSDictionary *>Ptr): instancetype; message 'initWithDominantScript:languageMap:'; { available in 10_6, 4_0 }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSOrthographyExtended = objccategory external (NSOrthography)
    function languagesForScript (script: NSString): nullable NSString *ProtocolPtr; message 'languagesForScript:'; { available in 10_6, 4_0 }
    function dominantLanguageForScript (script: NSString): nullable NSStringPtr; message 'dominantLanguageForScript:'; { available in 10_6, 4_0 }
    function dominantLanguage: NSString; message 'dominantLanguage';
    function allScripts: NSString *ProtocolPtr; message 'allScripts';
    function allLanguages: NSString *ProtocolPtr; message 'allLanguages';
  end;

type
  NSOrthographyCreation = objccategory external (NSOrthography)
    class function orthographyWithDominantScript_languageMap (script: NSString; map: NSDictionary *>Ptr): instancetype; message 'orthographyWithDominantScript:languageMap:'; { available in 10_6, 4_0 }
  end;
{$endif}

