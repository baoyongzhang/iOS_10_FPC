{ Parsed from CoreFoundation.framework CFStringTokenizer.h }

{$if  not (defined(__COREFOUNDATION_CFSTRINGTOKENIZER__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFSTRINGTOKENIZER__ = 1;

type
  CFStringTokenizerRef = OpaqueType;
  CFStringTokenizerTokenType = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFStringTokenizerCopyBestStringLanguage(string_: CFStringRef; range: CFRange): CFStringRef; cdecl; external; { available in 10_5, 3_0 }
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef FUNCTIONS}
function CFStringTokenizerCreate(alloc: CFAllocatorRef; string_: CFStringRef; range: CFRange; options: CFOptionFlags; locale: CFLocaleRef): CFStringTokenizerRef; cdecl; external; { available in 10_5, 3_0 }
procedure CFStringTokenizerSetString(tokenizer: CFStringTokenizerRef; string_: CFStringRef; range: CFRange); cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerGoToTokenAtIndex(tokenizer: CFStringTokenizerRef; index: CFIndex): CFStringTokenizerTokenType; cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerAdvanceToNextToken(tokenizer: CFStringTokenizerRef): CFStringTokenizerTokenType; cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerGetCurrentTokenRange(tokenizer: CFStringTokenizerRef): CFRange; cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerCopyCurrentTokenAttribute(tokenizer: CFStringTokenizerRef; attribute: CFOptionFlags): CFTypeRef; cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerGetCurrentSubTokens(tokenizer: CFStringTokenizerRef; var ranges: CFRange; maxRangeLength: CFIndex; derivedSubTokens: CFMutableArrayRef): CFIndex; cdecl; external; { available in 10_5, 3_0 }
{$endif}

{$endif}
