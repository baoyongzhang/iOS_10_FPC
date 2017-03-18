{ Parsed from Intents.framework INVocabulary.h }

{$ifdef TYPES}
type
  INVocabularyPtr = ^INVocabulary;
{$endif}

{$ifdef TYPES}
type
  INVocabularyStringType = NSInteger;
  INVocabularyStringTypePtr = ^INVocabularyStringType;

const
  INVocabularyStringTypeContactName = 1;
  INVocabularyStringTypeContactGroupName = 2;
  INVocabularyStringTypePhotoTag = 100;
  INVocabularyStringTypePhotoAlbumName = 101;
  INVocabularyStringTypeWorkoutActivityName = 200;
  INVocabularyStringTypeCarProfileName = 300;
{$endif}

{$ifdef CLASSES}

type
  INVocabulary = objcclass external (NSObject)
  public
    class function sharedVocabulary: instancetype; message 'sharedVocabulary';
    procedure setVocabularyStrings_ofType (vocabulary: NSString *ProtocolPtr; type_: INVocabularyStringType); message 'setVocabularyStrings:ofType:';
    procedure removeAllVocabularyStrings NS_EXTENSION_UNAVAILABLE("INVocabulary is not available to extensions. The main app is responsible for providing all vocabulary."); message 'removeAllVocabularyStrings NS_EXTENSION_UNAVAILABLE("INVocabulary is not available to extensions. The main app is responsible for providing all vocabulary.")';
  end;
{$endif}

