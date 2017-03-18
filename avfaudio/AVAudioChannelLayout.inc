{ Parsed from AVFAudio.framework AVAudioChannelLayout.h }

{$ifdef TYPES}
type
  AVAudioChannelLayoutPtr = ^AVAudioChannelLayout;
{$endif}

{$ifdef CLASSES}

type
  AVAudioChannelLayout = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _layoutTag: AudioChannelLayoutTag;
    _layout: AudioChannelLayoutPtr;
    _reserved: pointer;
  public
    function init: instancetype; message 'init';
    function initWithLayoutTag (layoutTag: AudioChannelLayoutTag): instancetype; message 'initWithLayoutTag:';
    function initWithLayout (layout: AudioChannelLayoutPtr): instancetype; message 'initWithLayout:'; { NS_DESIGNATED_INITIALIZER }
    function isEqual (object_: id): boolean; message 'isEqual:';
    class function layoutWithLayoutTag (layoutTag: AudioChannelLayoutTag): instancetype; message 'layoutWithLayoutTag:';
    class function layoutWithLayout (layout: AudioChannelLayoutPtr): instancetype; message 'layoutWithLayout:';
    function layoutTag: AudioChannelLayoutTag; message 'layoutTag';
    function layout: AudioChannelLayoutPtr; message 'layout';
    function channelCount: AVAudioChannelCount; message 'channelCount';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

