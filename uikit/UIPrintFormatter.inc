{ Parsed from UIKit.framework UIPrintFormatter.h }

{$ifdef TYPES}
type
  UIPrintFormatterPtr = ^UIPrintFormatter;
  UISimpleTextPrintFormatterPtr = ^UISimpleTextPrintFormatter;
  UIMarkupTextPrintFormatterPtr = ^UIMarkupTextPrintFormatter;
  UIViewPrintFormatterPtr = ^UIViewPrintFormatter;
{$endif}

{$ifdef CLASSES}

type
  UIPrintFormatter = objcclass external (NSObject, NSCopyingProtocol)
  public
    function __TVOS_PROHIBITED_: UIPrintPageRenderer *printPageRenderer; message 'TVOS_PROHIBITED';
    procedure removeFromPrintPageRenderer __TVOS_PROHIBITED; message 'removeFromPrintPageRenderer __TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED(newValue: CGFloat maximumContentHeight); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: CGFloat maximumContentHeight; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: CGFloat maximumContentWidth); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: CGFloat maximumContentWidth; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: UIEdgeInsets contentInsets); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___: UIEdgeInsets contentInsets; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED___(newValue: UIEdgeInsets perPageContentInsets); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED____: UIEdgeInsets perPageContentInsets; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED____(newValue: NSInteger startPage); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_____: NSInteger startPage; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED______: NSInteger pageCount; message 'TVOS_PROHIBITED';
    function rectForPageAtIndex (pageIndex: NSInteger): CGRect; message 'rectForPageAtIndex:';
    procedure drawInRect_forPageAtIndex (rect: CGRect; pageIndex: NSInteger); message 'drawInRect:forPageAtIndex:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  UISimpleTextPrintFormatter = objcclass external (UIPrintFormatter)
  private
  public
    function initWithText (text: NSString): instancetype; message 'initWithText:';
    function initWithAttributedText (attributedText: NSAttributedString): instancetype; message 'initWithAttributedText:'; { available in 7_0 }
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setAttributedText(newValue: NSAttributedString); message 'setAttributedText:';
    function attributedText: NSAttributedString; message 'attributedText';
    procedure setFont(newValue: UIFont); message 'setFont:';
    function font: UIFont; message 'font';
    procedure setColor(newValue: UIColor); message 'setColor:';
    function color: UIColor; message 'color';
    procedure setTextAlignment(newValue: NSTextAlignment); message 'setTextAlignment:';
    function textAlignment: NSTextAlignment; message 'textAlignment';
  end;

type
  UIMarkupTextPrintFormatter = objcclass external (UIPrintFormatter)
  private
  public
    function initWithMarkupText (markupText: NSString): instancetype; message 'initWithMarkupText:';
    procedure setMarkupText(newValue: NSString); message 'setMarkupText:';
    function markupText: NSString; message 'markupText';
  end;

type
  UIViewPrintFormatter = objcclass external (UIPrintFormatter)
  public
    function view: UIView; message 'view';
  end;


type
  UIView_UIPrintFormatter = objccategory external name 'UIPrintFormatter' (UIView)
    function viewPrintFormatter __TVOS_PROHIBITED: UIViewPrintFormatter; message 'viewPrintFormatter __TVOS_PROHIBITED';
    procedure drawRect_forViewPrintFormatter (rect: CGRect; formatter: UIViewPrintFormatter); message 'drawRect:forViewPrintFormatter:';
  end;
{$endif}

