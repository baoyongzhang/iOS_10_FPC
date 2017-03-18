{ Parsed from JavaScriptCore.framework JSStringRef.h }

{$ifndef JSStringRef_h}

{$if  not (defined(WIN32)) and not (defined(_WIN32))}
{$ifdef TYPES}
type
  JSChar = cushort;
  JSCharPtr = ^JSChar;
{$endif}

{$else}
{$ifdef TYPES}
type
  JSChar = wchar_t;
  JSCharPtr = ^JSChar;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function JSStringCreateWithCharacters(chars: JSCharPtr; numChars: size_t): JSStringRef; cdecl; external;
function JSStringCreateWithUTF8CString(string_: PChar): JSStringRef; cdecl; external;
function JSStringRetain(string_: JSStringRef): JSStringRef; cdecl; external;
procedure JSStringRelease(string_: JSStringRef); cdecl; external;
function JSStringGetLength(string_: JSStringRef): size_t; cdecl; external;
function JSStringGetCharactersPtr(string_: JSStringRef): JSCharPtr; cdecl; external;
function JSStringGetMaximumUTF8CStringSize(string_: JSStringRef): size_t; cdecl; external;
function JSStringGetUTF8CString(string_: JSStringRef; buffer: PChar; bufferSize: size_t): size_t; cdecl; external;
function JSStringIsEqual(a: JSStringRef; b: JSStringRef): cbool; cdecl; external;
function JSStringIsEqualToUTF8CString(a: JSStringRef; b: PChar): cbool; cdecl; external;
{$endif}

{$endif}
