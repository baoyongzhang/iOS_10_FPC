{ Parsed from UIKit.framework UIStoryboard.h }

{$ifdef TYPES}
type
  UIStoryboardPtr = ^UIStoryboard;
{$endif}

{$ifdef CLASSES}

type
  UIStoryboard = objcclass external (NSObject)
  private
  public
    class function storyboardWithName_bundle (name: NSString; storyboardBundleOrNil: nullable NSBundlePtr): UIStoryboard; message 'storyboardWithName:bundle:';
    function instantiateInitialViewController: nullable __kindof UIViewControllerPtr; message 'instantiateInitialViewController';
    function instantiateViewControllerWithIdentifier (identifier: NSString): __kindof UIViewControllerPtr; message 'instantiateViewControllerWithIdentifier:';
  end;
{$endif}

