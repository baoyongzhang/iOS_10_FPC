{ Parsed from MediaPlayer.framework MPMediaPickerController.h }

{$ifdef TYPES}
type
  MPMediaPickerControllerPtr = ^MPMediaPickerController;
  MPMediaPickerControllerDelegateProtocolPtr = ^MPMediaPickerControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  MPMediaPickerController = objcclass external (UIViewController)
  public
    function initWithMediaTypes (mediaTypes: MPMediaType): instancetype; message 'initWithMediaTypes:'; { NS_DESIGNATED_INITIALIZER }
    function mediaTypes: MPMediaType; message 'mediaTypes';
    procedure setDelegate(newValue: MPMediaPickerControllerDelegateProtocol); message 'setDelegate:';
    function delegate: MPMediaPickerControllerDelegateProtocol; message 'delegate';
    procedure setAllowsPickingMultipleItems(newValue: boolean); message 'setAllowsPickingMultipleItems:';
    function allowsPickingMultipleItems: boolean; message 'allowsPickingMultipleItems';
    procedure setShowsCloudItems(newValue: boolean); message 'setShowsCloudItems:';
    function showsCloudItems: boolean; message 'showsCloudItems';
    procedure setShowsItemsWithProtectedAssets(newValue: boolean); message 'setShowsItemsWithProtectedAssets:';
    function showsItemsWithProtectedAssets: boolean; message 'showsItemsWithProtectedAssets';
    procedure setPrompt(newValue: NSString); message 'setPrompt:';
    function prompt: NSString; message 'prompt';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MPMediaPickerControllerDelegateProtocol = objcprotocol external name 'MPMediaPickerControllerDelegate' (NSObjectProtocol)
  optional
    procedure mediaPicker_didPickMediaItems (mediaPicker: MPMediaPickerController; mediaItemCollection: MPMediaItemCollection); message 'mediaPicker:didPickMediaItems:';
    procedure mediaPickerDidCancel (mediaPicker: MPMediaPickerController); message 'mediaPickerDidCancel:';
  end;
{$endif}

