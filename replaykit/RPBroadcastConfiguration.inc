{ Parsed from ReplayKit.framework RPBroadcastConfiguration.h }

{$ifdef TYPES}
type
  RPBroadcastConfigurationPtr = ^RPBroadcastConfiguration;
{$endif}

{$ifdef CLASSES}

type
  RPBroadcastConfiguration = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    procedure setClipDuration(newValue: NSTimeInterval); message 'setClipDuration:';
    function clipDuration: NSTimeInterval; message 'clipDuration';
    procedure setVideoCompressionProperties(newValue: NSDictionary *>Ptr); message 'setVideoCompressionProperties:';
    function videoCompressionProperties: NSDictionary *>Ptr; message 'videoCompressionProperties';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

