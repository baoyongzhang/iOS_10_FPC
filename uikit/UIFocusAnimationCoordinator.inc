{ Parsed from UIKit.framework UIFocusAnimationCoordinator.h }

{$ifdef TYPES}
type
  UIFocusAnimationCoordinatorPtr = ^UIFocusAnimationCoordinator;
{$endif}

{$ifdef CLASSES}

type
  UIFocusAnimationCoordinator = objcclass external (NSObject)
  public
    procedure addCoordinatedAnimations_completion (animations: OpaqueCBlock; completion: OpaqueCBlock); message 'addCoordinatedAnimations:completion:';
  end;
{$endif}

