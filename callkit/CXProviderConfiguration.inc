{ Parsed from CallKit.framework CXProviderConfiguration.h }

{$ifdef TYPES}
type
  CXProviderConfigurationPtr = ^CXProviderConfiguration;
{$endif}

{$ifdef CLASSES}

type
  CXProviderConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    function localizedName: NSString; message 'localizedName';
    procedure setRingtoneSound(newValue: NSString); message 'setRingtoneSound:';
    function ringtoneSound: NSString; message 'ringtoneSound';
    procedure setIconTemplateImageData(newValue: NSData); message 'setIconTemplateImageData:';
    function iconTemplateImageData: NSData; message 'iconTemplateImageData';
    procedure setMaximumCallGroups(newValue: NSUInteger); message 'setMaximumCallGroups:';
    function maximumCallGroups: NSUInteger; message 'maximumCallGroups';
    procedure setMaximumCallsPerCallGroup(newValue: NSUInteger); message 'setMaximumCallsPerCallGroup:';
    function maximumCallsPerCallGroup: NSUInteger; message 'maximumCallsPerCallGroup';
    procedure setSupportsVideo(newValue: boolean); message 'setSupportsVideo:';
    function supportsVideo: boolean; message 'supportsVideo';
    procedure setSupportedHandleTypes(newValue: NSNumber *ProtocolPtr); message 'setSupportedHandleTypes:';
    function supportedHandleTypes: NSNumber *ProtocolPtr; message 'supportedHandleTypes';
    function initWithLocalizedName (localizedName_: NSString): instancetype; message 'initWithLocalizedName:';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

