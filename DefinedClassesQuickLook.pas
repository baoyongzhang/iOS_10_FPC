{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesQuickLook;
interface

type
  QLPreviewController = objcclass external;
  QLPreviewControllerDataSourceProtocol = objcprotocol external name 'QLPreviewControllerDataSource';
  QLPreviewControllerDelegateProtocol = objcprotocol external name 'QLPreviewControllerDelegate';
  QLPreviewItemProtocol = objcprotocol external name 'QLPreviewItem';

implementation
end.
