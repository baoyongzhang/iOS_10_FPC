{ Parsed from GameKit.framework GKAchievementDescription.h }

{ Types from GKAchievementDescription_UI }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  GKAchievementDescriptionPtr = ^GKAchievementDescription;
{$endif}

{$ifdef CLASSES}

type
  GKAchievementDescription = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    class procedure loadAchievementDescriptionsWithCompletionHandler (completionHandler: void(^ __nullable)(GKAchievementDescription *Protocol * __nullable descriptions,NSError * __nullable error)); message 'loadAchievementDescriptionsWithCompletionHandler:';
    function identifier: NSString; message 'identifier';
    function groupIdentifier: NSString; message 'groupIdentifier';
    function title: NSString; message 'title';
    function achievedDescription: NSString; message 'achievedDescription';
    function unachievedDescription: NSString; message 'unachievedDescription';
    function maximumPoints: NSInteger; message 'maximumPoints';
    function isHidden: boolean; message 'isHidden';
    function isReplayable: boolean; message 'isReplayable';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKAchievementDescription_UI = objccategory external name 'UI' (GKAchievementDescription)
    {$if defined(TARGET_OS_IPHONE)}
    function image: UIImage; message 'image';
    procedure loadImageWithCompletionHandler (completionHandler: void(^ __nullable)(UIImage * __nullable image, NSError * __nullable error)); message 'loadImageWithCompletionHandler:';
    {$else}
    function image_: NSImage; message 'image';
    procedure loadImageWithCompletionHandler (completionHandler: void(^ __nullable)(NSImage * __nullable image, NSError * __nullable error)); message 'loadImageWithCompletionHandler:';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    class function incompleteAchievementImage: nonnull UIImagePtr; message 'incompleteAchievementImage';
    class function placeholderCompletedAchievementImage: nonnull UIImagePtr; message 'placeholderCompletedAchievementImage';
    {$else}
    class function incompleteAchievementImage: nonnull NSImagePtr; message 'incompleteAchievementImage';
    class function placeholderCompletedAchievementImage: nonnull NSImagePtr; message 'placeholderCompletedAchievementImage';
    {$endif}
  end;
{$endif}

