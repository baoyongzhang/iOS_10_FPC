{ Parsed from UIKit.framework UICloudSharingController.h }

{$ifdef TYPES}
type
  UICloudSharingControllerPtr = ^UICloudSharingController;
  UICloudSharingControllerDelegateProtocolPtr = ^UICloudSharingControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UICloudSharingPermissionOptions = NSUInteger;
  UICloudSharingPermissionOptionsPtr = ^UICloudSharingPermissionOptions;

const
  UICloudSharingPermissionStandard = 0;
  UICloudSharingPermissionAllowPublic = 1 shl 0;
  UICloudSharingPermissionAllowPrivate = 1 shl 1;
  UICloudSharingPermissionAllowReadOnly = 1 shl 2;
  UICloudSharingPermissionAllowReadWrite = 1 shl 3;
{$endif}

{$ifdef PROTOCOLS}

type
  UICloudSharingControllerDelegateProtocol = objcprotocol external name 'UICloudSharingControllerDelegate' (NSObjectProtocol)
    procedure cloudSharingController_failedToSaveShareWithError (csc: UICloudSharingController; error: NSError); message 'cloudSharingController:failedToSaveShareWithError:';
    function itemTitleForCloudSharingController (csc: UICloudSharingController): NSStringPtr; message 'itemTitleForCloudSharingController:';
  optional
    function itemThumbnailDataForCloudSharingController (csc: UICloudSharingController): NSDataPtr; message 'itemThumbnailDataForCloudSharingController:';
    function itemTypeForCloudSharingController (csc: UICloudSharingController): NSStringPtr; message 'itemTypeForCloudSharingController:';
    procedure cloudSharingControllerDidSaveShare (csc: UICloudSharingController); message 'cloudSharingControllerDidSaveShare:';
    procedure cloudSharingControllerDidStopSharing (csc: UICloudSharingController); message 'cloudSharingControllerDidStopSharing:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UICloudSharingController = objcclass external (UIViewController)
  public
    function initWithNibName_bundle (nibNameOrNil: NSStringPtr; nibBundleOrNil: NSBundlePtr): instancetype; message 'initWithNibName:bundle:';
    function initWithCoder (aDecoder: NSCoder): instancetype; message 'initWithCoder:';
    function initWithPreparationHandler (preparationHandler: OpaqueCBlock): instancetype; message 'initWithPreparationHandler:';
    function initWithShare_container (share: CKShare; container: CKContainer): instancetype; message 'initWithShare:container:';
    procedure setDelegate(newValue: UICloudSharingControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UICloudSharingControllerDelegateProtocol; message 'delegate';
    function share: CKShare; message 'share';
    procedure setAvailablePermissions(newValue: UICloudSharingPermissionOptions); message 'setAvailablePermissions:';
    function availablePermissions: UICloudSharingPermissionOptions; message 'availablePermissions';
    function activityItemSource: UIActivityItemSourceProtocol; message 'activityItemSource';
  end;
{$endif}

