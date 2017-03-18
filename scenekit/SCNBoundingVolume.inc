{ Parsed from SceneKit.framework SCNBoundingVolume.h }

{$ifdef TYPES}
type
  SCNBoundingVolumeProtocolPtr = ^SCNBoundingVolumeProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNBoundingVolumeProtocol = objcprotocol external name 'SCNBoundingVolume' (NSObjectProtocol)
  required
    function getBoundingBoxMin_max (min: nullable SCNVector3Ptr; max: nullable SCNVector3Ptr): boolean; message 'getBoundingBoxMin:max:';
    procedure setBoundingBoxMin_max (min: nullable SCNVector3Ptr; max: nullable SCNVector3Ptr); message 'setBoundingBoxMin:max:'; { available in macosx(10.9 }
    function getBoundingSphereCenter_radius (center: nullable SCNVector3Ptr; radius: nullable CGFloatPtr): boolean; message 'getBoundingSphereCenter:radius:';
  end;
{$endif}

