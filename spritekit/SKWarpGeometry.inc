{ Parsed from SpriteKit.framework SKWarpGeometry.h }

{ Types from SKWarpGeometryGrid }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  SKWarpGeometryPtr = ^SKWarpGeometry;
  SKWarpGeometryGridPtr = ^SKWarpGeometryGrid;
  SKWarpableProtocolPtr = ^SKWarpableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SKWarpableProtocol = objcprotocol external name 'SKWarpable' (NSObjectProtocol)
    procedure setWarpGeometry(newValue: SKWarpGeometry); message 'setWarpGeometry:';
    function warpGeometry: SKWarpGeometry; message 'warpGeometry';
    procedure setSubdivisionLevels(newValue: NSInteger); message 'setSubdivisionLevels:';
    function subdivisionLevels: NSInteger; message 'subdivisionLevels';
  end;
{$endif}

{$ifdef CLASSES}

type
  SKWarpGeometry = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;

type
  SKWarpGeometryGrid = objcclass external (SKWarpGeometry, NSCodingProtocol)
  public
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function grid: instancetype; message 'grid';
    class function gridWithColumns_rows (cols: NSInteger; rows: NSInteger): instancetype; message 'gridWithColumns:rows:';
    {$if ((defined(SWIFT_SDK_OVERLAY_SPRITEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_SPRITEKIT_EPOCH >= 1))}
    class function gridWithColumns_rows_sourcePositions_destPositions (cols: NSInteger; rows: NSInteger; sourcePositions: nullable  vector_float2Ptr; destPositions: nullable  vector_float2Ptr): instancetype; message 'gridWithColumns:rows:sourcePositions:destPositions:';
    function initWithColumns_rows_sourcePositions_destPositions (cols: NSInteger; rows: NSInteger; sourcePositions: nullable  vector_float2Ptr; destPositions: nullable  vector_float2Ptr): instancetype; message 'initWithColumns:rows:sourcePositions:destPositions:'; { NS_DESIGNATED_INITIALIZER }
    {$else}
    class function gridWithColumns_rows_sourcePositions_destPositions (cols: NSInteger; rows: NSInteger; sourcePositions: nullable  vector_float2Ptr; destPositions: nullable  vector_float2Ptr): instancetype; message 'gridWithColumns:rows:sourcePositions:destPositions:';
    function initWithColumns_rows_sourcePositions_destPositions (cols: NSInteger; rows: NSInteger; sourcePositions: nullable  vector_float2Ptr; destPositions: nullable  vector_float2Ptr): instancetype; message 'initWithColumns:rows:sourcePositions:destPositions:'; { NS_DESIGNATED_INITIALIZER }
    {$endif}
    function numberOfColumns: NSInteger; message 'numberOfColumns';
    function numberOfRows: NSInteger; message 'numberOfRows';
    function vertexCount: NSInteger; message 'vertexCount';
    function sourcePositionAtIndex (index: NSInteger): vector_float2; message 'sourcePositionAtIndex:';
    function destPositionAtIndex (index: NSInteger): vector_float2; message 'destPositionAtIndex:';
    {$if ((defined(SWIFT_SDK_OVERLAY_SPRITEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_SPRITEKIT_EPOCH >= 1))}
    function gridByReplacingSourcePositions (sourcePositions: vector_float2Ptr): instancetype; message 'gridByReplacingSourcePositions:';
    function gridByReplacingDestPositions (destPositions: vector_float2Ptr): instancetype; message 'gridByReplacingDestPositions:';
    {$else}
    function gridByReplacingSourcePositions (sourcePositions: vector_float2Ptr): instancetype; message 'gridByReplacingSourcePositions:';
    function gridByReplacingDestPositions (destPositions: vector_float2Ptr): instancetype; message 'gridByReplacingDestPositions:';
    {$endif}
  end;


type
  SKWarpable = objccategory external (SKAction)
    class function warpTo_duration (warp: SKWarpGeometry; duration_: NSTimeInterval): nullable SKActionPtr; message 'warpTo:duration:'; { available in 10_12, 10_0 }
    class function animateWithWarps_times (warps: SKWarpGeometry *ProtocolPtr; times: NSNumber *ProtocolPtr): nullable SKActionPtr; message 'animateWithWarps:times:'; { available in 10_12, 10_0 }
    class function animateWithWarps_times_restore (warps: SKWarpGeometry *ProtocolPtr; times: NSNumber *ProtocolPtr; restore: boolean): nullable SKActionPtr; message 'animateWithWarps:times:restore:'; { available in 10_12, 10_0 }
  end;
{$endif}

