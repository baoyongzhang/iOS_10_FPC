{ Parsed from CallKit.framework CXPlayDTMFCallAction.h }

{$ifdef TYPES}
type
  CXPlayDTMFCallActionPtr = ^CXPlayDTMFCallAction;
{$endif}

{$ifdef TYPES}
type
  CXPlayDTMFCallActionType = NSInteger;
  CXPlayDTMFCallActionTypePtr = ^CXPlayDTMFCallActionType;

const
  CXPlayDTMFCallActionTypeSingleTone = 1;
  CXPlayDTMFCallActionTypeSoftPause = 2;
  CXPlayDTMFCallActionTypeHardPause = 3;
{$endif}

{$ifdef CLASSES}

type
  CXPlayDTMFCallAction = objcclass external (CXCallAction)
  public
    function initWithCallUUID_digits_type (callUUID_: NSUUID; digits: NSString; type_: CXPlayDTMFCallActionType): instancetype; message 'initWithCallUUID:digits:type:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCallUUID (callUUID_: NSUUID): instancetype; message 'initWithCallUUID:';
    procedure setDigits(newValue: NSString); message 'setDigits:';
    function digits: NSString; message 'digits';
    procedure setType(newValue: CXPlayDTMFCallActionType); message 'setType:';
    function type_: CXPlayDTMFCallActionType; message 'type';
  end;
{$endif}

