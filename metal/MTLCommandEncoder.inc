{ Parsed from Metal.framework MTLCommandEncoder.h }

{$ifdef TYPES}
type
  MTLCommandEncoderProtocolPtr = ^MTLCommandEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCommandEncoderProtocol = objcprotocol external name 'MTLCommandEncoder' (NSObjectProtocol)
    function device: MTLDeviceProtocol; message 'device';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure endEncoding; message 'endEncoding';
    procedure insertDebugSignpost (string_: NSString); message 'insertDebugSignpost:';
    procedure pushDebugGroup (string_: NSString); message 'pushDebugGroup:';
    procedure popDebugGroup; message 'popDebugGroup';
  end;
{$endif}

