{ Parsed from Intents.framework INCurrencyAmountResolutionResult.h }

{$ifdef TYPES}
type
  INCurrencyAmountResolutionResultPtr = ^INCurrencyAmountResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INCurrencyAmountResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedCurrencyAmount (resolvedCurrencyAmount: INCurrencyAmount): instancetype; message 'successWithResolvedCurrencyAmount:';
    class function disambiguationWithCurrencyAmountsToDisambiguate (currencyAmountsToDisambiguate: INCurrencyAmount *ProtocolPtr): instancetype; message 'disambiguationWithCurrencyAmountsToDisambiguate:';
    class function confirmationRequiredWithCurrencyAmountToConfirm (currencyAmountToConfirm: nullable INCurrencyAmountPtr): instancetype; message 'confirmationRequiredWithCurrencyAmountToConfirm:';
  end;
{$endif}

