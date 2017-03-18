{ Parsed from Photos.framework PHAssetResourceManager.h }

{$ifdef TYPES}
type
  PHAssetResourceRequestOptionsPtr = ^PHAssetResourceRequestOptions;
  PHAssetResourceManagerPtr = ^PHAssetResourceManager;
{$endif}

{$ifdef TYPES}
type
  PHAssetResourceDataRequestID = cint32 { available in 9_0, 10_0 };
  PHAssetResourceDataRequestIDPtr = ^PHAssetResourceDataRequestID { available in 9_0, 10_0 };
  PHAssetResourceProgressHandler = OpaqueCBlock { available in 9_0, 10_0 };
{$endif}

{$ifdef CLASSES}

type
  PHAssetResourceRequestOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setNetworkAccessAllowed(newValue: boolean); message 'setNetworkAccessAllowed:';
    function isNetworkAccessAllowed: boolean; message 'isNetworkAccessAllowed';
    procedure setProgressHandler(newValue: PHAssetResourceProgressHandler); message 'setProgressHandler:';
    function progressHandler: PHAssetResourceProgressHandler; message 'progressHandler';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  PHAssetResourceManager = objcclass external (NSObject)
  public
    class function defaultManager: PHAssetResourceManager; message 'defaultManager';
    function requestDataForAssetResource_options_dataReceivedHandler_completionHandler (resource: PHAssetResource; options: nullable PHAssetResourceRequestOptionsPtr; handler: OpaqueCBlock; completionHandler: OpaqueCBlock): PHAssetResourceDataRequestID; message 'requestDataForAssetResource:options:dataReceivedHandler:completionHandler:';
    procedure writeDataForAssetResource_toFile_options_completionHandler (resource: PHAssetResource; fileURL: NSURL; options: nullable PHAssetResourceRequestOptionsPtr; completionHandler: OpaqueCBlock); message 'writeDataForAssetResource:toFile:options:completionHandler:';
    procedure cancelDataRequest (requestID: PHAssetResourceDataRequestID); message 'cancelDataRequest:';
  end;
{$endif}

