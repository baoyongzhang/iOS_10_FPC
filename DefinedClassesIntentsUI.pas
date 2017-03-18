{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesIntentsUI;
interface

type
  INUIHostedViewControllingProtocol = objcprotocol external name 'INUIHostedViewControlling';
  INUIHostedViewSiriProvidingProtocol = objcprotocol external name 'INUIHostedViewSiriProviding';

type
  INIntentResponse = objcclass external;
  INInteraction = objcclass external;

implementation
end.
