{ Parsed from UIKit.framework NSShadow.h }

{$ifdef TYPES}
type
  NSShadowPtr = ^NSShadow;
{$endif}

{$ifdef CLASSES}

type
  NSShadow = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setShadowOffset(newValue: CGSize); message 'setShadowOffset:';
    function shadowOffset: CGSize; message 'shadowOffset';
    procedure setShadowBlurRadius(newValue: CGFloat); message 'setShadowBlurRadius:';
    function shadowBlurRadius: CGFloat; message 'shadowBlurRadius';
    procedure setShadowColor(newValue: id); message 'setShadowColor:';
    function shadowColor: id; message 'shadowColor';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

