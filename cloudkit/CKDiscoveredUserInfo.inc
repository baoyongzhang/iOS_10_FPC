{ Parsed from CloudKit.framework CKDiscoveredUserInfo.h }

{ Types from CKDiscoveredUserInfo }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  CKDiscoveredUserInfoPtr = ^CKDiscoveredUserInfo;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoveredUserInfo = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function userRecordID: CKRecordID; message 'userRecordID';
    {$if (defined(TARGET_OS_MAC) and not (defined(__i386__)) and not defined(TARGET_OS_IPHONE) and not defined(TARGET_OS_SIMULATOR) and not defined(TARGET_OS_EMBEDDED)) or defined(TARGET_OS_IOS)}
    function firstName: NSString; message 'firstName';
    function lastName: NSString; message 'lastName';
    function displayContact: CNContact; message 'displayContact';
    {$else}
    function firstName_: NSString; message 'firstName';
    function lastName_: NSString; message 'lastName';
    {$endif}
  end;
{$endif}

