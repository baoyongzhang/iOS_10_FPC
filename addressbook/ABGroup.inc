{ Parsed from AddressBook.framework ABGroup.h }

{$ifndef __ABGroup__}
{$ifdef EXTERNAL_SYMBOLS}
var
  kABGroupNameProperty: cint deprecated 'in "use CNGroup.name"'; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function ABGroupCreate: ABRecordRef; cdecl; external; deprecated 'in "use [[CNMutableGroup alloc] init]"';
function ABGroupCreateInSource(source: ABRecordRef): ABRecordRef; cdecl; external; deprecated 'in "use [[CNMutableGroup alloc] init] and [CNSaveRequest addGroup:toContainerWithIdentifier:]"';
function ABGroupCopySource(group: ABRecordRef): ABRecordRef; cdecl; external; deprecated 'in "use [CNContactStore containersMatchingPredicate:[CNContainer predicateForContainerOfGroupWithIdentifier:] error:]"';
function ABGroupCopyArrayOfAllMembers(group: ABRecordRef): CFArrayRef; cdecl; external; deprecated 'in "use CNContactFetchRequest with predicate = [CNContact predicateForContactsInGroupWithIdentifier:]"';
function ABGroupCopyArrayOfAllMembersWithSortOrdering(group: ABRecordRef; sortOrdering: ABPersonSortOrdering): CFArrayRef; cdecl; external; deprecated 'in "use CNContactFetchRequest with predicate = [CNContact predicateForContactsInGroupWithIdentifier:] and sortOrder"';
function ABGroupAddMember(group: ABRecordRef; person: ABRecordRef; error: CFErrorRefPtr): cbool; cdecl; external; deprecated 'in "use [CNSaveRequest addMember:toGroup:]"';
function ABGroupRemoveMember(group: ABRecordRef; member: ABRecordRef; error: CFErrorRefPtr): cbool; cdecl; external; deprecated 'in "use [CNSaveRequest removeMember:fromGroup:]"';
function ABAddressBookGetGroupWithRecordID(addressBook: ABAddressBookRef; recordID: ABRecordID): ABRecordRef; cdecl; external; deprecated 'in "use [CNContactStore groupsMatchingPredicate:[CNGroup predicateForGroupsWithIdentifiers:] error:]"';
function ABAddressBookGetGroupCount(addressBook: ABAddressBookRef): CFIndex; cdecl; external; deprecated 'in "use count of fetch results for [CNContactStore groupsMatchingPredicate:nil error:]"';
function ABAddressBookCopyArrayOfAllGroups(addressBook: ABAddressBookRef): CFArrayRef; cdecl; external; deprecated 'in "use [CNContactStore groupsMatchingPredicate:nil error:]"';
function ABAddressBookCopyArrayOfAllGroupsInSource(addressBook: ABAddressBookRef; source: ABRecordRef): CFArrayRef; cdecl; external; deprecated 'in "use [CNContactStore groupsMatchingPredicate:[CNGroup predicateForGroupsInContainerWithIdentifier:] error:]"';
{$endif}

{$endif}
