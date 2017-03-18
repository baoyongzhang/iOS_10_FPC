{ Parsed from Intents.framework INPersonResolutionResult.h }

{$ifdef TYPES}
type
  INPersonResolutionResultPtr = ^INPersonResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INPersonResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedPerson (resolvedPerson: INPerson): instancetype; message 'successWithResolvedPerson:';
    class function disambiguationWithPeopleToDisambiguate (peopleToDisambiguate: INPerson *ProtocolPtr): instancetype; message 'disambiguationWithPeopleToDisambiguate:';
    class function confirmationRequiredWithPersonToConfirm (personToConfirm: nullable INPersonPtr): instancetype; message 'confirmationRequiredWithPersonToConfirm:';
  end;
{$endif}

