{ Parsed from CoreSpotlight.framework CSSearchableItemAttributeSet.h }

{$ifdef TYPES}
type
  CSSearchableItemAttributeSetPtr = ^CSSearchableItemAttributeSet;
  CSLocalizedStringPtr = ^CSLocalizedString;
  CSCustomAttributeKeyPtr = ^CSCustomAttributeKey;
{$endif}

{$ifdef CLASSES}

type
  CSSearchableItemAttributeSet = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithItemContentType (itemContentType: nonnull NSStringPtr): instancetype; message 'initWithItemContentType:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  CSLocalizedString = objcclass external (NSString)
  public
    function initWithLocalizedStrings (localizedStrings: NSDictionary): instancetype; message 'initWithLocalizedStrings:';
    function localizedString: NSString; message 'localizedString';
  end;

type
  CSCustomAttributeKey = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithKeyName (keyName: NSString): nullable instancetype; message 'initWithKeyName:';
    function initWithKeyName_searchable_searchableByDefault_unique_multiValued (keyName: NSString; searchable: boolean; searchableByDefault: boolean; unique: boolean; multiValued: boolean): nullable instancetype; message 'initWithKeyName:searchable:searchableByDefault:unique:multiValued:'; { NS_DESIGNATED_INITIALIZER }
    function keyName: NSString; message 'keyName';
    function isSearchable: boolean; message 'isSearchable';
    function isSearchableByDefault: boolean; message 'isSearchableByDefault';
    function isUnique: boolean; message 'isUnique';
    function isMultiValued: boolean; message 'isMultiValued';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  CSCustomAttributes = objccategory external (CSSearchableItemAttributeSet)
    procedure setValue_forCustomKey (value: nullable NSSecureCodingProtocol; key: CSCustomAttributeKey); message 'setValue:forCustomKey:';
    function valueForCustomKey (key: CSCustomAttributeKey): nullable NSSecureCodingProtocol; message 'valueForCustomKey:';
  end;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef CLASSES}

type
  NSUserActivity_CSSearchableItemAttributeSet = objccategory external name 'CSSearchableItemAttributeSet' (NSUserActivity)
    procedure setCS_TVOS_UNAVAILABLE(newValue: CSSearchableItemAttributeSet *contentAttributeSet); message 'setCS_TVOS_UNAVAILABLE:';
    function CS_TVOS_UNAVAILABLE_: CSSearchableItemAttributeSet *contentAttributeSet; message 'CS_TVOS_UNAVAILABLE';
  end;
{$endif}

{$endif}

