{ Parsed from UIKit.framework UIPasteboard.h }

{ Types from UIPasteboard }
{$ifdef TYPES}



type
  NS_EXTENSIBLE_STRING_ENUM = NSString *UIPasteboardOption { available in 10_0 };
type
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM { available in 10_0 };
{$endif}


{$ifdef TYPES}
type
  UIPasteboardPtr = ^UIPasteboard;
{$endif}

{$if defined(UIKIT_STRING_ENUMS)}
{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString *UIPasteboardName;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  UIPasteboardName = ^NSString;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  __WATCHOS_PROHIBITED: UIPasteboardName UIPasteboardNameGeneral __TVOS_PROHIBITED; cvar; external;
  __WATCHOS_PROHIBITED: NSString *UIPasteboardNameFind __TVOS_PROHIBITED deprecated 'in 3_0, 10_0, "The Find pasteboard is no longer available."'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIPasteboard = objcclass external (NSObject)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function generalPasteboard: UIPasteboard; message 'generalPasteboard';
    {$else}
    class function generalPasteboard: UIPasteboard; message 'generalPasteboard';
    {$endif}
    class function pasteboardWithName_create (pasteboardName: UIPasteboardName; create_: boolean): nullable UIPasteboardPtr; message 'pasteboardWithName:create:';
    class function pasteboardWithUniqueName: UIPasteboard; message 'pasteboardWithUniqueName';
    function name: UIPasteboardName; message 'name';
    class procedure removePasteboardWithName (pasteboardName: UIPasteboardName); message 'removePasteboardWithName:';
    function isPersistent: boolean; message 'isPersistent';
    procedure setPersistent (persistent: boolean); message 'setPersistent:'; deprecated 'in 3_0, 10_0, "Do not set persistence on pasteboards. This property is set automatically."';
    function changeCount: NSInteger; message 'changeCount';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function pasteboardTypes: NSString *ProtocolPtr; message 'pasteboardTypes';
    {$else}
    function pasteboardTypes: NSString *ProtocolPtr; message 'pasteboardTypes';
    {$endif}
    function containsPasteboardTypes (pasteboardTypes_: NSString *ProtocolPtr): boolean; message 'containsPasteboardTypes:';
    function dataForPasteboardType (pasteboardType: NSString): nullable NSDataPtr; message 'dataForPasteboardType:';
    function valueForPasteboardType (pasteboardType: NSString): nullable id; message 'valueForPasteboardType:';
    procedure setValue_forPasteboardType (value: id; pasteboardType: NSString); message 'setValue:forPasteboardType:';
    procedure setData_forPasteboardType (data: NSData; pasteboardType: NSString); message 'setData:forPasteboardType:';
    function numberOfItems: NSInteger; message 'numberOfItems';
    function pasteboardTypesForItemSet (itemSet: nullable NSIndexSetPtr): nullable NSArray<NSString *Protocol *>Ptr; message 'pasteboardTypesForItemSet:';
    function containsPasteboardTypes_inItemSet (pasteboardTypes_: NSString *ProtocolPtr; itemSet: nullable NSIndexSetPtr): boolean; message 'containsPasteboardTypes:inItemSet:';
    function itemSetWithPasteboardTypes (pasteboardTypes_: NSString *ProtocolPtr): nullable NSIndexSetPtr; message 'itemSetWithPasteboardTypes:';
    function valuesForPasteboardType_inItemSet (pasteboardType: NSString; itemSet: nullable NSIndexSetPtr): nullable NSArrayPtr; message 'valuesForPasteboardType:inItemSet:';
    function dataForPasteboardType_inItemSet (pasteboardType: NSString; itemSet: nullable NSIndexSetPtr): nullable NSArrayPtr; message 'dataForPasteboardType:inItemSet:';
    procedure setItems(newValue: NSArray *>Ptr); message 'setItems:';
    function items: NSArray *>Ptr; message 'items';
    procedure addItems (items_: NSArray *>Ptr); message 'addItems:';
    procedure setItems_options (items_: NSArray *>Ptr; options: NSDictionary); message 'setItems:options:'; { available in 10_0 }
    procedure set__WATCHOS_PROHIBITED(newValue: NSString *string __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: NSString *string __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED_(newValue: NSString *Protocol *strings __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: NSString *Protocol *strings __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED__(newValue: NSURL *URL __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED__: NSURL *URL __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED___(newValue: NSURL *Protocol *URLs __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED___: NSURL *Protocol *URLs __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED____(newValue: UIImage *image __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED____: UIImage *image __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED_____(newValue: UIImage *Protocol *images __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_____: UIImage *Protocol *images __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED______(newValue: UIColor *color __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED______: UIColor *color __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED_______(newValue: UIColor *Protocol *colors __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_______: UIColor *Protocol *colors __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED________: BOOL hasStrings __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED_________: BOOL hasURLs __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED__________: BOOL hasImages __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED___________: BOOL hasColors __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __WATCHOS_PROHIBITED: NSNotificationName UIPasteboardChangedNotification __TVOS_PROHIBITED; cvar; external;
  __WATCHOS_PROHIBITED: NSString *UIPasteboardChangedTypesAddedKey __TVOS_PROHIBITED; cvar; external;
  __WATCHOS_PROHIBITED: NSString *UIPasteboardChangedTypesRemovedKey __TVOS_PROHIBITED; cvar; external;
  __WATCHOS_PROHIBITED: NSNotificationName UIPasteboardRemovedNotification __TVOS_PROHIBITED; cvar; external;
  __WATCHOS_PROHIBITED: NSString *UIPasteboardTypeAutomatic __TVOS_PROHIBITED { available in 10_0 }; cvar; external;
{$endif}

