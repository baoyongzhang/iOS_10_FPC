{ Parsed from UIKit.framework UITableViewHeaderFooterView.h }

{$ifdef TYPES}
type
  UITableViewHeaderFooterViewPtr = ^UITableViewHeaderFooterView;
{$endif}

{$ifdef CLASSES}

type
  UITableViewHeaderFooterView = objcclass external (UIView)
  public
    function initWithReuseIdentifier (reuseIdentifier: nullable NSStringPtr): instancetype; message 'initWithReuseIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    function textLabel: UILabel; message 'textLabel';
    function detailTextLabel: UILabel; message 'detailTextLabel';
    function contentView: UIView; message 'contentView';
    procedure setBackgroundView(newValue: UIView); message 'setBackgroundView:';
    function backgroundView: UIView; message 'backgroundView';
    function reuseIdentifier: NSString; message 'reuseIdentifier';
    procedure prepareForReuse; message 'prepareForReuse';
  end;
{$endif}

