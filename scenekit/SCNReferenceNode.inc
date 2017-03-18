{ Parsed from SceneKit.framework SCNReferenceNode.h }

{$ifdef TYPES}
type
  SCNReferenceNodePtr = ^SCNReferenceNode;
{$endif}

{$ifdef TYPES}
type
  SCNReferenceLoadingPolicy = NSInteger;
  SCNReferenceLoadingPolicyPtr = ^SCNReferenceLoadingPolicy;

const
  SCNReferenceLoadingPolicyImmediate = 0;
  SCNReferenceLoadingPolicyOnDemand = 1;
{$endif}

{$ifdef CLASSES}

type
  SCNReferenceNode = objcclass external (SCNNode)
  public
    function initWithURL (referenceURL: NSURL): nullable instancetype; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function referenceNodeWithURL (referenceURL: NSURL): nullable instancetype; message 'referenceNodeWithURL:';
    procedure setReferenceURL(newValue: NSURL); message 'setReferenceURL:';
    function referenceURL: NSURL; message 'referenceURL';
    procedure setLoadingPolicy(newValue: SCNReferenceLoadingPolicy); message 'setLoadingPolicy:';
    function loadingPolicy: SCNReferenceLoadingPolicy; message 'loadingPolicy';
    procedure load; message 'load';
    procedure unload; message 'unload';
    function isLoaded: boolean; message 'isLoaded';
  end;
{$endif}

