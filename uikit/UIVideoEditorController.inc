{ Parsed from UIKit.framework UIVideoEditorController.h }

{$ifdef TYPES}
type
  UIVideoEditorControllerPtr = ^UIVideoEditorController;
  UIVideoEditorControllerDelegateProtocolPtr = ^UIVideoEditorControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIVideoEditorController = objcclass external (UINavigationController)
  public
    class function canEditVideoAtPath (videoPath: NSString): boolean; message 'canEditVideoAtPath:'; { available in 3_1 }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setVideoPath(newValue: NSString); message 'setVideoPath:';
    function videoPath: NSString; message 'videoPath';
    procedure setVideoMaximumDuration(newValue: NSTimeInterval); message 'setVideoMaximumDuration:';
    function videoMaximumDuration: NSTimeInterval; message 'videoMaximumDuration';
    procedure setVideoQuality(newValue: UIImagePickerControllerQualityType); message 'setVideoQuality:';
    function videoQuality: UIImagePickerControllerQualityType; message 'videoQuality';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIVideoEditorControllerDelegateProtocol = objcprotocol external name 'UIVideoEditorControllerDelegate' (NSObjectProtocol)
  optional
    procedure videoEditorController_didSaveEditedVideoToPath (editor: UIVideoEditorController; editedVideoPath: NSString); message 'videoEditorController:didSaveEditedVideoToPath:';
    procedure videoEditorController_didFailWithError (editor: UIVideoEditorController; error: NSError); message 'videoEditorController:didFailWithError:';
    procedure videoEditorControllerDidCancel (editor: UIVideoEditorController); message 'videoEditorControllerDidCancel:';
  end;
{$endif}

