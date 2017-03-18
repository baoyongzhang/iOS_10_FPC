{ Parsed from GLKit.framework GLKViewController.h }

{$ifdef TYPES}
type
  GLKViewControllerPtr = ^GLKViewController;
  GLKViewControllerDelegateProtocolPtr = ^GLKViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  GLKViewController = objcclass external (UIViewController, NSCodingProtocol, GLKViewDelegateProtocol)
  private
  public
    procedure setDelegate(newValue: GLKViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: GLKViewControllerDelegateProtocol; message 'delegate';
    procedure setPreferredFramesPerSecond(newValue: NSInteger); message 'setPreferredFramesPerSecond:';
    function preferredFramesPerSecond: NSInteger; message 'preferredFramesPerSecond';
    function framesPerSecond: NSInteger; message 'framesPerSecond';
    procedure setPaused(newValue: boolean); message 'setPaused:';
    function isPaused: boolean; message 'isPaused';
    function framesDisplayed: NSInteger; message 'framesDisplayed';
    function timeSinceFirstResume: NSTimeInterval; message 'timeSinceFirstResume';
    function timeSinceLastResume: NSTimeInterval; message 'timeSinceLastResume';
    function timeSinceLastUpdate: NSTimeInterval; message 'timeSinceLastUpdate';
    function timeSinceLastDraw: NSTimeInterval; message 'timeSinceLastDraw';
    procedure setPauseOnWillResignActive(newValue: boolean); message 'setPauseOnWillResignActive:';
    function pauseOnWillResignActive: boolean; message 'pauseOnWillResignActive';
    procedure setResumeOnDidBecomeActive(newValue: boolean); message 'setResumeOnDidBecomeActive:';
    function resumeOnDidBecomeActive: boolean; message 'resumeOnDidBecomeActive';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    procedure glkView_drawInRect (view: GLKView; rect: CGRect); message 'glkView:drawInRect:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GLKViewControllerDelegateProtocol = objcprotocol external name 'GLKViewControllerDelegate' (NSObjectProtocol)
  required
    procedure glkViewControllerUpdate (controller: GLKViewController); message 'glkViewControllerUpdate:';
  optional
    procedure glkViewController_willPause (controller: GLKViewController; pause: boolean); message 'glkViewController:willPause:';
  end;
{$endif}

