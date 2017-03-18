{ Parsed from UIKit.framework UISearchContainerViewController.h }

{$ifdef TYPES}
type
  UISearchContainerViewControllerPtr = ^UISearchContainerViewController;
{$endif}

{$ifdef CLASSES}

type
  UISearchContainerViewController = objcclass external (UIViewController)
  public
    function searchController: UISearchController; message 'searchController';
    function initWithSearchController (searchController_: UISearchController): instancetype; message 'initWithSearchController:';
  end;
{$endif}

