{ Parsed from CallKit.framework CXCallUpdate.h }

{$ifdef TYPES}
type
  CXCallUpdatePtr = ^CXCallUpdate;
{$endif}

{$ifdef CLASSES}

type
  CXCallUpdate = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setRemoteHandle(newValue: CXHandle); message 'setRemoteHandle:';
    function remoteHandle: CXHandle; message 'remoteHandle';
    procedure setLocalizedCallerName(newValue: NSString); message 'setLocalizedCallerName:';
    function localizedCallerName: NSString; message 'localizedCallerName';
    procedure setSupportsHolding(newValue: boolean); message 'setSupportsHolding:';
    function supportsHolding: boolean; message 'supportsHolding';
    procedure setSupportsGrouping(newValue: boolean); message 'setSupportsGrouping:';
    function supportsGrouping: boolean; message 'supportsGrouping';
    procedure setSupportsUngrouping(newValue: boolean); message 'setSupportsUngrouping:';
    function supportsUngrouping: boolean; message 'supportsUngrouping';
    procedure setSupportsDTMF(newValue: boolean); message 'setSupportsDTMF:';
    function supportsDTMF: boolean; message 'supportsDTMF';
    procedure setHasVideo(newValue: boolean); message 'setHasVideo:';
    function hasVideo: boolean; message 'hasVideo';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

