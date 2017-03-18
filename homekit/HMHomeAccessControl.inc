{ Parsed from HomeKit.framework HMHomeAccessControl.h }

{$ifdef TYPES}
type
  HMHomeAccessControlPtr = ^HMHomeAccessControl;
{$endif}

{$ifdef CLASSES}

type
  HMHomeAccessControl = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function isAdministrator: boolean; message 'isAdministrator';
  end;
{$endif}

