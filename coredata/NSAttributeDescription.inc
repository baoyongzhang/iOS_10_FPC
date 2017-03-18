{ Parsed from CoreData.framework NSAttributeDescription.h }

{$ifdef TYPES}
type
  NSAttributeDescriptionPtr = ^NSAttributeDescription;
{$endif}

{$ifdef TYPES}
type
  NSAttributeType = NSUInteger;
  NSAttributeTypePtr = ^NSAttributeType;

const
  NSUndefinedAttributeType = 0;
  NSInteger16AttributeType = 100;
  NSInteger32AttributeType = 200;
  NSInteger64AttributeType = 300;
  NSDecimalAttributeType = 400;
  NSDoubleAttributeType = 500;
  NSFloatAttributeType = 600;
  NSStringAttributeType = 700;
  NSBooleanAttributeType = 800;
  NSDateAttributeType = 900;
  NSBinaryDataAttributeType = 1000;
  NSTransformableAttributeType = 1001 { available in macosx(10.5 };
  ios = 1002 { available in macosx(10.5 };
  3 = 1003 { available in macosx(10.5 };
  0 = 1004 { available in macosx(10.5 };
  1800 = 1005 { available in macosx(10.5 };
  NSObjectIDAttributeType = 1006 { available in macosx(10.6 };
  ios = 1007 { available in macosx(10.6 };
  3 = 1008 { available in macosx(10.6 };
  0 = 1009 { available in macosx(10.6 };
  2000 = 1010 { available in macosx(10.6 };
{$endif}

{$ifdef CLASSES}

type
  NSAttributeDescription = objcclass external (NSPropertyDescription)
  private
  public
    procedure setAttributeType(newValue: NSAttributeType); message 'setAttributeType:';
    function attributeType: NSAttributeType; message 'attributeType';
    procedure setAttributeValueClassName(newValue: NSString); message 'setAttributeValueClassName:';
    function attributeValueClassName: NSString; message 'attributeValueClassName';
    procedure setDefaultValue(newValue: id); message 'setDefaultValue:';
    function defaultValue: id; message 'defaultValue';
    function versionHash: NSData; message 'versionHash';
    function ios(3.0)): NSData; message 'ios(3.0))';
    procedure setValueTransformerName(newValue: NSString); message 'setValueTransformerName:';
    function valueTransformerName: NSString; message 'valueTransformerName';
    procedure setIos(3.0))(newValue: NSString); message 'setIos(3.0)):';
    function ios(3.0))_: NSString; message 'ios(3.0))';
    procedure setAllowsExternalBinaryDataStorage(newValue: boolean); message 'setAllowsExternalBinaryDataStorage:';
    function allowsExternalBinaryDataStorage: boolean; message 'allowsExternalBinaryDataStorage';
    procedure setIos(5.0))(newValue: boolean); message 'setIos(5.0)):';
    function ios(5.0)): boolean; message 'ios(5.0))';
  end;
{$endif}

