{ Parsed from WatchConnectivity.framework WCSessionUserInfoTransfer.h }

{$ifdef TYPES}
type
  WCSessionUserInfoTransferPtr = ^WCSessionUserInfoTransfer;
{$endif}

{$ifdef CLASSES}

type
  WCSessionUserInfoTransfer = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function isCurrentComplicationInfo: BOOL currentComplicationInfo; message 'isCurrentComplicationInfo';
    function userInfo: NSDictionary; message 'userInfo';
    function isTransferring: boolean; message 'isTransferring';
    procedure cancel; message 'cancel';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

