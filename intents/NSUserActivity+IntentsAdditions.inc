{ Parsed from Intents.framework NSUserActivity+IntentsAdditions.h }
{$ifdef CLASSES}

type
  IntentsAdditions = objccategory external (NSUserActivity)
    function interaction: INInteraction; message 'interaction';
    function ios(10.0)): INInteraction; message 'ios(10.0))';
  end;
{$endif}

