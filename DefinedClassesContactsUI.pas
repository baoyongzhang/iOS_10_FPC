{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesContactsUI;
interface

type
  CNContactPickerViewController = objcclass external;
  CNContactViewController = objcclass external;
  CNContactPickerDelegateProtocol = objcprotocol external name 'CNContactPickerDelegate';
  CNContactViewControllerDelegateProtocol = objcprotocol external name 'CNContactViewControllerDelegate';

implementation
end.
