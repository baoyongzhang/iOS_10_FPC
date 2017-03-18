{ Parsed from PassKit.framework PKObject.h }

{$ifdef TYPES}
type
  PKObjectPtr = ^PKObject;
{$endif}

{$ifndef __PKOBJECT_H}
{$ifdef CLASSES}

type
  PKObject = objcclass external (NSObject)
  end;
{$endif}

{$endif}
