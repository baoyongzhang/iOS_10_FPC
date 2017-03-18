{ Parsed from UIKit.framework UILocalizedIndexedCollation.h }

{$ifdef TYPES}
type
  UILocalizedIndexedCollationPtr = ^UILocalizedIndexedCollation;
{$endif}

{$ifdef CLASSES}

type
  UILocalizedIndexedCollation = objcclass external (NSObject)
  public
    class function currentCollation: instancetype; message 'currentCollation';
    function sectionTitles: NSString *ProtocolPtr; message 'sectionTitles';
    function sectionIndexTitles: NSString *ProtocolPtr; message 'sectionIndexTitles';
    function sectionForSectionIndexTitleAtIndex (indexTitleIndex: NSInteger): NSInteger; message 'sectionForSectionIndexTitleAtIndex:';
    function sectionForObject_collationStringSelector (object_: id; selector: SEL): NSInteger; message 'sectionForObject:collationStringSelector:';
    function sortedArrayFromArray_collationStringSelector (array_: NSArray; selector: SEL): NSArray; message 'sortedArrayFromArray:collationStringSelector:';
  end;
{$endif}

