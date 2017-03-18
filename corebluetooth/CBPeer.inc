{ Parsed from CoreBluetooth.framework CBPeer.h }

{$ifdef TYPES}
type
  CBPeerPtr = ^CBPeer;
{$endif}

{$ifdef CLASSES}

type
  CBPeer = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function identifier: NSUUID; message 'identifier';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

