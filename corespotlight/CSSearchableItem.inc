{ Parsed from CoreSpotlight.framework CSSearchableItem.h }

{$ifdef TYPES}
type
  CSSearchableItemPtr = ^CSSearchableItem;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CS_TVOS_UNAVAILABLE: NSString *CSSearchableItemActionType { available in NA, 9_0 }; cvar; external;
  CS_TVOS_UNAVAILABLE: NSString *CSSearchableItemActivityIdentifier { available in NA, 9_0 }; cvar; external;
  CS_TVOS_UNAVAILABLE: NSString *CSQueryContinuationActionType { available in NA, 10_0 }; cvar; external;
  CS_TVOS_UNAVAILABLE: NSString *CSSearchQueryString { available in NA, 10_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CSSearchableItem = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithUniqueIdentifier_domainIdentifier_attributeSet (uniqueIdentifier: nullable NSStringPtr; domainIdentifier: nullable NSStringPtr; attributeSet: CSSearchableItemAttributeSet): instancetype; message 'initWithUniqueIdentifier:domainIdentifier:attributeSet:';
    procedure setUniqueIdentifier(newValue: NSString); message 'setUniqueIdentifier:';
    function uniqueIdentifier: NSString; message 'uniqueIdentifier';
    procedure setDomainIdentifier(newValue: NSString); message 'setDomainIdentifier:';
    function domainIdentifier: NSString; message 'domainIdentifier';
    procedure setExpirationDate(newValue: NSDate); message 'setExpirationDate:';
    function expirationDate: NSDate; message 'expirationDate';
    procedure setAttributeSet(newValue: CSSearchableItemAttributeSet); message 'setAttributeSet:';
    function attributeSet: CSSearchableItemAttributeSet; message 'attributeSet';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

