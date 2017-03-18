{ Parsed from AVFAudio.framework AVAudioUnitComponent.h }

{ Types from AVAudioUnitComponent }
{$ifdef TYPES}



{$endif}


{ Types from AVAudioUnitComponentManager }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioUnitComponentPtr = ^AVAudioUnitComponent;
  AVAudioUnitComponentManagerPtr = ^AVAudioUnitComponentManager;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOUNITCOMPONENT_HAVE_AUDIOCOMPONENT = 1;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AVAudioUnitComponent = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function name: NSString; message 'name';
    function typeName: NSString; message 'typeName';
    function localizedTypeName: NSString; message 'localizedTypeName';
    function manufacturerName: NSString; message 'manufacturerName';
    function version: NSUInteger; message 'version';
    function versionString: NSString; message 'versionString';
    function componentURL: NSURL; message 'componentURL';
    function availableArchitectures: NSNumber *ProtocolPtr; message 'availableArchitectures';
    function isSandboxSafe: boolean; message 'isSandboxSafe';
    function hasMIDIInput: boolean; message 'hasMIDIInput';
    function hasMIDIOutput: boolean; message 'hasMIDIOutput';
    {$if defined(AVAUDIOUNITCOMPONENT_HAVE_AUDIOCOMPONENT)}
    function audioComponent: AudioComponent; message 'audioComponent';
    {$endif}
    procedure setUserTagNames(newValue: NSString *ProtocolPtr); message 'setUserTagNames:';
    function userTagNames: NSString *ProtocolPtr; message 'userTagNames';
    function allTagNames: NSString *ProtocolPtr; message 'allTagNames';
    {$if defined(AVAUDIOUNITCOMPONENT_HAVE_AUDIOCOMPONENT)}
    function audioComponentDescription: AudioComponentDescription; message 'audioComponentDescription';
    {$endif}
    function iconURL: NSURL; message 'iconURL';
    {$if  not defined(TARGET_OS_IPHONE)}
    function icon: NSImage; message 'icon';
    {$endif}
    function passesAUVal: boolean; message 'passesAUVal';
    function hasCustomView: boolean; message 'hasCustomView';
    function configurationDictionary: NSDictionary; message 'configurationDictionary';
    function supportsNumberInputChannels_outputChannels (numInputChannels: NSInteger; numOutputChannels: NSInteger): boolean; message 'supportsNumberInputChannels:outputChannels:'; { available in 10_10, NA }
  end;

type
  AVAudioUnitComponentManager = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function tagNames: NSString *ProtocolPtr; message 'tagNames';
    function standardLocalizedTagNames: NSString *ProtocolPtr; message 'standardLocalizedTagNames';
    class function sharedAudioUnitComponentManager: instancetype; message 'sharedAudioUnitComponentManager';
    function componentsMatchingPredicate (predicate: NSPredicate): AVAudioUnitComponent *ProtocolPtr; message 'componentsMatchingPredicate:';
    function componentsPassingTest (testHandler: OpaqueCBlock): AVAudioUnitComponent *ProtocolPtr; message 'componentsPassingTest:';
    {$if defined(AVAUDIOUNITCOMPONENT_HAVE_AUDIOCOMPONENT)}
    function componentsMatchingDescription (desc: AudioComponentDescription): AVAudioUnitComponent *ProtocolPtr; message 'componentsMatchingDescription:';
    {$endif}
  end;
{$endif}

