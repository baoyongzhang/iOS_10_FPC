{ Parsed from AVFoundation.framework AVMetadataObject.h }

{$ifdef TYPES}
type
  AVMetadataObjectPtr = ^AVMetadataObject;
  AVMetadataFaceObjectPtr = ^AVMetadataFaceObject;
  AVMetadataMachineReadableCodeObjectPtr = ^AVMetadataMachineReadableCodeObject;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataObject = objcclass external (NSObject)
  private
    _objectInternal: AVMetadataObjectInternal;
  public
    function time: CMTime; message 'time';
    function duration: CMTime; message 'duration';
    function bounds: CGRect; message 'bounds';
    function type_: NSString; message 'type';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeFace { available in 10_10, 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataFaceObject = objcclass external (AVMetadataObject, NSCopyingProtocol)
  private
    _internal: AVMetadataFaceObjectInternal;
  public
    function faceID: NSInteger; message 'faceID';
    function hasRollAngle: boolean; message 'hasRollAngle';
    function rollAngle: CGFloat; message 'rollAngle';
    function hasYawAngle: boolean; message 'hasYawAngle';
    function yawAngle: CGFloat; message 'yawAngle';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeUPCECode { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeCode39Code { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeCode39Mod43Code { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeEAN13Code { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeEAN8Code { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeCode93Code { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeCode128Code { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypePDF417Code { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeQRCode { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeAztecCode { available in NA, 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeInterleaved2of5Code { available in NA, 8_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeITF14Code { available in NA, 8_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVMetadataObjectTypeDataMatrixCode { available in NA, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataMachineReadableCodeObject = objcclass external (AVMetadataObject)
  private
    _internal: AVMetadataMachineReadableCodeObjectInternal;
  public
    function corners: NSArray; message 'corners';
    function stringValue: NSString; message 'stringValue';
  end;
{$endif}

