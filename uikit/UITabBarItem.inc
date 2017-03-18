{ Parsed from UIKit.framework UITabBarItem.h }

{$ifdef TYPES}
type
  UITabBarItemPtr = ^UITabBarItem;
{$endif}

{$ifdef TYPES}
type
  UITabBarSystemItem = NSInteger;
  UITabBarSystemItemPtr = ^UITabBarSystemItem;

const
  UITabBarSystemItemMore = 0;
  UITabBarSystemItemFavorites = 1;
  UITabBarSystemItemFeatured = 2;
  UITabBarSystemItemTopRated = 3;
  UITabBarSystemItemRecents = 4;
  UITabBarSystemItemContacts = 5;
  UITabBarSystemItemHistory = 6;
  UITabBarSystemItemBookmarks = 7;
  UITabBarSystemItemSearch = 8;
  UITabBarSystemItemDownloads = 9;
  UITabBarSystemItemMostRecent = 10;
  UITabBarSystemItemMostViewed = 11;
{$endif}

{$ifdef CLASSES}

type
  UITabBarItem = objcclass external (UIBarItem)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithTitle_image_tag (title_: nullable NSStringPtr; image_: nullable UIImagePtr; tag_: NSInteger): instancetype; message 'initWithTitle:image:tag:';
    function initWithTitle_image_selectedImage (title_: nullable NSStringPtr; image_: nullable UIImagePtr; selectedImage: nullable UIImagePtr): instancetype; message 'initWithTitle:image:selectedImage:'; { available in 7_0 }
    function initWithTabBarSystemItem_tag (systemItem: UITabBarSystemItem; tag_: NSInteger): instancetype; message 'initWithTabBarSystemItem:tag:';
    procedure setSelectedImage(newValue: UIImage); message 'setSelectedImage:';
    function selectedImage: UIImage; message 'selectedImage';
    procedure setBadgeValue(newValue: NSString); message 'setBadgeValue:';
    function badgeValue: NSString; message 'badgeValue';
    procedure setFinishedSelectedImage_withFinishedUnselectedImage (selectedImage_: nullable UIImagePtr; unselectedImage: nullable UIImagePtr); message 'setFinishedSelectedImage:withFinishedUnselectedImage:'; deprecated 'in 5_0,7_0,"Use initWithTitle:image:selectedImage: or the image and selectedImage properties along with UIImageRenderingModeAlwaysOriginal"';
    function finishedSelectedImage                            __TVOS_PROHIBITED: nullable UIImagePtr; message 'finishedSelectedImage                            __TVOS_PROHIBITED'; deprecated 'in 5_0,7_0';
    function finishedUnselectedImage                            __TVOS_PROHIBITED: nullable UIImagePtr; message 'finishedUnselectedImage                            __TVOS_PROHIBITED'; deprecated 'in 5_0,7_0';
    procedure setTitlePositionAdjustment(newValue: UIOffset); message 'setTitlePositionAdjustment:';
    function titlePositionAdjustment: UIOffset; message 'titlePositionAdjustment';
    procedure setBadgeColor(newValue: UIColor); message 'setBadgeColor:';
    function badgeColor: UIColor; message 'badgeColor';
    procedure setBadgeTextAttributes_forState (textAttributes: nullable NSDictionaryPtr; state: UIControlState); message 'setBadgeTextAttributes:forState:'; { available in 10_0 }
    function badgeTextAttributesForState (state: UIControlState): nullable NSDictionaryPtr; message 'badgeTextAttributesForState:'; { available in 10_0 }
  end;
{$endif}

