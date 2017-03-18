{ Parsed from UIKit.framework NSLayoutConstraint.h }

{$ifdef TYPES}
type
  NSLayoutConstraintPtr = ^NSLayoutConstraint;
  UILayoutSupportProtocolPtr = ^UILayoutSupportProtocol;
{$endif}

{$ifdef TYPES}
type
  NSLayoutRelation = NSInteger;
  NSLayoutRelationPtr = ^NSLayoutRelation;

const
  NSLayoutRelationLessThanOrEqual = -1;
  NSLayoutRelationEqual = 0;
  NSLayoutRelationGreaterThanOrEqual = 1;

type
  NSLayoutAttribute = NSInteger;
  NSLayoutAttributePtr = ^NSLayoutAttribute;

const
  NSLayoutAttributeLeft = 1;
  NSLayoutAttributeRight = 2;
  NSLayoutAttributeTop = 3;
  NSLayoutAttributeBottom = 4;
  NSLayoutAttributeLeading = 5;
  NSLayoutAttributeTrailing = 6;
  NSLayoutAttributeWidth = 7;
  NSLayoutAttributeHeight = 8;
  NSLayoutAttributeCenterX = 9;
  NSLayoutAttributeCenterY = 10;
  NSLayoutAttributeLastBaseline = 11;
  NSLayoutAttributeBaseline = 12;
  NS_SWIFT_UNAVAILABLE = 13;
  Use = 14;
  lastBaseline = 15;
  instead = 16;
  NSLayoutAttributeLastBaseline = 17;
  NSLayoutAttributeFirstBaseline = 18 { available in 8_0 };
  NSLayoutAttributeLeftMargin = 19 { available in 8_0 };
  NSLayoutAttributeRightMargin = 20 { available in 8_0 };
  NSLayoutAttributeTopMargin = 21 { available in 8_0 };
  NSLayoutAttributeBottomMargin = 22 { available in 8_0 };
  NSLayoutAttributeLeadingMargin = 23 { available in 8_0 };
  NSLayoutAttributeTrailingMargin = 24 { available in 8_0 };
  NSLayoutAttributeCenterXWithinMargins = 25 { available in 8_0 };
  NSLayoutAttributeCenterYWithinMargins = 26 { available in 8_0 };
  NSLayoutAttributeNotAnAttribute = 0;

type
  NSLayoutFormatOptions = NSUInteger;
  NSLayoutFormatOptionsPtr = ^NSLayoutFormatOptions;

const
  NSLayoutFormatAlignAllLeft = 1 shl NSLayoutAttributeLeft;
  NSLayoutFormatAlignAllRight = 1 shl NSLayoutAttributeRight;
  NSLayoutFormatAlignAllTop = 1 shl NSLayoutAttributeTop;
  NSLayoutFormatAlignAllBottom = 1 shl NSLayoutAttributeBottom;
  NSLayoutFormatAlignAllLeading = 1 shl NSLayoutAttributeLeading;
  NSLayoutFormatAlignAllTrailing = 1 shl NSLayoutAttributeTrailing;
  NSLayoutFormatAlignAllCenterX = 1 shl NSLayoutAttributeCenterX;
  NSLayoutFormatAlignAllCenterY = 1 shl NSLayoutAttributeCenterY;
  NSLayoutFormatAlignAllLastBaseline = 1 shl NSLayoutAttributeLastBaseline;
  NSLayoutFormatAlignAllBaseline = 0;
  NS_SWIFT_UNAVAILABLE = 1;
  Use = 2;
  alignAllLastBaseline = 3;
  instead = 4;
  NSLayoutFormatAlignAllLastBaseline = 5;
  NSLayoutFormatAlignAllFirstBaseline = 1 shl NSLayoutAttributeFirstBaseline { available in 8_0 };
  NSLayoutFormatAlignmentMask = $FFFF;
  NSLayoutFormatDirectionLeadingToTrailing = 0 shl 16;
  NSLayoutFormatDirectionLeftToRight = 1 shl 16;
  NSLayoutFormatDirectionRightToLeft = 2 shl 16;
  NSLayoutFormatDirectionMask = $3 shl 16;

type
  UILayoutPriority = single;
  UILayoutPriorityPtr = ^UILayoutPriority;
{$endif}

{$ifdef CLASSES}

type
  NSLayoutConstraint = objcclass external (NSObject)
  public
    class function constraintsWithVisualFormat_options_metrics_views (format: NSString; opts: NSLayoutFormatOptions; metrics: nullable NSDictionaryPtr; views: NSDictionary): __kindof NSLayoutConstraint *ProtocolPtr; message 'constraintsWithVisualFormat:options:metrics:views:';
    class function constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant (view1: id; attr1: NSLayoutAttribute; relation: NSLayoutRelation; view2: nullable id; attr2: NSLayoutAttribute; multiplier: CGFloat; c: CGFloat): instancetype; message 'constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:';
    procedure setPriority(newValue: UILayoutPriority); message 'setPriority:';
    function priority: UILayoutPriority; message 'priority';
    procedure setShouldBeArchived(newValue: boolean); message 'setShouldBeArchived:';
    function shouldBeArchived: boolean; message 'shouldBeArchived';
    function firstItem: id; message 'firstItem';
    function firstAttribute: NSLayoutAttribute; message 'firstAttribute';
    function secondItem: id; message 'secondItem';
    function secondAttribute: NSLayoutAttribute; message 'secondAttribute';
    function firstAnchor: NSLayoutAnchor; message 'firstAnchor';
    function secondAnchor: NSLayoutAnchor; message 'secondAnchor';
    function relation: NSLayoutRelation; message 'relation';
    function multiplier: CGFloat; message 'multiplier';
    procedure setConstant(newValue: CGFloat); message 'setConstant:';
    function constant: CGFloat; message 'constant';
    procedure setActive(newValue: boolean); message 'setActive:';
    function isActive: boolean; message 'isActive';
    class procedure activateConstraints (constraints: NSLayoutConstraint *ProtocolPtr); message 'activateConstraints:'; { available in 10_10, 8_0 }
    class procedure deactivateConstraints (constraints: NSLayoutConstraint *ProtocolPtr); message 'deactivateConstraints:'; { available in 10_10, 8_0 }
  end;


type
  NSIdentifier = objccategory external (NSLayoutConstraint)
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UILayoutSupportProtocol = objcprotocol external name 'UILayoutSupport' (NSObjectProtocol)
    function length: CGFloat; message 'length';
    function topAnchor: NSLayoutYAxisAnchor; message 'topAnchor';
    function bottomAnchor: NSLayoutYAxisAnchor; message 'bottomAnchor';
    function heightAnchor: NSLayoutDimension; message 'heightAnchor';
  end;
{$endif}

