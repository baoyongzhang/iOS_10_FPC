{ Parsed from UIKit.framework UINibLoading.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  UINibExternalObjects: NSString { available in 3_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSBundle_UINibLoadingAdditions = objccategory external name 'UINibLoadingAdditions' (NSBundle)
    function loadNibNamed_owner_options (name: NSString; owner: nullable id; options: nullable NSDictionaryPtr): nullable NSArrayPtr; message 'loadNibNamed:owner:options:';
  end;

type
  UINibLoadingAdditions = objccategory external (NSObject)
    procedure awakeFromNib; message 'awakeFromNib'; { NS_REQUIRES_SUPER }
    procedure prepareForInterfaceBuilder; message 'prepareForInterfaceBuilder'; { available in 8_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *UINibProxiedObjectsKey deprecated 'in 2_0, 3_0'; cvar; external;
{$endif}

