{ Parsed from Photos.framework PHPhotoLibrary.h }

{$ifdef TYPES}
type
  PHPhotoLibraryPtr = ^PHPhotoLibrary;
  PHPhotoLibraryChangeObserverProtocolPtr = ^PHPhotoLibraryChangeObserverProtocol;
{$endif}

{$ifdef TYPES}
type
  PHAuthorizationStatus = NSInteger;
  PHAuthorizationStatusPtr = ^PHAuthorizationStatus;

const
  PHAuthorizationStatusNotDetermined = 0;
  PHAuthorizationStatusRestricted = 1;
  PHAuthorizationStatusDenied = 2;
  PHAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef PROTOCOLS}

type
  PHPhotoLibraryChangeObserverProtocol = objcprotocol external name 'PHPhotoLibraryChangeObserver' (NSObjectProtocol)
    procedure photoLibraryDidChange (changeInstance: PHChange); message 'photoLibraryDidChange:';
  end;
{$endif}

{$ifdef CLASSES}

type
  PHPhotoLibrary = objcclass external (NSObject)
  public
    class function sharedPhotoLibrary: PHPhotoLibrary; message 'sharedPhotoLibrary';
    class function authorizationStatus: PHAuthorizationStatus; message 'authorizationStatus';
    class procedure requestAuthorization (handler: OpaqueCBlock); message 'requestAuthorization:';
    procedure performChanges_completionHandler (changeBlock: dispatch_block_t; completionHandler: OpaqueCBlock); message 'performChanges:completionHandler:';
    function performChangesAndWait_error (changeBlock: dispatch_block_t; error: NSError *__autoreleasingPtr): boolean; message 'performChangesAndWait:error:';
    procedure registerChangeObserver (observer: PHPhotoLibraryChangeObserverProtocol); message 'registerChangeObserver:';
    procedure unregisterChangeObserver (observer: PHPhotoLibraryChangeObserverProtocol); message 'unregisterChangeObserver:';
  end;
{$endif}

