{ Parsed from WatchKit.framework WKInterfaceController.h }

{$ifdef TYPES}
type
  WKInterfaceControllerPtr = ^WKInterfaceController;
  WKUserNotificationInterfaceControllerPtr = ^WKUserNotificationInterfaceController;
{$endif}

{$ifdef TYPES}
type
  WKUserNotificationInterfaceType = NSInteger;
  WKUserNotificationInterfaceTypePtr = ^WKUserNotificationInterfaceType;

const
  WKUserNotificationInterfaceTypeDefault = 0;
  WKUserNotificationInterfaceTypeCustom = 1;

type
  WKMenuItemIcon = NSInteger;
  WKMenuItemIconPtr = ^WKMenuItemIcon;

const
  WKMenuItemIconAccept = 0;
  WKMenuItemIconAdd = 1;
  WKMenuItemIconBlock = 2;
  WKMenuItemIconDecline = 3;
  WKMenuItemIconInfo = 4;
  WKMenuItemIconMaybe = 5;
  WKMenuItemIconMore = 6;
  WKMenuItemIconMute = 7;
  WKMenuItemIconPause = 8;
  WKMenuItemIconPlay = 9;
  WKMenuItemIconRepeat = 10;
  WKMenuItemIconResume = 11;
  WKMenuItemIconShare = 12;
  WKMenuItemIconShuffle = 13;
  WKMenuItemIconSpeaker = 14;
  WKMenuItemIconTrash = 15;

type
  WKTextInputMode = NSInteger;
  WKTextInputModePtr = ^WKTextInputMode;

const
  WKTextInputModePlain = 0;
  WKTextInputModeAllowEmoji = 1;
  WKTextInputModeAllowAnimatedEmoji = 2;

type
  WKAlertControllerStyle = NSInteger;
  WKAlertControllerStylePtr = ^WKAlertControllerStyle;

const
  WKAlertControllerStyleAlert = 0;
  WKAlertControllerStyleSideBySideButtonsAlert = 1;
  WKAlertControllerStyleActionSheet = 2;

type
  WKVideoGravity = NSInteger;
  WKVideoGravityPtr = ^WKVideoGravity;

const
  WKVideoGravityResizeAspect = 0;
  WKVideoGravityResizeAspectFill = 1;
  WKVideoGravityResize = 2;

type
  WKAudioRecorderPreset = NSInteger;
  WKAudioRecorderPresetPtr = ^WKAudioRecorderPreset;

