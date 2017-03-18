{ Parsed from Contacts.framework CNContactRelation.h }

{$ifdef TYPES}
type
  CNContactRelationPtr = ^CNContactRelation;
{$endif}

{$ifdef CLASSES}

type
  CNContactRelation = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function contactRelationWithName (name: NSString): instancetype; message 'contactRelationWithName:';
    function initWithName (name: NSString): instancetype; message 'initWithName:';
    function name: NSString; message 'name';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNLabelContactRelationFather: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationMother: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationParent: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationBrother: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationSister: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationChild: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationFriend: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationSpouse: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationPartner: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationAssistant: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelContactRelationManager: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

