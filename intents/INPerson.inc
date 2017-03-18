{ Parsed from Intents.framework INPerson.h }

{$ifdef TYPES}
type
  INPersonPtr = ^INPerson;
{$endif}

{$ifdef CLASSES}

type
  INPerson = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithPersonHandle_nameComponents_displayName_image_contactIdentifier_customIdentifier (personHandle: INPersonHandle; nameComponents: nullable NSPersonNameComponentsPtr; displayName: nullable NSStringPtr; image: nullable INImagePtr; contactIdentifier: nullable NSStringPtr; customIdentifier: nullable NSStringPtr): instancetype; message 'initWithPersonHandle:nameComponents:displayName:image:contactIdentifier:customIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function personHandle: INPersonHandle; message 'personHandle';
    function nameComponents: NSPersonNameComponents; message 'nameComponents';
    function displayName: NSString; message 'displayName';
    function image: INImage; message 'image';
    function contactIdentifier: NSString; message 'contactIdentifier';
    function customIdentifier: NSString; message 'customIdentifier';
    function relationship: INPersonRelationship; message 'relationship';
    function macosx(10.12.2)): INPersonRelationship; message 'macosx(10.12.2))';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  INPersonSuggestionType = NSInteger;
  INPersonSuggestionTypePtr = ^INPersonSuggestionType;

const
  INPersonSuggestionTypeSocialProfile = 1;
  INPersonSuggestionTypeInstantMessageAddress = 2;
{$endif}

{$ifdef CLASSES}

type
  INPerson_INInteraction = objccategory external name 'INInteraction' (INPerson)
    function aliases: INPersonHandle *ProtocolPtr; message 'aliases';
    function suggestionType: INPersonSuggestionType; message 'suggestionType';
    function initWithPersonHandle_nameComponents_displayName_image_contactIdentifier_customIdentifier_aliases_suggestionType (personHandle_: INPersonHandle; nameComponents_: nullable NSPersonNameComponentsPtr; displayName_: nullable NSStringPtr; image_: nullable INImagePtr; contactIdentifier_: nullable NSStringPtr; customIdentifier_: nullable NSStringPtr; aliases_: nullable INPersonHandle *ProtocolPtr; suggestionType_: INPersonSuggestionType): instancetype; message 'initWithPersonHandle:nameComponents:displayName:image:contactIdentifier:customIdentifier:aliases:suggestionType:';
  end;
{$endif}

