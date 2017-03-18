{ Parsed from UIKit.framework UIReferenceLibraryViewController.h }

{$ifdef TYPES}
type
  UIReferenceLibraryViewControllerPtr = ^UIReferenceLibraryViewController;
{$endif}

{$ifdef CLASSES}

type
  UIReferenceLibraryViewController = objcclass external (UIViewController)
  private
  public
    class function dictionaryHasDefinitionForTerm (term: NSString): boolean; message 'dictionaryHasDefinitionForTerm:';
    function initWithTerm (term: NSString): instancetype; message 'initWithTerm:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: nonnull NSCoderPtr): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithNibName_bundle (nibNameOrNil: nullable NSStringPtr; nibBundleOrNil: nullable NSBundlePtr): instancetype; message 'initWithNibName:bundle:';
    function init: instancetype; message 'init';
  end;
{$endif}

