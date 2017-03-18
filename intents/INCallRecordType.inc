{ Parsed from Intents.framework INCallRecordType.h }

{$ifndef INCallRecordType_h}
{$ifdef TYPES}
type
  INCallRecordType = NSInteger;
  INCallRecordTypePtr = ^INCallRecordType;

const
  INCallRecordTypeUnknown = 0;
  INCallRecordTypeOutgoing = 1;
  INCallRecordTypeMissed = 2;
  INCallRecordTypeReceived = 3;
{$endif}

{$endif}
