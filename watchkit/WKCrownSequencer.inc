{ Parsed from WatchKit.framework WKCrownSequencer.h }

{$ifdef TYPES}
type
  WKCrownSequencerPtr = ^WKCrownSequencer;
  WKCrownDelegateProtocolPtr = ^WKCrownDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  WKCrownSequencer = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: WKCrownDelegateProtocol); message 'setDelegate:';
    function delegate: WKCrownDelegateProtocol; message 'delegate';
    function rotationsPerSecond: double; message 'rotationsPerSecond';
    function isIdle: boolean; message 'isIdle';
    function init: instancetype; message 'init';
    procedure focus; message 'focus';
    procedure resignFocus; message 'resignFocus';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  WKCrownDelegateProtocol = objcprotocol external name 'WKCrownDelegate' (NSObjectProtocol)
  optional
    procedure crownDidRotate_rotationalDelta (crownSequencer: nullable WKCrownSequencerPtr; rotationalDelta: double); message 'crownDidRotate:rotationalDelta:';
    procedure crownDidBecomeIdle (crownSequencer: nullable WKCrownSequencerPtr); message 'crownDidBecomeIdle:';
  end;
{$endif}

