{ Parsed from SpriteKit.framework SpriteKitBase.h }

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  SKVIEW_AVAILABLE = 0;
{$endif}

{$else}
{$ifdef TYPES}
const
  SKVIEW_AVAILABLE = 1;
{$endif}

{$endif}

{$ifdef TYPES}
const
  SK_AVAILABLE = __OSX_AVAILABLE_STARTING;
{$endif}

{$if defined(TARGET_OS_IPHONE)}

{$else}
{$ifdef TYPES}
const
  SKColor = NSColor;
{$endif}

{$endif}
{$ifdef TYPES}
type
  vector_float3 = single;
  vector_float3Ptr = ^vector_float3;
{$endif}

{$ifndef CGVECTOR_DEFINED}
{$ifdef TYPES}
const
  CGVECTOR_DEFINED = 1;

type
  CGVector = record
    dx: CGFloat;
    dy: CGFloat;
  end;
type
  CGVectorPtr = ^CGVector;
{$endif}

{$endif}
