{ Parsed from Foundation.framework NSLinguisticTagger.h }

{$ifdef TYPES}
type
  NSLinguisticTaggerPtr = ^NSLinguisticTagger;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSLinguisticTagSchemeTokenType: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagSchemeLexicalClass: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagSchemeNameType: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagSchemeNameTypeOrLexicalClass: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagSchemeLemma: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagSchemeLanguage: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagSchemeScript: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagWord: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagPunctuation: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagWhitespace: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagOther: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagNoun: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagVerb: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagAdjective: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagAdverb: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagPronoun: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagDeterminer: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagParticle: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagPreposition: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagNumber: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagConjunction: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagInterjection: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagClassifier: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagIdiom: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagOtherWord: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagSentenceTerminator: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagOpenQuote: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagCloseQuote: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagOpenParenthesis: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagCloseParenthesis: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagWordJoiner: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagDash: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagOtherPunctuation: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagParagraphBreak: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagOtherWhitespace: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagPersonalName: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagPlaceName: NSString { available in 10_7, 5_0 }; cvar; external;
  NSLinguisticTagOrganizationName: NSString { available in 10_7, 5_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSLinguisticTaggerOptions = NSUInteger;
  NSLinguisticTaggerOptionsPtr = ^NSLinguisticTaggerOptions;

const
  NSLinguisticTaggerOmitWords = 1 shl 0;
  NSLinguisticTaggerOmitPunctuation = 1 shl 1;
  NSLinguisticTaggerOmitWhitespace = 1 shl 2;
  NSLinguisticTaggerOmitOther = 1 shl 3;
  NSLinguisticTaggerJoinNames = 1 shl 4;
{$endif}

{$ifdef CLASSES}

type
  NSLinguisticTagger = objcclass external (NSObject)
  private
    _schemes: NSArray;
    _options: NSUInteger;
    _string: NSString;
    _orthographyArray: id;
    _tokenArray: id;
    _reserved: id;
  public
    function initWithTagSchemes_options (tagSchemes: NSString *ProtocolPtr; opts: NSUInteger): instancetype; message 'initWithTagSchemes:options:'; { available in 10_7, 5_0 }
    function tagSchemes: NSString *ProtocolPtr; message 'tagSchemes';
    procedure setString(newValue: NSString); message 'setString:';
    function string_: NSString; message 'string';
    class function availableTagSchemesForLanguage (language: NSString): NSString *ProtocolPtr; message 'availableTagSchemesForLanguage:'; { available in 10_7, 5_0 }
    procedure setOrthography_range (orthography: nullable NSOrthographyPtr; range: NSRange); message 'setOrthography:range:'; { available in 10_7, 5_0 }
    function orthographyAtIndex_effectiveRange (charIndex: NSUInteger; effectiveRange: nullable NSRangePointer): nullable NSOrthographyPtr; message 'orthographyAtIndex:effectiveRange:'; { available in 10_7, 5_0 }
    procedure stringEditedInRange_changeInLength (newRange: NSRange; delta: NSInteger); message 'stringEditedInRange:changeInLength:'; { available in 10_7, 5_0 }
    procedure enumerateTagsInRange_scheme_options_usingBlock (range: NSRange; tagScheme: NSString; opts: NSLinguisticTaggerOptions; block: void (NS_NOESCAPE ^)(NSString *tag, NSRange tokenRange, NSRange sentenceRange, BOOL *stop)); message 'enumerateTagsInRange:scheme:options:usingBlock:'; { available in 10_7, 5_0 }
    function sentenceRangeForRange (range: NSRange): NSRange; message 'sentenceRangeForRange:'; { available in 10_7, 5_0 }
    function tagAtIndex_scheme_tokenRange_sentenceRange (charIndex: NSUInteger; tagScheme: NSString; tokenRange: nullable NSRangePointer; sentenceRange: nullable NSRangePointer): nullable NSStringPtr; message 'tagAtIndex:scheme:tokenRange:sentenceRange:'; { available in 10_7, 5_0 }
    function tagsInRange_scheme_options_tokenRanges (range: NSRange; tagScheme: NSString; opts: NSLinguisticTaggerOptions; tokenRanges: NSValue *Protocol * _Nullable * _Nullable): NSString *ProtocolPtr; message 'tagsInRange:scheme:options:tokenRanges:'; { available in 10_7, 5_0 }
    function possibleTagsAtIndex_scheme_tokenRange_sentenceRange_scores (charIndex: NSUInteger; tagScheme: NSString; tokenRange: nullable NSRangePointer; sentenceRange: nullable NSRangePointer; scores: NSValue *Protocol * _Nullable * _Nullable): nullable NSString *ProtocolPtr; message 'possibleTagsAtIndex:scheme:tokenRange:sentenceRange:scores:'; { available in 10_7, 5_0 }
  end;


type
  NSLinguisticAnalysis = objccategory external (NSString)
    function linguisticTagsInRange_scheme_options_orthography_tokenRanges (range: NSRange; tagScheme: NSString; opts: NSLinguisticTaggerOptions; orthography: nullable NSOrthographyPtr; tokenRanges: NSValue *Protocol * _Nullable * _Nullable): NSString *ProtocolPtr; message 'linguisticTagsInRange:scheme:options:orthography:tokenRanges:'; { available in 10_7, 5_0 }
    procedure enumerateLinguisticTagsInRange_scheme_options_orthography_usingBlock (range: NSRange; tagScheme: NSString; opts: NSLinguisticTaggerOptions; orthography: nullable NSOrthographyPtr; block: void (NS_NOESCAPE ^)(NSString *tag, NSRange tokenRange, NSRange sentenceRange, BOOL *stop)); message 'enumerateLinguisticTagsInRange:scheme:options:orthography:usingBlock:'; { available in 10_7, 5_0 }
  end;
{$endif}

