{ Parsed from Photos.framework PHLivePhoto.h }

{$ifdef TYPES}
type
  PHLivePhotoPtr = ^PHLivePhoto;
{$endif}

{$ifdef TYPES}
type
  PHLivePhotoRequestID = cint32 { available in 9_1, 10_0 };
  PHLivePhotoRequestIDPtr = ^PHLivePhotoRequestID { available in 9_1, 10_0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHLivePhotoInfoErrorKey: NSString { available in 9_1, 10_0 }; cvar; external;
  PHLivePhotoInfoIsDegradedKey: NSString { available in 9_1, 10_0 }; cvar; external;
  PHLivePhotoInfoCancelledKey: NSString { available in 9_1, 10_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PHLivePhoto = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function size: CGSize; message 'size';
    class function requestLivePhotoWithResourceFileURLs_placeholderImage_targetSize_contentMode_resultHandler (fileURLs: NSURL *ProtocolPtr; image: UIImage *__nullable; targetSize: CGSize; contentMode: PHImageContentMode; resultHandler: OpaqueCBlock): PHLivePhotoRequestID; message 'requestLivePhotoWithResourceFileURLs:placeholderImage:targetSize:contentMode:resultHandler:';
    class procedure cancelLivePhotoRequestWithRequestID (requestID: PHLivePhotoRequestID); message 'cancelLivePhotoRequestWithRequestID:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

