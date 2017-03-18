{ Parsed from Photos.framework PHAssetChangeRequest.h }

{$ifdef TYPES}
type
  PHAssetChangeRequestPtr = ^PHAssetChangeRequest;
  PHContentEditingInputRequestOptionsPtr = ^PHContentEditingInputRequestOptions;
{$endif}

{$ifdef CLASSES}

type
  PHAssetChangeRequest = objcclass external (NSObject)
  public
    class function creationRequestForAssetFromImage (image: UIImage): instancetype; message 'creationRequestForAssetFromImage:';
    class function creationRequestForAssetFromImageAtFileURL (fileURL: NSURL): nullable instancetype; message 'creationRequestForAssetFromImageAtFileURL:';
    class function creationRequestForAssetFromVideoAtFileURL (fileURL: NSURL): nullable instancetype; message 'creationRequestForAssetFromVideoAtFileURL:';
    function placeholderForCreatedAsset: PHObjectPlaceholder; message 'placeholderForCreatedAsset';
    class procedure deleteAssets (assets: NSFastEnumerationProtocol); message 'deleteAssets:';
    class function changeRequestForAsset (asset: PHAsset): instancetype; message 'changeRequestForAsset:';
    procedure setCreationDate(newValue: NSDate); message 'setCreationDate:';
    function creationDate: NSDate; message 'creationDate';
    procedure setLocation(newValue: CLLocation); message 'setLocation:';
    function location: CLLocation; message 'location';
    procedure setFavorite(newValue: boolean); message 'setFavorite:';
    function isFavorite: boolean; message 'isFavorite';
    procedure setHidden(newValue: boolean); message 'setHidden:';
    function isHidden: boolean; message 'isHidden';
    procedure setContentEditingOutput(newValue: PHContentEditingOutput); message 'setContentEditingOutput:';
    function contentEditingOutput: PHContentEditingOutput; message 'contentEditingOutput';
    procedure revertAssetContentToOriginal; message 'revertAssetContentToOriginal';
  end;
{$endif}

{$ifdef TYPES}
type
  PHContentEditingInputRequestID = NSUInteger { available in 8_0, 10_0 };
  PHContentEditingInputRequestIDPtr = ^PHContentEditingInputRequestID { available in 8_0, 10_0 };
{$endif}

{$ifdef CLASSES}

type
  PHContentEditingInputRequestOptions = objcclass external (NSObject)
  public
    procedure setCanHandleAdjustmentData(newValue: OpaqueCBlock); message 'setCanHandleAdjustmentData:';
    function canHandleAdjustmentData: OpaqueCBlock; message 'canHandleAdjustmentData';
    procedure setNetworkAccessAllowed(newValue: boolean); message 'setNetworkAccessAllowed:';
    function isNetworkAccessAllowed: boolean; message 'isNetworkAccessAllowed';
    procedure setProgressHandler(newValue: OpaqueCBlock); message 'setProgressHandler:';
    function progressHandler: OpaqueCBlock; message 'progressHandler';
  end;


type
  PHAsset_PHContentEditingInput = objccategory external name 'PHContentEditingInput' (PHAsset)
    function requestContentEditingInputWithOptions_completionHandler (options: nullable PHContentEditingInputRequestOptionsPtr; completionHandler: OpaqueCBlock): PHContentEditingInputRequestID; message 'requestContentEditingInputWithOptions:completionHandler:'; { available in 8_0, 10_0 }
    procedure cancelContentEditingInputRequest (requestID: PHContentEditingInputRequestID); message 'cancelContentEditingInputRequest:'; { available in 8_0, 10_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHContentEditingInputResultIsInCloudKey: NSString { available in 8_0, 10_0 }; cvar; external;
  PHContentEditingInputCancelledKey: NSString { available in 8_0, 10_0 }; cvar; external;
  PHContentEditingInputErrorKey: NSString { available in 8_0, 10_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PHContentEditingOutput_PHAssetChangeRequest = objccategory external name 'PHAssetChangeRequest' (PHContentEditingOutput)
    function initWithPlaceholderForCreatedAsset (placeholderForCreatedAsset: PHObjectPlaceholder): instancetype; message 'initWithPlaceholderForCreatedAsset:';
  end;
{$endif}

