{ Parsed from UIKit.framework UIRefreshControl.h }

{$ifdef TYPES}
type
  UIRefreshControlPtr = ^UIRefreshControl;
{$endif}

{$ifdef CLASSES}

type
  UIRefreshControl = objcclass external (UIControl)
  public
    function init: instancetype; message 'init';
    function isRefreshing: boolean; message 'isRefreshing';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:';
    function attributedTitle: NSAttributedString; message 'attributedTitle';
    procedure beginRefreshing; message 'beginRefreshing'; { available in 6_0 }
    procedure endRefreshing; message 'endRefreshing'; { available in 6_0 }
  end;
{$endif}

