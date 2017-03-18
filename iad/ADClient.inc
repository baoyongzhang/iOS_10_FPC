{ Parsed from IAd.framework ADClient.h }

{$ifdef TYPES}
type
  ADClientPtr = ^ADClient;
{$endif}

{$ifdef CLASSES}

type
  ADClient = objcclass external (NSObject)
  private
  public
    procedure determineAppInstallationAttributionWithCompletionHandler (completionHandler: OpaqueCBlock); message 'determineAppInstallationAttributionWithCompletionHandler:'; deprecated 'in 7_1, 9_0, "Use requestAttributionDetailsWithBlock instead."';
    procedure lookupAdConversionDetails (completionHandler: OpaqueCBlock); message 'lookupAdConversionDetails:'; deprecated 'in 8_0, 9_0, "Use requestAttributionDetailsWithBlock instead."';
    procedure requestAttributionDetailsWithBlock (completionHandler: OpaqueCBlock); message 'requestAttributionDetailsWithBlock:'; { available in 9_0 }
    procedure addClientToSegments_replaceExisting (segmentIdentifiers: NSArray; replaceExisting: boolean); message 'addClientToSegments:replaceExisting:'; { available in 8_0 }
  end;
{$endif}

