{ Parsed from IntentsUI.framework INUIHostedViewSiriProviding.h }

{$ifdef TYPES}
type
  INUIHostedViewSiriProvidingProtocolPtr = ^INUIHostedViewSiriProvidingProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  INUIHostedViewSiriProvidingProtocol = objcprotocol external name 'INUIHostedViewSiriProviding' (NSObjectProtocol)
  optional
    function displaysMap: boolean; message 'displaysMap';
    function displaysMessage: boolean; message 'displaysMessage';
    function displaysPaymentTransaction: boolean; message 'displaysPaymentTransaction';
  end;
{$endif}

