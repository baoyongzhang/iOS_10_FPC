{ Parsed from CoreMotion.framework CMAttitude.h }

{$ifdef TYPES}
type
  CMAttitudePtr = ^CMAttitude;
{$endif}

{$ifdef TYPES}
type
  CMRotationMatrix = record
    m11, m12, m13: double;
    m21, m22, m23: double;
    m31, m32, m33: double;
  end;
type
  CMRotationMatrixPtr = ^CMRotationMatrix;
type
  CMQuaternion = record
    x, y, z, w: double;
  end;
type
  CMQuaternionPtr = ^CMQuaternion;

type
  CMAttitudeReferenceFrame = NSUInteger;
  CMAttitudeReferenceFramePtr = ^CMAttitudeReferenceFrame;

const
  CMAttitudeReferenceFrameXArbitraryZVertical = 1 shl 0;
  CMAttitudeReferenceFrameXArbitraryCorrectedZVertical = 1 shl 1;
  CMAttitudeReferenceFrameXMagneticNorthZVertical = 1 shl 2;
  CMAttitudeReferenceFrameXTrueNorthZVertical = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  CMAttitude = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: id;
  public
    function roll: double; message 'roll';
    function pitch: double; message 'pitch';
    function yaw: double; message 'yaw';
    function rotationMatrix: CMRotationMatrix; message 'rotationMatrix';
    function quaternion: CMQuaternion; message 'quaternion';
    procedure multiplyByInverseOfAttitude (attitude: CMAttitude); message 'multiplyByInverseOfAttitude:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

