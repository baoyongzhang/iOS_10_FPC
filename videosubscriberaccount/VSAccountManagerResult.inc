{ Parsed from VideoSubscriberAccount.framework VSAccountManagerResult.h }

{$ifdef TYPES}
type
  VSAccountManagerResultPtr = ^VSAccountManagerResult;
{$endif}

{$ifdef CLASSES}

type
  VSAccountManagerResult = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    procedure cancel; message 'cancel';
  end;
{$endif}

