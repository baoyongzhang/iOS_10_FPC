{ Parsed from Intents.framework INMessageAttributeOptions.h }

{$ifndef INMessageAttributeOptions_h}
{$ifdef TYPES}
type
  INMessageAttributeOptions = NSUInteger;
  INMessageAttributeOptionsPtr = ^INMessageAttributeOptions;

const
  INMessageAttributeOptionRead = 1 shl 0;
  INMessageAttributeOptionUnread = 1 shl 1;
  INMessageAttributeOptionFlagged = 1 shl 2;
  INMessageAttributeOptionUnflagged = 1 shl 3;
{$endif}

{$endif}
