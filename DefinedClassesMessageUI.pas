{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesMessageUI;
interface

type
  MFMailComposeViewController = objcclass external;
  MFMessageComposeViewController = objcclass external;
  MFMailComposeViewControllerDelegateProtocol = objcprotocol external name 'MFMailComposeViewControllerDelegate';
  MFMessageComposeViewControllerDelegateProtocol = objcprotocol external name 'MFMessageComposeViewControllerDelegate';

type
  MSMessage = objcclass external;

implementation
end.
