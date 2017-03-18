{ Parsed from UIKit.framework NSDataAsset.h }

{$ifdef TYPES}
type
  NSDataAssetPtr = ^NSDataAsset;
{$endif}

{$ifdef CLASSES}

type
  NSDataAsset = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithName (name: NSString): nullable instancetype; message 'initWithName:';
    function initWithName_bundle (name: NSString; bundle: NSBundle): nullable instancetype; message 'initWithName:bundle:'; { NS_DESIGNATED_INITIALIZER }
    function name: NSString; message 'name';
    function data: NSData; message 'data';
    function typeIdentifier: NSString; message 'typeIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

