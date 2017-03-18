{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesAddressBookUI;
interface

type
  ABNewPersonViewController = objcclass external;
  ABPeoplePickerNavigationController = objcclass external;
  ABPersonViewController = objcclass external;
  ABUnknownPersonViewController = objcclass external;
  ABNewPersonViewControllerDelegateProtocol = objcprotocol external name 'ABNewPersonViewControllerDelegate';
  ABPeoplePickerNavigationControllerDelegateProtocol = objcprotocol external name 'ABPeoplePickerNavigationControllerDelegate';
  ABPersonViewControllerDelegateProtocol = objcprotocol external name 'ABPersonViewControllerDelegate';
  ABUnknownPersonViewControllerDelegateProtocol = objcprotocol external name 'ABUnknownPersonViewControllerDelegate';

implementation
end.
