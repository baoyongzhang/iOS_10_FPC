{ Parsed from UIKit.framework UICollectionViewTransitionLayout.h }

{$ifdef TYPES}
type
  UICollectionViewTransitionLayoutPtr = ^UICollectionViewTransitionLayout;
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewTransitionLayout = objcclass external (UICollectionViewLayout)
  public
    procedure setTransitionProgress(newValue: CGFloat); message 'setTransitionProgress:';
    function transitionProgress: CGFloat; message 'transitionProgress';
    function currentLayout: UICollectionViewLayout; message 'currentLayout';
    function nextLayout: UICollectionViewLayout; message 'nextLayout';
    function initWithCurrentLayout_nextLayout (currentLayout_: UICollectionViewLayout; newLayout: UICollectionViewLayout): instancetype; message 'initWithCurrentLayout:nextLayout:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    procedure updateValue_forAnimatedKey (value: CGFloat; key: NSString); message 'updateValue:forAnimatedKey:';
    function valueForAnimatedKey (key: NSString): CGFloat; message 'valueForAnimatedKey:';
  end;
{$endif}

