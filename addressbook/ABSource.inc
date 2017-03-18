{ Parsed from AddressBook.framework ABSource.h }

{$ifndef __ABSource__}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef TYPES}
const
  kABSourceTypeSearchableMask = $01000000;

const
  kABSourceTypeLocal = $0;
  kABSourceTypeExchange = $1;
  kABSourceTypeExchangeGAL = kABSourceTypeExchange + kABSourceTypeSearchableMask;
  kABSourceTypeMobileMe = $2;
  kABSourceTypeLDAP = $3 + kABSourceTypeSearchableMask;
  kABSourceTypeCardDAV = $4;
  kABSourceTypeCardDAVSearch = kABSourceTypeCardDAV + kABSourceTypeSearchableMask;

type
  ABSourceType = cint deprecated 'in ""';
  ABSourceTypePtr = ^ABSourceType deprecated 'in ""';
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kABSourceNameProperty: ABPropertyID deprecated 'in "use CNContainer.name"'; cvar; external;
  kABSourceTypeProperty: ABPropertyID deprecated 'in "use CNContainer.type"'; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function ABAddressBookCopyDefaultSource(addressBook: ABAddressBookRef): ABRecordRef; cdecl; external; deprecated 'in "use [CNContactStore containersMatchingPredicate:[CNContainer predicateForContainersWithIdentifiers: @[CNContactStore.defaultContainerIdentifier]] error:]"';
function ABAddressBookGetSourceWithRecordID(addressBook: ABAddressBookRef; sourceID: ABRecordID): ABRecordRef; cdecl; external; deprecated 'in "use [CNContactStore containersMatchingPredicate:[CNContainer predicateForContainersWithIdentifiers:] error:]"';
function ABAddressBookCopyArrayOfAllSources(addressBook: ABAddressBookRef): CFArrayRef; cdecl; external; deprecated 'in "use [CNContactStore containersMatchingPredicate:nil error:]"';
{$endif}

{$endif}
