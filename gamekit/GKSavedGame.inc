{ Parsed from GameKit.framework GKSavedGame.h }

{$ifdef TYPES}
type
  GKSavedGamePtr = ^GKSavedGame;
{$endif}

{$ifdef CLASSES}

type
  GKSavedGame = objcclass external (NSObject, NSCopyingProtocol)
  public
    function name: NSString; message 'name';
    function deviceName: NSString; message 'deviceName';
    function modificationDate: NSDate; message 'modificationDate';
    procedure loadDataWithCompletionHandler (handler: void(^__nullable)(NSData * __nullable data, NSError * __nullable error)); message 'loadDataWithCompletionHandler:'; { available in 10_10, 8_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$if  not defined(TARGET_OS_WATCH)}
{$ifdef CLASSES}

type
  GKLocalPlayer_GKSavedGame = objccategory external name 'GKSavedGame' (GKLocalPlayer)
    procedure fetchSavedGamesWithCompletionHandler (handler: void(^__nullable)(GKSavedGame *Protocol * __nullable savedGames, NSError * __nullable error)); message 'fetchSavedGamesWithCompletionHandler:'; { available in 10_10, 8_0 }
    procedure saveGameData_withName_completionHandler (data: NSData; name: NSString; handler: void(^__nullable)(GKSavedGame * __nullable savedGame, NSError * __nullable error)); message 'saveGameData:withName:completionHandler:'; { available in 10_10, 8_0 }
    procedure deleteSavedGamesWithName_completionHandler (name: NSString; handler: void(^__nullable)(NSError * __nullable error)); message 'deleteSavedGamesWithName:completionHandler:'; { available in 10_10, 8_0 }
    procedure resolveConflictingSavedGames_withData_completionHandler (conflictingSavedGames: GKSavedGame *ProtocolPtr; data: NSData; handler: void(^__nullable)(GKSavedGame *Protocol * __nullable savedGames, NSError * __nullable error)); message 'resolveConflictingSavedGames:withData:completionHandler:'; { available in 10_10, 8_0 }
  end;
{$endif}

{$endif}
