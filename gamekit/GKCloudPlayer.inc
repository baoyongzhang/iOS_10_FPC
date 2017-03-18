{ Parsed from GameKit.framework GKCloudPlayer.h }

{$ifdef TYPES}
type
  GKCloudPlayerPtr = ^GKCloudPlayer;
{$endif}

{$ifdef CLASSES}

type
  GKCloudPlayer = objcclass external (GKBasePlayer)
  private
    _identifier: NSString;
    _name: NSString;
  public
    class procedure getCurrentSignedInPlayerForContainer_completionHandler (containerName: NSString * __nullable; handler: OpaqueCBlock); message 'getCurrentSignedInPlayerForContainer:completionHandler:';
  end;
{$endif}

