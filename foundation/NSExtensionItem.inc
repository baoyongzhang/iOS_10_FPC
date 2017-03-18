{ Parsed from Foundation.framework NSExtensionItem.h }

{$ifdef TYPES}
type
  NSExtensionItemPtr = ^NSExtensionItem;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef CLASSES}

type
  NSExtensionItem = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:';
    function attributedTitle: NSAttributedString; message 'attributedTitle';
    procedure setAttributedContentText(newValue: NSAttributedString); message 'setAttributedContentText:';
    function attributedContentText: NSAttributedString; message 'attributedContentText';
    procedure setAttachments(newValue: NSArray); message 'setAttachments:';
    function attachments: NSArray; message 'attachments';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSExtensionItemAttributedTitleKey: NSString *__null_unspecified { available in 10_10, 8_0 }; cvar; external;
  NSExtensionItemAttributedContentTextKey: NSString *__null_unspecified { available in 10_10, 8_0 }; cvar; external;
  NSExtensionItemAttachmentsKey: NSString *__null_unspecified { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$endif}
