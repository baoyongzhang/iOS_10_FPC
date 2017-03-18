{ Parsed from WatchKit.framework WKInterfaceTable.h }

{$ifdef TYPES}
type
  WKInterfaceTablePtr = ^WKInterfaceTable;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceTable = objcclass external (WKInterfaceObject)
  public
    procedure setRowTypes (rowTypes: NSString*ProtocolPtr); message 'setRowTypes:';
    procedure setNumberOfRows_withRowType (numberOfRows: NSInteger; rowType: NSString); message 'setNumberOfRows:withRowType:';
    function numberOfRows: NSInteger; message 'numberOfRows';
    function rowControllerAtIndex (index: NSInteger): nullable id; message 'rowControllerAtIndex:';
    procedure insertRowsAtIndexes_withRowType (rows: NSIndexSet; rowType: NSString); message 'insertRowsAtIndexes:withRowType:';
    procedure removeRowsAtIndexes (rows: NSIndexSet); message 'removeRowsAtIndexes:';
    procedure scrollToRowAtIndex (index: NSInteger); message 'scrollToRowAtIndex:';
    procedure performSegueForRow (row: NSInteger); message 'performSegueForRow:'; { available in 3.0 }
  end;
{$endif}

