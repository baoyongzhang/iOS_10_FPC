{ Parsed from Messages.framework MSSticker.h }

{$ifdef TYPES}
type
  MSStickerPtr = ^MSSticker;
{$endif}

{$ifdef CLASSES}

type
  MSSticker = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function initWithContentsOfFileURL_localizedDescription_error (fileURL: NSURL; localizedDescription: NSString; error: NSError * _NullablePtr): nullable instancetype; message 'initWithContentsOfFileURL:localizedDescription:error:'; { NS_DESIGNATED_INITIALIZER }
    function imageFileURL: NSURL; message 'imageFileURL';
    function localizedDescription: NSString; message 'localizedDescription';
  end;
{$endif}

