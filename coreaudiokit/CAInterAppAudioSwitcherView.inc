{ Parsed from CoreAudioKit.framework CAInterAppAudioSwitcherView.h }

{$ifdef TYPES}
type
  CAInterAppAudioSwitcherViewPtr = ^CAInterAppAudioSwitcherView;
{$endif}

{$ifdef CLASSES}

type
  CAInterAppAudioSwitcherView = objcclass external (UIView)
  public
    procedure setShowingAppNames(newValue: boolean); message 'setShowingAppNames:';
    function isShowingAppNames: boolean; message 'isShowingAppNames';
    procedure setOutputAudioUnit (au: nullable AudioUnit); message 'setOutputAudioUnit:';
    function contentWidth: CGFloat; message 'contentWidth';
  end;
{$endif}

