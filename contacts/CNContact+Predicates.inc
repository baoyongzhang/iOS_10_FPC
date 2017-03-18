{ Parsed from Contacts.framework CNContact+Predicates.h }
{$ifdef CLASSES}

type
  CNContact_Predicates = objccategory external name 'Predicates' (CNContact)
    class function predicateForContactsMatchingName (name: NSString): NSPredicate; message 'predicateForContactsMatchingName:';
    class function predicateForContactsWithIdentifiers (identifiers: NSString*ProtocolPtr): NSPredicate; message 'predicateForContactsWithIdentifiers:';
    class function predicateForContactsInGroupWithIdentifier (groupIdentifier: NSString): NSPredicate; message 'predicateForContactsInGroupWithIdentifier:';
    class function predicateForContactsInContainerWithIdentifier (containerIdentifier: NSString): NSPredicate; message 'predicateForContactsInContainerWithIdentifier:';
  end;
{$endif}

