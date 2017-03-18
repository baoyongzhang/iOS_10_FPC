{ Parsed from UIKit.framework UIImagePickerController.h }

{$ifdef TYPES}
type
  UIImagePickerControllerPtr = ^UIImagePickerController;
  UIImagePickerControllerDelegateProtocolPtr = ^UIImagePickerControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIImagePickerControllerSourceType = NSInteger;
  UIImagePickerControllerSourceTypePtr = ^UIImagePickerControllerSourceType;

const
  UIImagePickerControllerSourceTypePhotoLibrary = 0;
  UIImagePickerControllerSourceTypeCamera = 1;
  UIImagePickerControllerSourceTypeSavedPhotosAlbum = 2;

type
  UIImagePickerControllerQualityType = NSInteger;
  UIImagePickerControllerQualityTypePtr = ^UIImagePickerControllerQualityType;

const
  UIImagePickerControllerQualityTypeHigh = 0;
  UIImagePickerControllerQualityTypeMedium = 1;
  UIImagePickerControllerQualityTypeLow = 2;
  UIImagePickerControllerQualityType640x480 = 3 { available in 4_0 };
  UIImagePickerControllerQualityTypeIFrame1280x720 = 4 { available in 5_0 };
  UIImagePickerControllerQualityTypeIFrame960x540 = 5 { available in 5_0 };

type
  UIImagePickerControllerCameraCaptureMode = NSInteger;
  UIImagePickerControllerCameraCaptureModePtr = ^UIImagePickerControllerCameraCaptureMode;

const
  UIImagePickerControllerCameraCaptureModePhoto = 0;
  UIImagePickerControllerCameraCaptureModeVideo = 1;

type
  UIImagePickerControllerCameraDevice = NSInteger;
  UIImagePickerControllerCameraDevicePtr = ^UIImagePickerControllerCameraDevice;

const
  UIImagePickerControllerCameraDeviceRear = 0;
  UIImagePickerControllerCameraDeviceFront = 1;

type
  UIImagePickerControllerCameraFlashMode = NSInteger;
  UIImagePickerControllerCameraFlashModePtr = ^UIImagePickerControllerCameraFlashMode;

const
  UIImagePickerControllerCameraFlashModeOff = -1;
  UIImagePickerControllerCameraFlashModeAuto = 0;
  UIImagePickerControllerCameraFlashModeOn = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *UIImagePickerControllerMediaType; cvar; external;
  __TVOS_PROHIBITED: NSString *UIImagePickerControllerOriginalImage; cvar; external;
  __TVOS_PROHIBITED: NSString *UIImagePickerControllerEditedImage; cvar; external;
  __TVOS_PROHIBITED: NSString *UIImagePickerControllerCropRect; cvar; external;
  __TVOS_PROHIBITED: NSString *UIImagePickerControllerMediaURL; cvar; external;
  __TVOS_PROHIBITED: NSString *UIImagePickerControllerReferenceURL { available in 4_1 }; cvar; external;
  __TVOS_PROHIBITED: NSString *UIImagePickerControllerMediaMetadata { available in 4_1 }; cvar; external;
  __TVOS_PROHIBITED: NSString *UIImagePickerControllerLivePhoto { available in 9_1 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIImagePickerController = objcclass external (UINavigationController, NSCodingProtocol)
  public
    class function isSourceTypeAvailable (sourceType: UIImagePickerControllerSourceType): boolean; message 'isSourceTypeAvailable:';
    class function availableMediaTypesForSourceType (sourceType: UIImagePickerControllerSourceType): nullable NSString *ProtocolPtr; message 'availableMediaTypesForSourceType:';
    class function isCameraDeviceAvailable (cameraDevice: UIImagePickerControllerCameraDevice): boolean; message 'isCameraDeviceAvailable:'; { available in 4_0 }
    class function isFlashAvailableForCameraDevice (cameraDevice: UIImagePickerControllerCameraDevice): boolean; message 'isFlashAvailableForCameraDevice:'; { available in 4_0 }
    class function availableCaptureModesForCameraDevice (cameraDevice: UIImagePickerControllerCameraDevice): nullable NSNumber *ProtocolPtr; message 'availableCaptureModesForCameraDevice:'; { available in 4_0 }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setSourceType(newValue: UIImagePickerControllerSourceType); message 'setSourceType:';
    function sourceType: UIImagePickerControllerSourceType; message 'sourceType';
    procedure setMediaTypes(newValue: NSString *ProtocolPtr); message 'setMediaTypes:';
    function mediaTypes: NSString *ProtocolPtr; message 'mediaTypes';
    procedure setAllowsEditing(newValue: boolean); message 'setAllowsEditing:';
    function allowsEditing: boolean; message 'allowsEditing';
    procedure setAllowsImageEditing(newValue: boolean); message 'setAllowsImageEditing:';
    function allowsImageEditing: boolean; message 'allowsImageEditing';
    procedure setVideoMaximumDuration(newValue: NSTimeInterval); message 'setVideoMaximumDuration:';
    function videoMaximumDuration: NSTimeInterval; message 'videoMaximumDuration';
    procedure setVideoQuality(newValue: UIImagePickerControllerQualityType); message 'setVideoQuality:';
    function videoQuality: UIImagePickerControllerQualityType; message 'videoQuality';
    procedure setShowsCameraControls(newValue: boolean); message 'setShowsCameraControls:';
    function showsCameraControls: boolean; message 'showsCameraControls';
    procedure setCameraOverlayView(newValue: __kindof UIViewPtr); message 'setCameraOverlayView:';
    function cameraOverlayView: __kindof UIViewPtr; message 'cameraOverlayView';
    procedure setCameraViewTransform(newValue: CGAffineTransform); message 'setCameraViewTransform:';
    function cameraViewTransform: CGAffineTransform; message 'cameraViewTransform';
    procedure takePicture; message 'takePicture'; { available in 3_1 }
    function startVideoCapture: boolean; message 'startVideoCapture'; { available in 4_0 }
    procedure stopVideoCapture; message 'stopVideoCapture'; { available in 4_0 }
    procedure setCameraCaptureMode(newValue: UIImagePickerControllerCameraCaptureMode); message 'setCameraCaptureMode:';
    function cameraCaptureMode: UIImagePickerControllerCameraCaptureMode; message 'cameraCaptureMode';
    procedure setCameraDevice(newValue: UIImagePickerControllerCameraDevice); message 'setCameraDevice:';
    function cameraDevice: UIImagePickerControllerCameraDevice; message 'cameraDevice';
    procedure setCameraFlashMode(newValue: UIImagePickerControllerCameraFlashMode); message 'setCameraFlashMode:';
    function cameraFlashMode: UIImagePickerControllerCameraFlashMode; message 'cameraFlashMode';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIImagePickerControllerDelegateProtocol = objcprotocol external name 'UIImagePickerControllerDelegate' (NSObjectProtocol)
  optional
    procedure imagePickerController_didFinishPickingImage_editingInfo (picker: UIImagePickerController; image: UIImage; editingInfo: nullable NSDictionaryPtr); message 'imagePickerController:didFinishPickingImage:editingInfo:'; deprecated 'in 2_0, 3_0';
    procedure imagePickerController_didFinishPickingMediaWithInfo (picker: UIImagePickerController; info: NSDictionary); message 'imagePickerController:didFinishPickingMediaWithInfo:';
    procedure imagePickerControllerDidCancel (picker: UIImagePickerController); message 'imagePickerControllerDidCancel:';
  end;
{$endif}