const
  WKAudioRecorderPresetNarrowBandSpeech = 0;
  WKAudioRecorderPresetWideBandSpeech = 1;
  WKAudioRecorderPresetHighQualityAudio = 2;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceController = objcclass external (NSObject)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure awakeWithContext (context: nullable id); message 'awakeWithContext:';
    function contentFrame: CGRect; message 'contentFrame';
    function crownSequencer: WKCrownSequencer; message 'crownSequencer';
    procedure willActivate; message 'willActivate';
    procedure didDeactivate; message 'didDeactivate';
    procedure didAppear; message 'didAppear'; { available in 2.0 }
    procedure willDisappear; message 'willDisappear'; { available in 2.0 }
    procedure pickerDidFocus (picker: WKInterfacePicker); message 'pickerDidFocus:'; { available in 2.0 }
    procedure pickerDidResignFocus (picker: WKInterfacePicker); message 'pickerDidResignFocus:'; { available in 2.0 }
    procedure pickerDidSettle (picker: WKInterfacePicker); message 'pickerDidSettle:'; { available in 2.0 }
    procedure table_didSelectRowAtIndex (table: WKInterfaceTable; rowIndex: NSInteger); message 'table:didSelectRowAtIndex:';
    procedure handleActionWithIdentifier_forNotification (identifier: nullable NSStringPtr; notification: UNNotification); message 'handleActionWithIdentifier:forNotification:'; { available in 10.0 }
    procedure handleUserActivity (userInfo: nullable NSDictionaryPtr); message 'handleUserActivity:';
    procedure setTitle (title: nullable NSStringPtr); message 'setTitle:';
    procedure pushControllerWithName_context (name: NSString; context: nullable id); message 'pushControllerWithName:context:';
    procedure popController; message 'popController';
    procedure popToRootController; message 'popToRootController';
    class procedure reloadRootControllersWithNames_contexts (names: NSString*ProtocolPtr; contexts: nullable NSArrayPtr); message 'reloadRootControllersWithNames:contexts:';
    procedure becomeCurrentPage; message 'becomeCurrentPage';
    procedure presentControllerWithName_context (name: NSString; context: nullable id); message 'presentControllerWithName:context:';
    procedure presentControllerWithNames_contexts (names: NSString*ProtocolPtr; contexts: nullable NSArrayPtr); message 'presentControllerWithNames:contexts:';
    procedure dismissController; message 'dismissController';
    procedure presentTextInputControllerWithSuggestions_allowedInputMode_completion (suggestions: nullable NSString*ProtocolPtr; inputMode: WKTextInputMode; completion: OpaqueCBlock); message 'presentTextInputControllerWithSuggestions:allowedInputMode:completion:';
    procedure presentTextInputControllerWithSuggestionsForLanguage_allowedInputMode_completion (suggestionsHandler: NSArray * __nullable (^ __nullable)(NSString *inputLanguage); inputMode: WKTextInputMode; completion: OpaqueCBlock); message 'presentTextInputControllerWithSuggestionsForLanguage:allowedInputMode:completion:';
    procedure dismissTextInputController; message 'dismissTextInputController';
    procedure presentMediaPlayerControllerWithURL_options_completion (URL: NSURL; options: nullable NSDictionaryPtr; completion: OpaqueCBlock); message 'presentMediaPlayerControllerWithURL:options:completion:'; { available in 2.0 }
    procedure dismissMediaPlayerController; message 'dismissMediaPlayerController'; { available in 2.0 }
    procedure presentAudioRecorderControllerWithOutputURL_preset_options_completion (URL: NSURL; preset: WKAudioRecorderPreset; options: nullable NSDictionaryPtr; completion: OpaqueCBlock); message 'presentAudioRecorderControllerWithOutputURL:preset:options:completion:'; { available in 2.0 }
    procedure dismissAudioRecorderController; message 'dismissAudioRecorderController'; { available in 2.0 }
    function contextForSegueWithIdentifier (segueIdentifier: NSString): nullable id; message 'contextForSegueWithIdentifier:';
    function contextsForSegueWithIdentifier (segueIdentifier: NSString): nullable NSArrayPtr; message 'contextsForSegueWithIdentifier:';
    function contextForSegueWithIdentifier_inTable_rowIndex (segueIdentifier: NSString; table: WKInterfaceTable; rowIndex: NSInteger): nullable id; message 'contextForSegueWithIdentifier:inTable:rowIndex:';
    function contextsForSegueWithIdentifier_inTable_rowIndex (segueIdentifier: NSString; table: WKInterfaceTable; rowIndex: NSInteger): nullable NSArrayPtr; message 'contextsForSegueWithIdentifier:inTable:rowIndex:';
    procedure animateWithDuration_animations (duration: NSTimeInterval; animations: OpaqueCBlock); message 'animateWithDuration:animations:'; { available in 2.0 }
    procedure presentAlertControllerWithTitle_message_preferredStyle_actions (title: nullable NSStringPtr; message_: nullable NSStringPtr; preferredStyle: WKAlertControllerStyle; actions: WKAlertAction *ProtocolPtr); message 'presentAlertControllerWithTitle:message:preferredStyle:actions:'; { available in 2.0 }
    procedure presentAddPassesControllerWithPasses_completion (passes: PKPass *ProtocolPtr; completion: OpaqueCBlock); message 'presentAddPassesControllerWithPasses:completion:'; { available in 2.0 }
    procedure dismissAddPassesController; message 'dismissAddPassesController'; { available in 2.0 }
    procedure addMenuItemWithImage_title (image: UIImage; title: NSString); message 'addMenuItemWithImage:title:';
    procedure addMenuItemWithImageNamed_title_action (imageName: NSString; title: NSString; action: SEL); message 'addMenuItemWithImageNamed:title:action:';
    procedure addMenuItemWithItemIcon_title_action (itemIcon: WKMenuItemIcon; title: NSString; action: SEL); message 'addMenuItemWithItemIcon:title:action:';
    procedure clearAllMenuItems; message 'clearAllMenuItems';
    procedure updateUserActivity_userInfo_webpageURL (type_: NSString; userInfo: nullable NSDictionaryPtr; webpageURL: nullable NSURLPtr); message 'updateUserActivity:userInfo:webpageURL:';
    procedure invalidateUserActivity; message 'invalidateUserActivity';
    class function openParentApplication_reply (userInfo: NSDictionary; reply: OpaqueCBlock): boolean; message 'openParentApplication:reply:'; { available in 8.2 }
    procedure beginGlanceUpdates; message 'beginGlanceUpdates'; { available in 2.0 }
    procedure endGlanceUpdates; message 'endGlanceUpdates'; { available in 2.0 }
    procedure handleActionWithIdentifier_forRemoteNotification (identifier: nullable NSStringPtr; remoteNotification: NSDictionary); message 'handleActionWithIdentifier:forRemoteNotification:'; deprecated 'in 2.0, 3.0, 8.2, 10.0, "use UNUserNotificationCenterDelegate"';
    procedure handleActionWithIdentifier_forLocalNotification (identifier: nullable NSStringPtr; localNotification: UILocalNotification); message 'handleActionWithIdentifier:forLocalNotification:'; deprecated 'in 2.0, 3.0, 8.2, 10.0, "use UNUserNotificationCenterDelegate"';
  end;

