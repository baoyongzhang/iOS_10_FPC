{ Parsed from AddressBook.framework ABMultiValue.h }

{$ifndef __ABMultiValue__}
{$ifdef TYPES}
type
  ABMultiValueRef = CFTypeRef deprecated 'in "use NSArray of CNLabeledValue"';
  ABMultiValueRefPtr = ^ABMultiValueRef deprecated 'in "use NSArray of CNLabeledValue"';
  ABMultiValueIdentifier = cint32 deprecated 'in "use CNLabeledValue.identifier"';
  ABMultiValueIdentifierPtr = ^ABMultiValueIdentifier deprecated 'in "use CNLabeledValue.identifier"';

const
  kABMultiValueInvalidIdentifier = -1;
{$endif}

{$ifdef FUNCTIONS}
function ABMultiValueGetPropertyType(multiValue: ABMultiValueRef): ABPropertyType; cdecl; external; deprecated 'in ""';
function ABMultiValueGetCount(multiValue: ABMultiValueRef): CFIndex; cdecl; external; deprecated 'in "use NSArray.count with the labeled value property"';
function ABMultiValueCopyValueAtIndex(multiValue: ABMultiValueRef; index: CFIndex): CFTypeRef; cdecl; external; deprecated 'in "use [[NSArray objectAtIndex:] value] with the labeled value property"';
function ABMultiValueCopyArrayOfAllValues(multiValue: ABMultiValueRef): CFArrayRef; cdecl; external; deprecated 'in "use [NSArray enumerateObjectsUsingBlock:] with the labeled value property and collect the values"';
function ABMultiValueCopyLabelAtIndex(multiValue: ABMultiValueRef; index: CFIndex): CFStringRef; cdecl; external; deprecated 'in "use [[NSArray objectAtIndex:] label] with the labeled value property"';
function ABMultiValueGetIndexForIdentifier(multiValue: ABMultiValueRef; identifier: ABMultiValueIdentifier): CFIndex; cdecl; external; deprecated 'in "use [NSArray indexOfObjectPassingTest:] with the labeled value property and find the identifier"';
function ABMultiValueGetIdentifierAtIndex(multiValue: ABMultiValueRef; index: CFIndex): ABMultiValueIdentifier; cdecl; external; deprecated 'in "use [[NSArray objectAtIndex:] identifier] with the labeled value property"';
function ABMultiValueGetFirstIndexOfValue(multiValue: ABMultiValueRef; value: CFTypeRef): CFIndex; cdecl; external; deprecated 'in "use [NSArray indexOfObjectPassingTest:] with the labeled value property and find the value"';
{$endif}

{$ifdef TYPES}
type
  ABMutableMultiValueRef = CFTypeRef deprecated 'in "use NSMutableArray of CNLabeledValue"';
  ABMutableMultiValueRefPtr = ^ABMutableMultiValueRef deprecated 'in "use NSMutableArray of CNLabeledValue"';
{$endif}

{$ifdef FUNCTIONS}
function ABMultiValueCreateMutable(type_: ABPropertyType): ABMutableMultiValueRef; cdecl; external; deprecated 'in "use [[NSMutableArray alloc] init]"';
function ABMultiValueCreateMutableCopy(multiValue: ABMultiValueRef): ABMutableMultiValueRef; cdecl; external; deprecated 'in "use [NSArray mutableCopy]"';
function ABMultiValueAddValueAndLabel(multiValue: ABMutableMultiValueRef; value: CFTypeRef; label_: CFStringRef; outIdentifier: ABMultiValueIdentifierPtr): cbool; cdecl; external; deprecated 'in "use [NSMutableArray addObject:[CNLabeledValue labeledValueWithLabel:value:]]"';
function ABMultiValueInsertValueAndLabelAtIndex(multiValue: ABMutableMultiValueRef; value: CFTypeRef; label_: CFStringRef; index: CFIndex; outIdentifier: ABMultiValueIdentifierPtr): cbool; cdecl; external; deprecated 'in "use [NSMutableArray insertObject:[CNLabeledValue labeledValueWithLabel:value:] atIndex:]"';
function ABMultiValueRemoveValueAndLabelAtIndex(multiValue: ABMutableMultiValueRef; index: CFIndex): cbool; cdecl; external; deprecated 'in "use [NSMutableArray removeObjectAtIndex:]"';
function ABMultiValueReplaceValueAtIndex(multiValue: ABMutableMultiValueRef; value: CFTypeRef; index: CFIndex): cbool; cdecl; external; deprecated 'in "use [NSMutableArray replaceObjectAtIndex: withObject:[CNLabeledValue labeledValueBySettingValue:]]"';
function ABMultiValueReplaceLabelAtIndex(multiValue: ABMutableMultiValueRef; label_: CFStringRef; index: CFIndex): cbool; cdecl; external; deprecated 'in "use [NSMutableArray replaceObjectAtIndex: withObject:[CNLabeledValue labeledValueBySettingLabel:]]"';
{$endif}

{$endif}
