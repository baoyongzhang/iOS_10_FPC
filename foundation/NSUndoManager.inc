{ Parsed from Foundation.framework NSUndoManager.h }

{$ifdef TYPES}
type
  NSUndoManagerPtr = ^NSUndoManager;
{$endif}

{$ifdef CLASSES}

type
  NSUndoManager = objcclass external (NSObject)
  private
    _undoStack: id;
    _redoStack: id;
    _runLoopModes: NSArray;
    _NSUndoManagerPrivate1: cuint64;
    _target: id;
    _proxy: id;
    _NSUndoManagerPrivate2: pointer;
    _NSUndoManagerPrivate3: pointer;
  public
    procedure beginUndoGrouping; message 'beginUndoGrouping';
    procedure endUndoGrouping; message 'endUndoGrouping';
    function groupingLevel: NSInteger; message 'groupingLevel';
    procedure disableUndoRegistration; message 'disableUndoRegistration';
    procedure enableUndoRegistration; message 'enableUndoRegistration';
    function isUndoRegistrationEnabled: boolean; message 'isUndoRegistrationEnabled';
    procedure setGroupsByEvent(newValue: boolean); message 'setGroupsByEvent:';
    function groupsByEvent: boolean; message 'groupsByEvent';
    procedure setLevelsOfUndo(newValue: NSUInteger); message 'setLevelsOfUndo:';
    function levelsOfUndo: NSUInteger; message 'levelsOfUndo';
    procedure setRunLoopModes(newValue: NSRunLoopModeProtocolPtr); message 'setRunLoopModes:';
    function runLoopModes: NSRunLoopModeProtocolPtr; message 'runLoopModes';
    procedure undo; message 'undo';
    procedure redo; message 'redo';
    procedure undoNestedGroup; message 'undoNestedGroup';
    function canUndo: boolean; message 'canUndo';
    function canRedo: boolean; message 'canRedo';
    function isUndoing: boolean; message 'isUndoing';
    function isRedoing: boolean; message 'isRedoing';
    procedure removeAllActions; message 'removeAllActions';
    procedure removeAllActionsWithTarget (target: id); message 'removeAllActionsWithTarget:';
    procedure registerUndoWithTarget_selector_object (target: id; selector: SEL; anObject: nullable id); message 'registerUndoWithTarget:selector:object:';
    function prepareWithInvocationTarget (target: id): id; message 'prepareWithInvocationTarget:';
    procedure registerUndoWithTarget_handler (target: id; undoHandler: OpaqueCBlock); message 'registerUndoWithTarget:handler:'; { available in 10_11, 9_0 }
    procedure setActionIsDiscardable (discardable: boolean); message 'setActionIsDiscardable:'; { available in 10_7, 5_0 }
    function undoActionIsDiscardable: boolean; message 'undoActionIsDiscardable';
    function redoActionIsDiscardable: boolean; message 'redoActionIsDiscardable';
    function undoActionName: NSString; message 'undoActionName';
    function redoActionName: NSString; message 'redoActionName';
    procedure setActionName (actionName: NSString); message 'setActionName:';
    function undoMenuItemTitle: NSString; message 'undoMenuItemTitle';
    function redoMenuItemTitle: NSString; message 'redoMenuItemTitle';
    function undoMenuTitleForUndoActionName (actionName: NSString): NSString; message 'undoMenuTitleForUndoActionName:';
    function redoMenuTitleForUndoActionName (actionName: NSString): NSString; message 'redoMenuTitleForUndoActionName:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUndoManagerCheckpointNotification: NSNotificationName { available in 10_0, 3_0 }; cvar; external;
  NSUndoManagerWillUndoChangeNotification: NSNotificationName { available in 10_0, 3_0 }; cvar; external;
  NSUndoManagerWillRedoChangeNotification: NSNotificationName { available in 10_0, 3_0 }; cvar; external;
  NSUndoManagerDidUndoChangeNotification: NSNotificationName { available in 10_0, 3_0 }; cvar; external;
  NSUndoManagerDidRedoChangeNotification: NSNotificationName { available in 10_0, 3_0 }; cvar; external;
  NSUndoManagerDidOpenUndoGroupNotification: NSNotificationName { available in 10_0, 3_0 }; cvar; external;
  NSUndoManagerWillCloseUndoGroupNotification: NSNotificationName { available in 10_0, 3_0 }; cvar; external;
  NSUndoManagerDidCloseUndoGroupNotification: NSNotificationName { available in 10_7, 5_0 }; cvar; external;
{$endif}

