{ Parsed from AddressBook.framework ABAddressBook.h }

{$ifndef __ABAddressBook__}
{$ifdef EXTERNAL_SYMBOLS}
var
  ABAddressBookErrorDomain: CFStringRef deprecated 'in "use CNErrorDomain"'; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kABOperationNotPermittedByStoreError = 0;
  kABOperationNotPermittedByUserError = 1;

type
  ABAddressBookRef = CFTypeRef deprecated 'in "use CNContactStore"';
  ABAddressBookRefPtr = ^ABAddressBookRef deprecated 'in "use CNContactStore"';
  ABAuthorizationStatus = CFIndex;
  ABAuthorizationStatusPtr = ^ABAuthorizationStatus;

const
  kABAuthorizationStatusNotDetermined = 0;
  kABAuthorizationStatusRestricted = 1;
  kABAuthorizationStatusDenied = 2;
  kABAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef FUNCTIONS}
function ABAddressBookGetAuthorizationStatus: ABAuthorizationStatus; cdecl; external; deprecated 'in "use [CNContactStore authorizationStatusForEntityType:]"';
function ABAddressBookCreateWithOptions(options: CFDictionaryRef; error: CFErrorRefPtr): ABAddressBookRef; cdecl; external; deprecated 'in "use [[CNContactStore alloc] init]"';
function ABAddressBookCreate: ABAddressBookRef; cdecl; external; deprecated 'in "use [[CNContactStore alloc] init]"';
{$endif}

{$ifdef TYPES}
type
  ABAddressBookRequestAccessCompletionHandler = OpaqueCBlock deprecated 'in ""';
{$endif}

{$ifdef FUNCTIONS}
procedure ABAddressBookRequestAccessWithCompletion(addressBook: ABAddressBookRef; completion: ABAddressBookRequestAccessCompletionHandler); cdecl; external; deprecated 'in "use [CNContactStore requestAccessForEntityType:completionHandler:]"';
function ABAddressBookSave(addressBook: ABAddressBookRef; error: CFErrorRefPtr): cbool; cdecl; external; deprecated 'in "use [CNContactStore executeSaveRequest:error:]"';
function ABAddressBookHasUnsavedChanges(addressBook: ABAddressBookRef): cbool; cdecl; external; deprecated 'in ""';
function ABAddressBookAddRecord(addressBook: ABAddressBookRef; record_: ABRecordRef; error: CFErrorRefPtr): cbool; cdecl; external; deprecated 'in "use CNSaveRequest"';
function ABAddressBookRemoveRecord(addressBook: ABAddressBookRef; record_: ABRecordRef; error: CFErrorRefPtr): cbool; cdecl; external; deprecated 'in "use CNSaveRequest"';
function ABAddressBookCopyLocalizedLabel(label_: CFStringRef): CFStringRef; cdecl; external; deprecated 'in "use [CNLabeledValue localizedStringForLabel:]"';
{$endif}

{$ifdef TYPES}
type
  ABExternalChangeCallback = procedure (addressBook: ABAddressBookRef; info: CFDictionaryRef; context: pointer); cdecl deprecated 'in ""';
{$endif}

{$ifdef FUNCTIONS}
procedure ABAddressBookRegisterExternalChangeCallback(addressBook: ABAddressBookRef; callback: ABExternalChangeCallback; context: pointer); cdecl; external; deprecated 'in "use CNContactStoreDidChangeNotification"';
procedure ABAddressBookUnregisterExternalChangeCallback(addressBook: ABAddressBookRef; callback: ABExternalChangeCallback; context: pointer); cdecl; external; deprecated 'in ""';
procedure ABAddressBookRevert(addressBook: ABAddressBookRef); cdecl; external; deprecated 'in "refetch CN objects"';
{$endif}

{$endif}
