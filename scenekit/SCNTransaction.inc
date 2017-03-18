{ Parsed from SceneKit.framework SCNTransaction.h }

{$ifdef TYPES}
type
  SCNTransactionPtr = ^SCNTransaction;
{$endif}

{$ifdef CLASSES}

type
  SCNTransaction = objcclass external (NSObject)
  public
    class procedure begin_; message 'begin';
    class procedure commit; message 'commit';
    class procedure flush; message 'flush';
    class procedure lock; message 'lock';
    class procedure unlock; message 'unlock';
    procedure setAnimationDuration(newValue: CFTimeInterval); message 'setAnimationDuration:';
    function animationDuration: CFTimeInterval; message 'animationDuration';
    procedure set__WATCHOS_PROHIBITED(newValue: CAMediaTimingFunction *animationTimingFunction); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: CAMediaTimingFunction *animationTimingFunction; message 'WATCHOS_PROHIBITED';
    procedure setDisableActions(newValue: boolean); message 'setDisableActions:';
    function disableActions: boolean; message 'disableActions';
    procedure setCompletionBlock(newValue: OpaqueCBlock); message 'setCompletionBlock:';
    function completionBlock: OpaqueCBlock; message 'completionBlock';
    class function valueForKey (key: NSString): nullable id; message 'valueForKey:';
    class procedure setValue_forKey (value: nullable id; key: NSString); message 'setValue:forKey:';
  end;
{$endif}

