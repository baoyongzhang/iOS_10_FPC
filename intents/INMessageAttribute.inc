{ Parsed from Intents.framework INMessageAttribute.h }

{$ifndef INMessageAttribute_h}
{$ifdef TYPES}
type
  INMessageAttribute = NSInteger;
  INMessageAttributePtr = ^INMessageAttribute;

const
  INMessageAttributeUnknown = 0;
  INMessageAttributeRead = 1;
  INMessageAttributeUnread = 2;
  INMessageAttributeFlagged = 3;
  INMessageAttributeUnflagged = 4;
{$endif}

{$endif}
