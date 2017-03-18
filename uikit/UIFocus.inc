{ Parsed from UIKit.framework UIFocus.h }

{ Types from UIFocusItemProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIFocusUpdateContextPtr = ^UIFocusUpdateContext;
  UIFocusEnvironmentProtocolPtr = ^UIFocusEnvironmentProtocol;
  UIFocusItemProtocolPtr = ^UIFocusItemProtocol;
{$endif}

{$ifdef TYPES}
type
  UIFocusHeading = NSUInteger;
  UIFocusHeadingPtr = ^UIFocusHeading;

const
  UIFocusHeadingNone = 0;
  UIFocusHeadingUp = 1 shl 0;
  UIFocusHeadingDown = 1 shl 1;
  UIFocusHeadingLeft = 1 shl 2;
  UIFocusHeadingRight = 1 shl 3;
  UIFocusHeadingNext = 1 shl 4;
  UIFocusHeadingPrevious = 1 shl 5;
{$endif}

{$ifdef PROTOCOLS}

type
  UIFocusEnvironmentProtocol = objcprotocol external name 'UIFocusEnvironment' (NSObjectProtocol)
    function preferredFocusEnvironments: UIFocusEnvironmentProtocolProtocolPtr; message 'preferredFocusEnvironments';
    procedure setNeedsFocusUpdate; message 'setNeedsFocusUpdate';
    procedure updateFocusIfNeeded; message 'updateFocusIfNeeded';
    function shouldUpdateFocusInContext (context: UIFocusUpdateContext): boolean; message 'shouldUpdateFocusInContext:';
    procedure didUpdateFocusInContext_withAnimationCoordinator (context: UIFocusUpdateContext; coordinator: UIFocusAnimationCoordinator); message 'didUpdateFocusInContext:withAnimationCoordinator:';
  optional
    function preferredFocusedView: UIView; message 'preferredFocusedView';
  end;

type
  UIFocusItemProtocol = objcprotocol external name 'UIFocusItem' (UIFocusEnvironmentProtocol)
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function canBecomeFocused: boolean; message 'canBecomeFocused';
    {$else}
    function canBecomeFocused: boolean; message 'canBecomeFocused';
    {$endif}
  end;
{$endif}

{$ifdef CLASSES}

type
  UIFocusUpdateContext = objcclass external (NSObject)
  public
    function previouslyFocusedItem: UIFocusItemProtocol; message 'previouslyFocusedItem';
    function nextFocusedItem: UIFocusItemProtocol; message 'nextFocusedItem';
    function previouslyFocusedView: UIView; message 'previouslyFocusedView';
    function nextFocusedView: UIView; message 'nextFocusedView';
    function focusHeading: UIFocusHeading; message 'focusHeading';
  end;
{$endif}

