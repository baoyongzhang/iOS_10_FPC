{ Parsed from GameKit.framework GKNotificationBanner.h }

{$ifdef TYPES}
type
  GKNotificationBannerPtr = ^GKNotificationBanner;
{$endif}

{$ifdef CLASSES}

type
  GKNotificationBanner = objcclass external (NSObject)
  public
    class procedure showBannerWithTitle_message_completionHandler (title: nullable NSStringPtr; message_: nullable NSStringPtr; completionHandler: void(^__nullable)(void)); message 'showBannerWithTitle:message:completionHandler:'; { available in 10_8, 5_0 }
    class procedure showBannerWithTitle_message_duration_completionHandler (title: nullable NSStringPtr; message_: nullable NSStringPtr; duration: NSTimeInterval; completionHandler: void(^__nullable)(void)); message 'showBannerWithTitle:message:duration:completionHandler:'; { available in 10_8, 6_0 }
  end;
{$endif}

