{ Parsed from UIKit.framework UINib.h }

{$ifdef TYPES}
type
  UINibPtr = ^UINib;
{$endif}

{$ifdef CLASSES}

type
  UINib = objcclass external (NSObject)
  public
    class function nibWithNibName_bundle (name: NSString; bundleOrNil: nullable NSBundlePtr): UINib; message 'nibWithNibName:bundle:';
    class function nibWithData_bundle (data: NSData; bundleOrNil: nullable NSBundlePtr): UINib; message 'nibWithData:bundle:';
    function instantiateWithOwner_options (ownerOrNil: nullable id; optionsOrNil: nullable NSDictionaryPtr): NSArray; message 'instantiateWithOwner:options:';
  end;
{$endif}

