{ Parsed from UIKit.framework UIPrintPageRenderer.h }

{$ifdef TYPES}
type
  UIPrintPageRendererPtr = ^UIPrintPageRenderer;
{$endif}

{$ifdef CLASSES}

type
  UIPrintPageRenderer = objcclass external (NSObject)
  public
    procedure setHeaderHeight(newValue: CGFloat); message 'setHeaderHeight:';
    function headerHeight: CGFloat; message 'headerHeight';
    procedure setFooterHeight(newValue: CGFloat); message 'setFooterHeight:';
    function footerHeight: CGFloat; message 'footerHeight';
    function paperRect: CGRect; message 'paperRect';
    function printableRect: CGRect; message 'printableRect';
    function numberOfPages: NSInteger; message 'numberOfPages';
    procedure setPrintFormatters(newValue: UIPrintFormatter *ProtocolPtr); message 'setPrintFormatters:';
    function printFormatters: UIPrintFormatter *ProtocolPtr; message 'printFormatters';
    function printFormattersForPageAtIndex (pageIndex: NSInteger): nullable UIPrintFormatter *ProtocolPtr; message 'printFormattersForPageAtIndex:';
    procedure addPrintFormatter_startingAtPageAtIndex (formatter: UIPrintFormatter; pageIndex: NSInteger); message 'addPrintFormatter:startingAtPageAtIndex:';
    procedure prepareForDrawingPages (range: NSRange); message 'prepareForDrawingPages:';
    procedure drawPageAtIndex_inRect (pageIndex: NSInteger; printableRect_: CGRect); message 'drawPageAtIndex:inRect:';
    procedure drawPrintFormatter_forPageAtIndex (printFormatter: UIPrintFormatter; pageIndex: NSInteger); message 'drawPrintFormatter:forPageAtIndex:';
    procedure drawHeaderForPageAtIndex_inRect (pageIndex: NSInteger; headerRect: CGRect); message 'drawHeaderForPageAtIndex:inRect:';
    procedure drawContentForPageAtIndex_inRect (pageIndex: NSInteger; contentRect: CGRect); message 'drawContentForPageAtIndex:inRect:';
    procedure drawFooterForPageAtIndex_inRect (pageIndex: NSInteger; footerRect: CGRect); message 'drawFooterForPageAtIndex:inRect:';
  end;
{$endif}

