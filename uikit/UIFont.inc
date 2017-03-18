{ Parsed from UIKit.framework UIFont.h }

{ Types from UIFont }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  UIFontPtr = ^UIFont;
{$endif}

{$ifdef CLASSES}

type
  UIFont = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function preferredFontForTextStyle (style: UIFontTextStyle): UIFont; message 'preferredFontForTextStyle:'; { available in 7_0 }
    class function preferredFontForTextStyle_compatibleWithTraitCollection (style: UIFontTextStyle; traitCollection: nullable UITraitCollectionPtr): UIFont; message 'preferredFontForTextStyle:compatibleWithTraitCollection:'; { available in 10_0 }
    class function fontWithName_size (fontName: NSString; fontSize: CGFloat): nullable UIFontPtr; message 'fontWithName:size:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function familyNames: NSString *ProtocolPtr; message 'familyNames';
    {$else}
    class function familyNames: NSString *ProtocolPtr; message 'familyNames';
    {$endif}
    class function fontNamesForFamilyName (familyName: NSString): NSString *ProtocolPtr; message 'fontNamesForFamilyName:';
    class function systemFontOfSize (fontSize: CGFloat): UIFont; message 'systemFontOfSize:';
    class function boldSystemFontOfSize (fontSize: CGFloat): UIFont; message 'boldSystemFontOfSize:';
    class function italicSystemFontOfSize (fontSize: CGFloat): UIFont; message 'italicSystemFontOfSize:';
    class function systemFontOfSize_weight (fontSize: CGFloat; weight: CGFloat): UIFont; message 'systemFontOfSize:weight:'; { available in 8_2 }
    class function monospacedDigitSystemFontOfSize_weight (fontSize: CGFloat; weight: CGFloat): UIFont; message 'monospacedDigitSystemFontOfSize:weight:'; { available in 9_0 }
    function familyName: NSString; message 'familyName';
    function fontName: NSString; message 'fontName';
    function pointSize: CGFloat; message 'pointSize';
    function ascender: CGFloat; message 'ascender';
    function descender: CGFloat; message 'descender';
    function capHeight: CGFloat; message 'capHeight';
    function xHeight: CGFloat; message 'xHeight';
    function lineHeight: CGFloat; message 'lineHeight';
    function leading: CGFloat; message 'leading';
    function fontWithSize (fontSize: CGFloat): UIFont; message 'fontWithSize:';
    class function fontWithDescriptor_size (descriptor: UIFontDescriptor; pointSize_: CGFloat): UIFont; message 'fontWithDescriptor:size:'; { available in 7_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function fontDescriptor: UIFontDescriptor; message 'fontDescriptor';
    {$else}
    function fontDescriptor: UIFontDescriptor; message 'fontDescriptor'; { available in 7_0 }
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

