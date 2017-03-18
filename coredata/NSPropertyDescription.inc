{ Parsed from CoreData.framework NSPropertyDescription.h }

{$ifdef TYPES}
type
  NSPropertyDescriptionPtr = ^NSPropertyDescription;
{$endif}

{$ifdef CLASSES}

type
  NSPropertyDescription = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  private
  public
    function entity: NSEntityDescription; message 'entity';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setOptional(newValue: boolean); message 'setOptional:';
    function isOptional: boolean; message 'isOptional';
    procedure setTransient(newValue: boolean); message 'setTransient:';
    function isTransient: boolean; message 'isTransient';
    function validationPredicates: NSPredicate *ProtocolPtr; message 'validationPredicates';
    function validationWarnings: NSArray; message 'validationWarnings';
    procedure setValidationPredicates_withValidationWarnings (validationPredicates_: nullable NSPredicate *ProtocolPtr; validationWarnings_: nullable NSString *ProtocolPtr); message 'setValidationPredicates:withValidationWarnings:';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure setIndexed(newValue: boolean); message 'setIndexed:';
    function isIndexed: boolean; message 'isIndexed';
    procedure setIos(3.0))(newValue: boolean); message 'setIos(3.0)):';
    function isIndexed_: boolean; message 'isIndexed';
    function versionHash: NSData; message 'versionHash';
    function ios(3.0)): NSData; message 'ios(3.0))';
    procedure setVersionHashModifier(newValue: NSString); message 'setVersionHashModifier:';
    function versionHashModifier: NSString; message 'versionHashModifier';
    procedure setIos(3.0))_(newValue: NSString); message 'setIos(3.0)):';
    function ios(3.0))_: NSString; message 'ios(3.0))';
    procedure setIndexedBySpotlight(newValue: boolean); message 'setIndexedBySpotlight:';
    function isIndexedBySpotlight: boolean; message 'isIndexedBySpotlight';
    procedure setIos(3.0))__(newValue: boolean); message 'setIos(3.0)):';
    function isIndexedBySpotlight_: boolean; message 'isIndexedBySpotlight';
    procedure setStoredInExternalRecord(newValue: boolean); message 'setStoredInExternalRecord:';
    function isStoredInExternalRecord: boolean; message 'isStoredInExternalRecord';
    procedure setIos(3.0))___(newValue: boolean); message 'setIos(3.0)):';
    function isStoredInExternalRecord_: boolean; message 'isStoredInExternalRecord';
    procedure setRenamingIdentifier(newValue: NSString); message 'setRenamingIdentifier:';
    function renamingIdentifier: NSString; message 'renamingIdentifier';
    procedure setIos(3.0))____(newValue: NSString); message 'setIos(3.0)):';
    function ios(3.0))__: NSString; message 'ios(3.0))';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

