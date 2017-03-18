{ Parsed from HomeKit.framework HMUser.h }

{$ifdef TYPES}
type
  HMUserPtr = ^HMUser;
{$endif}

{$ifdef CLASSES}

type
  HMUser = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
  end;
{$endif}

