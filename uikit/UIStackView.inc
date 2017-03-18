{ Parsed from UIKit.framework UIStackView.h }

{$ifdef TYPES}
type
  UIStackViewPtr = ^UIStackView;
{$endif}

{$ifdef TYPES}
type
  UIStackViewDistribution = NSInteger;
  UIStackViewDistributionPtr = ^UIStackViewDistribution;

const
  UIStackViewDistributionFill = 0;
  UIStackViewDistributionFillEqually = 1;
  UIStackViewDistributionFillProportionally = 2;
  UIStackViewDistributionEqualSpacing = 3;
  UIStackViewDistributionEqualCentering = 4;

type
  UIStackViewAlignment = NSInteger;
  UIStackViewAlignmentPtr = ^UIStackViewAlignment;

const
  UIStackViewAlignmentFill = 0;
  UIStackViewAlignmentLeading = 1;
  UIStackViewAlignmentTop = UIStackViewAlignmentLeading;
  UIStackViewAlignmentFirstBaseline = 2;
  UIStackViewAlignmentCenter = 3;
  UIStackViewAlignmentTrailing = 4;
  UIStackViewAlignmentBottom = UIStackViewAlignmentTrailing;
  UIStackViewAlignmentLastBaseline = 5;
{$endif}

{$ifdef CLASSES}

type
  UIStackView = objcclass external (UIView)
  public
    function initWithFrame (frame: CGRect): instancetype; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithArrangedSubviews (views: __kindof UIView *ProtocolPtr): instancetype; message 'initWithArrangedSubviews:';
    function arrangedSubviews: __kindof UIView *ProtocolPtr; message 'arrangedSubviews';
    procedure addArrangedSubview (view: UIView); message 'addArrangedSubview:';
    procedure removeArrangedSubview (view: UIView); message 'removeArrangedSubview:';
    procedure insertArrangedSubview_atIndex (view: UIView; stackIndex: NSUInteger); message 'insertArrangedSubview:atIndex:';
    procedure setAxis(newValue: UILayoutConstraintAxis); message 'setAxis:';
    function axis: UILayoutConstraintAxis; message 'axis';
    procedure setDistribution(newValue: UIStackViewDistribution); message 'setDistribution:';
    function distribution: UIStackViewDistribution; message 'distribution';
    procedure setAlignment(newValue: UIStackViewAlignment); message 'setAlignment:';
    function alignment: UIStackViewAlignment; message 'alignment';
    procedure setSpacing(newValue: CGFloat); message 'setSpacing:';
    function spacing: CGFloat; message 'spacing';
    procedure setBaselineRelativeArrangement(newValue: boolean); message 'setBaselineRelativeArrangement:';
    function isBaselineRelativeArrangement: boolean; message 'isBaselineRelativeArrangement';
    procedure setLayoutMarginsRelativeArrangement(newValue: boolean); message 'setLayoutMarginsRelativeArrangement:';
    function isLayoutMarginsRelativeArrangement: boolean; message 'isLayoutMarginsRelativeArrangement';
  end;
{$endif}

