{ Parsed from HomeKit.framework HMAccessoryProfile.h }

{$ifdef TYPES}
type
  HMAccessoryProfilePtr = ^HMAccessoryProfile;
{$endif}

{$ifdef CLASSES}

type
  HMAccessoryProfile = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    function services: HMService *ProtocolPtr; message 'services';
    function accessory: HMAccessory; message 'accessory';
  end;
{$endif}

