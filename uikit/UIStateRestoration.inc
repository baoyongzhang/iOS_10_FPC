{ Parsed from UIKit.framework UIStateRestoration.h }

{$ifdef TYPES}
type
  UIViewControllerRestorationProtocolPtr = ^UIViewControllerRestorationProtocol;
  UIDataSourceModelAssociationProtocolPtr = ^UIDataSourceModelAssociationProtocol;
  UIStateRestoringProtocolPtr = ^UIStateRestoringProtocol;
  UIObjectRestorationProtocolPtr = ^UIObjectRestorationProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIStateRestorationViewControllerStoryboardKey: NSString { available in 6_0 }; cvar; external;
  UIApplicationStateRestorationBundleVersionKey: NSString { available in 6_0 }; cvar; external;
  UIApplicationStateRestorationUserInterfaceIdiomKey: NSString { available in 6_0 }; cvar; external;
  UIApplicationStateRestorationTimestampKey: NSString { available in 7_0 }; cvar; external;
  UIApplicationStateRestorationSystemVersionKey: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  UIViewControllerRestorationProtocol = objcprotocol external name 'UIViewControllerRestoration'
    class function viewControllerWithRestorationIdentifierPath_coder (identifierComponents: NSArray; coder: NSCoder): UIViewControllerPtr; message 'viewControllerWithRestorationIdentifierPath:coder:';
  end;

type
  UIDataSourceModelAssociationProtocol = objcprotocol external name 'UIDataSourceModelAssociation'
    function modelIdentifierForElementAtIndexPath_inView (idx: NSIndexPath; view: UIView): NSStringPtr; message 'modelIdentifierForElementAtIndexPath:inView:';
    function indexPathForElementWithModelIdentifier_inView (identifier: NSString; view: UIView): NSIndexPathPtr; message 'indexPathForElementWithModelIdentifier:inView:';
  end;

type
  UIStateRestoringProtocol = objcprotocol external name 'UIStateRestoring' (NSObjectProtocol)
  optional
    function restorationParent: UIStateRestoringProtocol; message 'restorationParent';
    function objectRestorationClass: UIObjectRestorationProtocol; message 'objectRestorationClass';
    procedure encodeRestorableStateWithCoder (coder: NSCoder); message 'encodeRestorableStateWithCoder:';
    procedure decodeRestorableStateWithCoder (coder: NSCoder); message 'decodeRestorableStateWithCoder:';
    procedure applicationFinishedRestoringState; message 'applicationFinishedRestoringState';
  end;

type
  UIObjectRestorationProtocol = objcprotocol external name 'UIObjectRestoration'
    class function objectWithRestorationIdentifierPath_coder (identifierComponents: NSString; coder: NSCoder): UIStateRestoringProtocol; message 'objectWithRestorationIdentifierPath:coder:';
  end;
{$endif}

