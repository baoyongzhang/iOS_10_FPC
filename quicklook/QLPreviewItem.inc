{ Parsed from QuickLook.framework QLPreviewItem.h }

{$ifdef TYPES}
type
  QLPreviewItemProtocolPtr = ^QLPreviewItemProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  QLPreviewItemProtocol = objcprotocol external name 'QLPreviewItem' (NSObjectProtocol)
  required
    function previewItemURL: NSURL; message 'previewItemURL';
  optional
    function previewItemTitle: NSString; message 'previewItemTitle';
  end;
{$endif}

{$ifdef CLASSES}

type
  QLPreviewConvenienceAdditions = objccategory external (NSURL)
  end;
{$endif}

