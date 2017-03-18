{ Parsed from CoreFoundation.framework CFUtilities.h }

{$if  not (defined(__COREFOUNDATION_CFUTILITIES__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFUTILITIES__ = 1;
{$endif}

{$ifdef FUNCTIONS}
function CFCopyHomeDirectoryURL: CFURLRef; cdecl; external; { available in 5_0 }
{$endif}

{$endif}
