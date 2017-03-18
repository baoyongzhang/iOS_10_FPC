{ Parsed from CFNetwork.framework CFNetDiagnostics.h }

{$ifndef __CFNETDIAGNOSTICS__}

{$ifdef TYPES}
type
  CFNetDiagnosticRef = OpaqueType;
  CFNetDiagnosticStatusValues = cint;
  CFNetDiagnosticStatusValuesPtr = ^CFNetDiagnosticStatusValues;

const
  kCFNetDiagnosticNoErr = 0;
  kCFNetDiagnosticErr = -66560;
  kCFNetDiagnosticConnectionUp = -66559;
  kCFNetDiagnosticConnectionIndeterminate = -66558;
  kCFNetDiagnosticConnectionDown = -66557;

type
  CFNetDiagnosticStatus = CFIndex;
  CFNetDiagnosticStatusPtr = ^CFNetDiagnosticStatus;
{$endif}

{$ifdef FUNCTIONS}
function CFNetDiagnosticCreateWithStreams(alloc: CFAllocatorRef; readStream: CFReadStreamRef; writeStream: CFWriteStreamRef): CFNetDiagnosticRef; cdecl; external; { available in 10_4, 2_0 }
function CFNetDiagnosticCreateWithURL(alloc: CFAllocatorRef; url: CFURLRef): CFNetDiagnosticRef; cdecl; external; { available in 10_4, 2_0 }
procedure CFNetDiagnosticSetName(details: CFNetDiagnosticRef; name: CFStringRef); cdecl; external; { available in 10_4, 2_0 }
function CFNetDiagnosticDiagnoseProblemInteractively(details: CFNetDiagnosticRef): CFNetDiagnosticStatus; cdecl; external; { available in 10_4, 2_0 }
function CFNetDiagnosticCopyNetworkStatusPassively(details: CFNetDiagnosticRef; description: CFStringRef): CFNetDiagnosticStatus; cdecl; external; { available in 10_4, 2_0 }
{$endif}

{$endif}
