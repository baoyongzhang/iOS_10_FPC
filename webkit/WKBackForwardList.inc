{ Parsed from WebKit.framework WKBackForwardList.h }

{$ifdef TYPES}
type
  WKBackForwardListPtr = ^WKBackForwardList;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKBackForwardList = objcclass external (NSObject)
  public
    function currentItem: WKBackForwardListItem; message 'currentItem';
    function backItem: WKBackForwardListItem; message 'backItem';
    function forwardItem: WKBackForwardListItem; message 'forwardItem';
    function itemAtIndex (index: NSInteger): nullable WKBackForwardListItemPtr; message 'itemAtIndex:';
    function backList: WKBackForwardListItem *ProtocolPtr; message 'backList';
    function forwardList: WKBackForwardListItem *ProtocolPtr; message 'forwardList';
  end;
{$endif}

{$endif}
