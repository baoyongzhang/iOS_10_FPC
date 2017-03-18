{ Parsed from WatchKit.framework WKGestureRecognizer.h }

{$ifdef TYPES}
type
  WKGestureRecognizerPtr = ^WKGestureRecognizer;
  WKTapGestureRecognizerPtr = ^WKTapGestureRecognizer;
  WKLongPressGestureRecognizerPtr = ^WKLongPressGestureRecognizer;
  WKSwipeGestureRecognizerPtr = ^WKSwipeGestureRecognizer;
  WKPanGestureRecognizerPtr = ^WKPanGestureRecognizer;
{$endif}

{$ifdef TYPES}
type
  WKGestureRecognizerState = NSInteger;
  WKGestureRecognizerStatePtr = ^WKGestureRecognizerState;

const
  WKGestureRecognizerStatePossible = 0;
  WKGestureRecognizerStateBegan = 1;
  WKGestureRecognizerStateChanged = 2;
  WKGestureRecognizerStateEnded = 3;
  WKGestureRecognizerStateCancelled = 4;
  WKGestureRecognizerStateFailed = 5;
  WKGestureRecognizerStateRecognized = 6;

type
  WKSwipeGestureRecognizerDirection = NSUInteger;
  WKSwipeGestureRecognizerDirectionPtr = ^WKSwipeGestureRecognizerDirection;

const
  WKSwipeGestureRecognizerDirectionRight = 1 shl 0;
  WKSwipeGestureRecognizerDirectionLeft = 1 shl 1;
  WKSwipeGestureRecognizerDirectionUp = 1 shl 2;
  WKSwipeGestureRecognizerDirectionDown = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  WKGestureRecognizer = objcclass external (NSObject)
  public
    function state: WKGestureRecognizerState; message 'state';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    function locationInObject: CGPoint; message 'locationInObject';
    function objectBounds: CGRect; message 'objectBounds';
  end;

type
  WKTapGestureRecognizer = objcclass external (WKGestureRecognizer)
  public
    procedure setNumberOfTapsRequired(newValue: NSUInteger); message 'setNumberOfTapsRequired:';
    function numberOfTapsRequired: NSUInteger; message 'numberOfTapsRequired';
  end;

type
  WKLongPressGestureRecognizer = objcclass external (WKGestureRecognizer)
  public
    procedure setMinimumPressDuration(newValue: CFTimeInterval); message 'setMinimumPressDuration:';
    function minimumPressDuration: CFTimeInterval; message 'minimumPressDuration';
    procedure setNumberOfTapsRequired(newValue: NSUInteger); message 'setNumberOfTapsRequired:';
    function numberOfTapsRequired: NSUInteger; message 'numberOfTapsRequired';
    procedure setAllowableMovement(newValue: CGFloat); message 'setAllowableMovement:';
    function allowableMovement: CGFloat; message 'allowableMovement';
  end;

type
  WKSwipeGestureRecognizer = objcclass external (WKGestureRecognizer)
  public
    procedure setDirection(newValue: WKSwipeGestureRecognizerDirection); message 'setDirection:';
    function direction: WKSwipeGestureRecognizerDirection; message 'direction';
  end;

type
  WKPanGestureRecognizer = objcclass external (WKGestureRecognizer)
  public
    function translationInObject: CGPoint; message 'translationInObject';
    function velocityInObject: CGPoint; message 'velocityInObject';
  end;
{$endif}

