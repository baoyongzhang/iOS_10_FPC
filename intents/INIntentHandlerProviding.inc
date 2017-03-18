{ Parsed from Intents.framework INIntentHandlerProviding.h }

{$ifdef TYPES}
type
  INIntentHandlerProvidingProtocolPtr = ^INIntentHandlerProvidingProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  INIntentHandlerProvidingProtocol = objcprotocol external name 'INIntentHandlerProviding' (NSObjectProtocol)
    function handlerForIntent (intent: INIntent): nullable id; message 'handlerForIntent:';
  end;
{$endif}