type
  WKUserNotificationInterfaceController = objcclass external (WKInterfaceController)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure didReceiveNotification_withCompletion (notification: UNNotification; completionHandler: OpaqueCBlock); message 'didReceiveNotification:withCompletion:'; { available in 3.0, 10.0 }
    function suggestionsForResponseToActionWithIdentifier_forNotification_inputLanguage (identifier: NSString; notification: UNNotification; inputLanguage: NSString): nonnull NSString *ProtocolPtr; message 'suggestionsForResponseToActionWithIdentifier:forNotification:inputLanguage:'; { available in 3.0 }
    procedure didReceiveRemoteNotification_withCompletion (remoteNotification: NSDictionary; completionHandler: OpaqueCBlock); message 'didReceiveRemoteNotification:withCompletion:'; deprecated 'in 2.0, 3.0, 8.2, 10.0, "use didReceiveNotification:withCompletion:"';
    procedure didReceiveLocalNotification_withCompletion (localNotification: UILocalNotification; completionHandler: OpaqueCBlock); message 'didReceiveLocalNotification:withCompletion:'; deprecated 'in 2.0, 3.0, 8.2, 10.0, "use didReceiveNotification:withCompletion:"';
    function suggestionsForResponseToActionWithIdentifier_forRemoteNotification_inputLanguage (identifier: NSString; remoteNotification: NSDictionary; inputLanguage: NSString): nonnull NSString *ProtocolPtr; message 'suggestionsForResponseToActionWithIdentifier:forRemoteNotification:inputLanguage:'; { available in 2.0 }
    function suggestionsForResponseToActionWithIdentifier_forLocalNotification_inputLanguage (identifier: NSString; localNotification: UILocalNotification; inputLanguage: NSString): nonnull NSString *ProtocolPtr; message 'suggestionsForResponseToActionWithIdentifier:forLocalNotification:inputLanguage:'; { available in 2.0 }
  end;
{$endif}

