{ Parsed from Contacts.framework CNContactVCardSerialization.h }

{$ifdef TYPES}
type
  CNContactVCardSerializationPtr = ^CNContactVCardSerialization;
{$endif}

{$ifdef CLASSES}

type
  CNContactVCardSerialization = objcclass external (NSObject)
  public
    class function descriptorForRequiredKeys: CNKeyDescriptorProtocol; message 'descriptorForRequiredKeys';
    class function dataWithContacts_error (contacts: CNContact *ProtocolPtr; error: NSError *__nullable *__nullable): nullable NSDataPtr; message 'dataWithContacts:error:';
    class function contactsWithData_error (data: NSData; error: NSError *__nullable *__nullable): nullable CNContact *ProtocolPtr; message 'contactsWithData:error:';
  end;
{$endif}

