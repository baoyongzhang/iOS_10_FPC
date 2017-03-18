{ Parsed from UIKit.framework NSLayoutAnchor.h }

{$ifdef TYPES}
type
  NSLayoutAnchorPtr = ^NSLayoutAnchor;
  NSLayoutXAxisAnchorPtr = ^NSLayoutXAxisAnchor;
  NSLayoutYAxisAnchorPtr = ^NSLayoutYAxisAnchor;
  NSLayoutDimensionPtr = ^NSLayoutDimension;
{$endif}

{$ifdef CLASSES}

type
  NSLayoutAnchor = objcclass external (NSObject, AnchorTypeProtocol)
  public
    function constraintEqualToAnchor (anchor: AnchorTypeProtocolPtr): NSLayoutConstraint; message 'constraintEqualToAnchor:';
    function constraintGreaterThanOrEqualToAnchor (anchor: AnchorTypeProtocolPtr): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToAnchor:';
    function constraintLessThanOrEqualToAnchor (anchor: AnchorTypeProtocolPtr): NSLayoutConstraint; message 'constraintLessThanOrEqualToAnchor:';
    function constraintEqualToAnchor_constant (anchor: AnchorTypeProtocolPtr; c: CGFloat): NSLayoutConstraint; message 'constraintEqualToAnchor:constant:';
    function constraintGreaterThanOrEqualToAnchor_constant (anchor: AnchorTypeProtocolPtr; c: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToAnchor:constant:';
    function constraintLessThanOrEqualToAnchor_constant (anchor: AnchorTypeProtocolPtr; c: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToAnchor:constant:';
  end;

type
  NSLayoutXAxisAnchor = objcclass external (NSLayoutAnchor, NSLayoutXAxisAnchor *Protocol)
  end;

type
  NSLayoutYAxisAnchor = objcclass external (NSLayoutAnchor, NSLayoutYAxisAnchor *Protocol)
  end;

type
  NSLayoutDimension = objcclass external (NSLayoutAnchor, NSLayoutDimension *Protocol)
  public
    function constraintEqualToConstant (c: CGFloat): NSLayoutConstraint; message 'constraintEqualToConstant:';
    function constraintGreaterThanOrEqualToConstant (c: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToConstant:';
    function constraintLessThanOrEqualToConstant (c: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToConstant:';
    function constraintEqualToAnchor_multiplier (anchor: NSLayoutDimension; m: CGFloat): NSLayoutConstraint; message 'constraintEqualToAnchor:multiplier:';
    function constraintGreaterThanOrEqualToAnchor_multiplier (anchor: NSLayoutDimension; m: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToAnchor:multiplier:';
    function constraintLessThanOrEqualToAnchor_multiplier (anchor: NSLayoutDimension; m: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToAnchor:multiplier:';
    function constraintEqualToAnchor_multiplier_constant (anchor: NSLayoutDimension; m: CGFloat; c: CGFloat): NSLayoutConstraint; message 'constraintEqualToAnchor:multiplier:constant:';
    function constraintGreaterThanOrEqualToAnchor_multiplier_constant (anchor: NSLayoutDimension; m: CGFloat; c: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToAnchor:multiplier:constant:';
    function constraintLessThanOrEqualToAnchor_multiplier_constant (anchor: NSLayoutDimension; m: CGFloat; c: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToAnchor:multiplier:constant:';
  end;
{$endif}

