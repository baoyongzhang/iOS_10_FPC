{ Parsed from UIKit.framework NSTextContainer.h }

{$ifdef TYPES}
type
  NSTextContainerPtr = ^NSTextContainer;
{$endif}

{$ifdef CLASSES}

type
  NSTextContainer = objcclass external (NSObject, NSCodingProtocol, NSTextLayoutOrientationProviderProtocol)
  public
    function initWithSize (size: CGSize): instancetype; message 'initWithSize:'; { available in 10_11, 7_0 }
    function initWithCoder (coder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setLayoutManager(newValue: NSLayoutManager); message 'setLayoutManager:';
    function layoutManager: NSLayoutManager; message 'layoutManager';
    procedure replaceLayoutManager (newLayoutManager: NSLayoutManager); message 'replaceLayoutManager:'; { available in 10_0, 9_0 }
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure setExclusionPaths(newValue: UIBezierPath *ProtocolPtr); message 'setExclusionPaths:';
    function exclusionPaths: UIBezierPath *ProtocolPtr; message 'exclusionPaths';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setLineFragmentPadding(newValue: CGFloat); message 'setLineFragmentPadding:';
    function lineFragmentPadding: CGFloat; message 'lineFragmentPadding';
    procedure setMaximumNumberOfLines(newValue: NSUInteger); message 'setMaximumNumberOfLines:';
    function maximumNumberOfLines: NSUInteger; message 'maximumNumberOfLines';
    function lineFragmentRectForProposedRect_atIndex_writingDirection_remainingRect (proposedRect: CGRect; characterIndex: NSUInteger; baseWritingDirection: NSWritingDirection; remainingRect: nullable CGRectPtr): CGRect; message 'lineFragmentRectForProposedRect:atIndex:writingDirection:remainingRect:'; { available in 10_11, 7_0 }
    function isSimpleRectangularTextContainer: boolean; message 'isSimpleRectangularTextContainer';
    procedure setWidthTracksTextView(newValue: boolean); message 'setWidthTracksTextView:';
    function widthTracksTextView: boolean; message 'widthTracksTextView';
    procedure setHeightTracksTextView(newValue: boolean); message 'setHeightTracksTextView:';
    function heightTracksTextView: boolean; message 'heightTracksTextView';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function layoutOrientation: NSTextLayoutOrientation; message 'layoutOrientation';
  end;
{$endif}

