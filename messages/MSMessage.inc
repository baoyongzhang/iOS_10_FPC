{ Parsed from Messages.framework MSMessage.h }

{$ifdef TYPES}
type
  MSMessagePtr = ^MSMessage;
{$endif}

{$ifdef CLASSES}

type
  MSMessage = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithSession (session: MSSession): instancetype; message 'initWithSession:'; { NS_DESIGNATED_INITIALIZER }
    function session: MSSession; message 'session';
    function senderParticipantIdentifier: NSUUID; message 'senderParticipantIdentifier';
    procedure setLayout(newValue: MSMessageLayout); message 'setLayout:';
    function layout: MSMessageLayout; message 'layout';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setShouldExpire(newValue: boolean); message 'setShouldExpire:';
    function shouldExpire: boolean; message 'shouldExpire';
    procedure setAccessibilityLabel(newValue: NSString); message 'setAccessibilityLabel:';
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    procedure setSummaryText(newValue: NSString); message 'setSummaryText:';
    function summaryText: NSString; message 'summaryText';
    procedure setError(newValue: NSError); message 'setError:';
    function error: NSError; message 'error';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

