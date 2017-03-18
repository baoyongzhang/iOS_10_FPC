{ Parsed from Intents.framework INIntentResolutionResult.h }

{$ifdef TYPES}
type
  INIntentResolutionResultPtr = ^INIntentResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INIntentResolutionResult = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function init: instancetype; message 'init';
    class function needsValue NS_SWIFT_NAME(needsValue()): instancetype; message 'needsValue NS_SWIFT_NAME(needsValue())';
    class function notRequired NS_SWIFT_NAME(notRequired()): instancetype; message 'notRequired NS_SWIFT_NAME(notRequired())';
    class function unsupported NS_SWIFT_NAME(unsupported()): instancetype; message 'unsupported NS_SWIFT_NAME(unsupported())';
  end;
{$endif}

