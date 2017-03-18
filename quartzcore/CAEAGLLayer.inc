{ Parsed from QuartzCore.framework CAEAGLLayer.h }

{$ifdef TYPES}
type
  CAEAGLLayerPtr = ^CAEAGLLayer;
{$endif}

{$ifdef CLASSES}

type
  CAEAGLLayer = objcclass external (CALayer, EAGLDrawableProtocol)
  private
    _win: _CAEAGLNativeWindowPtr;
  public
    procedure setPresentsWithTransaction(newValue: boolean); message 'setPresentsWithTransaction:';
    function presentsWithTransaction: boolean; message 'presentsWithTransaction';
  end;
{$endif}

