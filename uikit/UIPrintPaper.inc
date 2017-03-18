{ Parsed from UIKit.framework UIPrintPaper.h }

{$ifdef TYPES}
type
  UIPrintPaperPtr = ^UIPrintPaper;
{$endif}

{$ifdef CLASSES}

type
  UIPrintPaper = objcclass external (NSObject)
  public
    class function bestPaperForPageSize_withPapersFromArray (contentSize: CGSize; paperList: UIPrintPaper *ProtocolPtr): UIPrintPaper; message 'bestPaperForPageSize:withPapersFromArray:';
    function paperSize: CGSize; message 'paperSize';
    function printableRect: CGRect; message 'printableRect';
  end;


type
  Deprecated_Nonfunctional = objccategory external (UIPrintPaper)
    function printRect __TVOS_PROHIBITED: CGRect; message 'printRect __TVOS_PROHIBITED';
  end;
{$endif}

