{ Parsed from QuartzCore.framework CATransaction.h }

{ Types from CATransaction }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  CATransactionPtr = ^CATransaction;
{$endif}

{$ifdef CLASSES}

type
  CATransaction = objcclass external (NSObject)
  public
    class procedure begin_; message 'begin';
    class procedure commit; message 'commit';
    class procedure flush; message 'flush';
    class procedure lock; message 'lock';
    class procedure unlock; message 'unlock';
    class function animationDuration: CFTimeInterval; message 'animationDuration';
    class procedure setAnimationDuration (dur: CFTimeInterval); message 'setAnimationDuration:';
    class function animationTimingFunction: nullable CAMediaTimingFunctionPtr; message 'animationTimingFunction';
    class procedure setAnimationTimingFunction (function_: nullable CAMediaTimingFunctionPtr); message 'setAnimationTimingFunction:';
    class function disableActions: boolean; message 'disableActions';
    class procedure setDisableActions (flag: boolean); message 'setDisableActions:';
    {$if defined(__BLOCKS__)}
    class function (void))completionBlock: nullable void (^; message '(void))completionBlock';
    class procedure setCompletionBlock (block: OpaqueCBlock); message 'setCompletionBlock:';
    {$endif}
    class function valueForKey (key: NSString): nullable id; message 'valueForKey:';
    class procedure setValue_forKey (anObject: nullable id; key: NSString); message 'setValue:forKey:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCATransactionAnimationDuration: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransactionDisableActions: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCATransactionAnimationTimingFunction: NSString { available starting in 10.6, 3.0, 9.0, 2.0 }; cvar; external;
  kCATransactionCompletionBlock: NSString { available starting in 10.6, 4.0, 9.0, 2.0 }; cvar; external;
{$endif}

