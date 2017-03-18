{ Parsed from Metal.framework MTLDrawable.h }

{$ifdef TYPES}
type
  MTLDrawableProtocolPtr = ^MTLDrawableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLDrawableProtocol = objcprotocol external name 'MTLDrawable' (NSObjectProtocol)
    procedure present; message 'present';
    procedure presentAtTime (presentationTime: CFTimeInterval); message 'presentAtTime:';
  end;
{$endif}

