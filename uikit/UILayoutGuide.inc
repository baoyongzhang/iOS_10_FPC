{ Parsed from UIKit.framework UILayoutGuide.h }

{$ifdef TYPES}
type
  UILayoutGuidePtr = ^UILayoutGuide;
{$endif}

{$ifdef CLASSES}

type
  UILayoutGuide = objcclass external (NSObject, NSCodingProtocol)
  public
    function layoutFrame: CGRect; message 'layoutFrame';
    procedure setOwningView(newValue: UIView); message 'setOwningView:';
    function owningView: UIView; message 'owningView';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    function leadingAnchor: NSLayoutXAxisAnchor; message 'leadingAnchor';
    function trailingAnchor: NSLayoutXAxisAnchor; message 'trailingAnchor';
    function leftAnchor: NSLayoutXAxisAnchor; message 'leftAnchor';
    function rightAnchor: NSLayoutXAxisAnchor; message 'rightAnchor';
    function topAnchor: NSLayoutYAxisAnchor; message 'topAnchor';
    function bottomAnchor: NSLayoutYAxisAnchor; message 'bottomAnchor';
    function widthAnchor: NSLayoutDimension; message 'widthAnchor';
    function heightAnchor: NSLayoutDimension; message 'heightAnchor';
    function centerXAnchor: NSLayoutXAxisAnchor; message 'centerXAnchor';
    function centerYAnchor: NSLayoutYAxisAnchor; message 'centerYAnchor';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

