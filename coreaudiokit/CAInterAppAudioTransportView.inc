{ Parsed from CoreAudioKit.framework CAInterAppAudioTransportView.h }

{$ifdef TYPES}
type
  CAInterAppAudioTransportViewPtr = ^CAInterAppAudioTransportView;
{$endif}

{$ifdef CLASSES}

type
  CAInterAppAudioTransportView = objcclass external (UIView)
  public
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    function isPlaying: boolean; message 'isPlaying';
    function isRecording: boolean; message 'isRecording';
    function isConnected: boolean; message 'isConnected';
    procedure setLabelColor(newValue: UIColor); message 'setLabelColor:';
    function labelColor: UIColor; message 'labelColor';
    procedure setCurrentTimeLabelFont(newValue: UIFont); message 'setCurrentTimeLabelFont:';
    function currentTimeLabelFont: UIFont; message 'currentTimeLabelFont';
    procedure setRewindButtonColor(newValue: UIColor); message 'setRewindButtonColor:';
    function rewindButtonColor: UIColor; message 'rewindButtonColor';
    procedure setPlayButtonColor(newValue: UIColor); message 'setPlayButtonColor:';
    function playButtonColor: UIColor; message 'playButtonColor';
    procedure setPauseButtonColor(newValue: UIColor); message 'setPauseButtonColor:';
    function pauseButtonColor: UIColor; message 'pauseButtonColor';
    procedure setRecordButtonColor(newValue: UIColor); message 'setRecordButtonColor:';
    function recordButtonColor: UIColor; message 'recordButtonColor';
    procedure setOutputAudioUnit (au: AudioUnit); message 'setOutputAudioUnit:';
  end;
{$endif}

