{ Parsed from WatchConnectivity.framework WCSessionFile.h }

{$ifdef TYPES}
type
  WCSessionFilePtr = ^WCSessionFile;
  WCSessionFileTransferPtr = ^WCSessionFileTransfer;
{$endif}

{$ifdef CLASSES}

type
  WCSessionFile = objcclass external (NSObject)
  public
    function fileURL: NSURL; message 'fileURL';
    function metadata: NSDictionary; message 'metadata';
  end;

type
  WCSessionFileTransfer = objcclass external (NSObject)
  public
    function file_: WCSessionFile; message 'file';
    function isTransferring: boolean; message 'isTransferring';
    procedure cancel; message 'cancel';
  end;
{$endif}

