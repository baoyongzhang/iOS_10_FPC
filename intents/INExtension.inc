{ Parsed from Intents.framework INExtension.h }

{$ifdef TYPES}
type
  INExtensionPtr = ^INExtension;
{$endif}

{$ifdef CLASSES}

type
  INExtension = objcclass external (NSObject, INIntentHandlerProvidingProtocol)

    { Adopted protocols }
    function handlerForIntent (intent: INIntent): nullable id; message 'handlerForIntent:';
  end;
{$endif}

