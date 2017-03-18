{ Parsed from UIKit.framework UITextChecker.h }

{ Types from UITextChecker }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  UITextCheckerPtr = ^UITextChecker;
{$endif}

{$ifdef CLASSES}

type
  UITextChecker = objcclass external (NSObject)
  public
    function rangeOfMisspelledWordInString_range_startingAt_wrap_language (stringToCheck: NSString; range: NSRange; startingOffset: NSInteger; wrapFlag: boolean; language: NSString): NSRange; message 'rangeOfMisspelledWordInString:range:startingAt:wrap:language:';
    function guessesForWordRange_inString_language (range: NSRange; string_: NSString; language: NSString): nullable NSString *ProtocolPtr; message 'guessesForWordRange:inString:language:';
    function completionsForPartialWordRange_inString_language (range: NSRange; string_: NSString; language: NSString): nullable NSString *ProtocolPtr; message 'completionsForPartialWordRange:inString:language:';
    procedure ignoreWord (wordToIgnore: NSString); message 'ignoreWord:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    procedure setIgnoredWords(newValue: NSString *ProtocolPtr); message 'setIgnoredWords:';
    function ignoredWords: NSString *ProtocolPtr; message 'ignoredWords';
    {$else}
    function ignoredWords: nullable NSArrayPtr; message 'ignoredWords';
    procedure setIgnoredWords (words: nullable NSArrayPtr); message 'setIgnoredWords:';
    {$endif}
    class procedure learnWord (word: NSString); message 'learnWord:';
    class function hasLearnedWord (word: NSString): boolean; message 'hasLearnedWord:';
    class procedure unlearnWord (word: NSString); message 'unlearnWord:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function availableLanguages: NSString *ProtocolPtr; message 'availableLanguages';
    {$else}
    class function availableLanguages: NSArray; message 'availableLanguages';
    {$endif}
  end;
{$endif}

