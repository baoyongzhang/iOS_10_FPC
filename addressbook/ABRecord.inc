{ Parsed from AddressBook.framework ABRecord.h }

{$ifndef __ABRecord__}
{$ifdef TYPES}
type
  ABRecordRef = CFTypeRef deprecated 'in "use CNContact, CNGroup, or CNContainer"';
  ABRecordRefPtr = ^ABRecordRef deprecated 'in "use CNContact, CNGroup, or CNContainer"';
  ABRecordID = cint32 deprecated 'in "use CN object's identifier"';
  ABRecordIDPtr = ^ABRecordID deprecated 'in "use CN object's identifier"';
  ABPropertyID = cint32 deprecated 'in ""';
  ABPropertyIDPtr = ^ABPropertyID deprecated 'in ""';
  ABRecordType = cuint32 deprecated 'in ""';
  ABRecordTypePtr = ^ABRecordType deprecated 'in ""';

const
  kABPersonType = 0;
  kABGroupType = 1;
  kABSourceType = 2;

const
  kABMultiValueMask = 1 shl 8;
  kABRecordInvalidID = -1;
  kABPropertyInvalidID = -1;

type
  ABPropertyType = cuint32 deprecated 'in ""';
  ABPropertyTypePtr = ^ABPropertyType deprecated 'in ""';

const
  kABInvalidPropertyType = $0;
  kABStringPropertyType = $1;
  kABIntegerPropertyType = $2;
  kABRealPropertyType = $3;
  kABDateTimePropertyType = $4;
  kABDictionaryPropertyType = $5;
  kABMultiStringPropertyType = kABMultiValueMask + kABStringPropertyType;
  kABMultiIntegerPropertyType = kABMultiValueMask + kABIntegerPropertyType;
  kABMultiRealPropertyType = kABMultiValueMask + kABRealPropertyType;
  kABMultiDateTimePropertyType = kABMultiValueMask + kABDateTimePropertyType;
  kABMultiDictionaryPropertyType = kABMultiValueMask + kABDictionaryPropertyType;
{$endif}

{$ifdef FUNCTIONS}
function ABRecordGetRecordID(record_: ABRecordRef): ABRecordID; cdecl; external; deprecated 'in "use CN object's identifier"';
function ABRecordGetRecordType(record_: ABRecordRef): ABRecordType; cdecl; external; deprecated 'in ""';
function ABRecordCopyValue(record_: ABRecordRef; property_: ABPropertyID): CFTypeRef; cdecl; external; deprecated 'in "use CN object's properties"';
function ABRecordSetValue(record_: ABRecordRef; property_: ABPropertyID; value: CFTypeRef; error: CFErrorRefPtr): cbool; cdecl; external; deprecated 'in "use CN mutable object's properties"';
function ABRecordRemoveValue(record_: ABRecordRef; property_: ABPropertyID; error: CFErrorRefPtr): cbool; cdecl; external; deprecated 'in "use CN mutable object's properties, setting to @"", @[], or nil"';
function ABRecordCopyCompositeName(record_: ABRecordRef): CFStringRef; cdecl; external; deprecated 'in "use CNContactFormatter or CN object's name"';
{$endif}

{$endif}
