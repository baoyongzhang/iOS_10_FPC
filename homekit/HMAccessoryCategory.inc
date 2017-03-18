{ Parsed from HomeKit.framework HMAccessoryCategory.h }

{$ifdef TYPES}
type
  HMAccessoryCategoryPtr = ^HMAccessoryCategory;
{$endif}

{$ifdef CLASSES}

type
  HMAccessoryCategory = objcclass external (NSObject)
  public
    function categoryType: NSString; message 'categoryType';
    function localizedDescription: NSString; message 'localizedDescription';
  end;
{$endif}

