{ Parsed from SpriteKit.framework SKAttribute.h }

{$ifdef TYPES}
type
  SKAttributePtr = ^SKAttribute;
  SKAttributeValuePtr = ^SKAttributeValue;
{$endif}

{$ifdef TYPES}
type
  SKAttributeType = NSInteger;
  SKAttributeTypePtr = ^SKAttributeType;

const
  SKAttributeTypeNone = 0;
  SKAttributeTypeFloat = 1;
  SKAttributeTypeVectorFloat2 = 2;
  SKAttributeTypeVectorFloat3 = 3;
  SKAttributeTypeVectorFloat4 = 4;
  SKAttributeTypeHalfFloat = 5;
  SKAttributeTypeVectorHalfFloat2 = 6;
  SKAttributeTypeVectorHalfFloat3 = 7;
  SKAttributeTypeVectorHalfFloat4 = 8;
{$endif}

{$ifdef CLASSES}

type
  SKAttribute = objcclass external (NSObject, NSCodingProtocol)
  public
    class function attributeWithName_type (name: NSString; type_: SKAttributeType): instancetype; message 'attributeWithName:type:';
    function initWithName_type (name: NSString; type_: SKAttributeType): instancetype; message 'initWithName:type:'; { NS_DESIGNATED_INITIALIZER }
    function name: NSString; message 'name';
    function type_: SKAttributeType; message 'type';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;

type
  SKAttributeValue = objcclass external (NSObject, NSCodingProtocol)
  public
    class function valueWithFloat (value: single): instancetype; message 'valueWithFloat:';
    class function valueWithVectorFloat2 (value: vector_float2): instancetype; message 'valueWithVectorFloat2:';
    class function valueWithVectorFloat3 (value: vector_float3): instancetype; message 'valueWithVectorFloat3:';
    class function valueWithVectorFloat4 (value: vector_float4): instancetype; message 'valueWithVectorFloat4:';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setFloatValue(newValue: single); message 'setFloatValue:';
    function floatValue: single; message 'floatValue';
    procedure setVectorFloat2Value(newValue: vector_float2); message 'setVectorFloat2Value:';
    function vectorFloat2Value: vector_float2; message 'vectorFloat2Value';
    procedure setVectorFloat3Value(newValue: vector_float3); message 'setVectorFloat3Value:';
    function vectorFloat3Value: vector_float3; message 'vectorFloat3Value';
    procedure setVectorFloat4Value(newValue: vector_float4); message 'setVectorFloat4Value:';
    function vectorFloat4Value: vector_float4; message 'vectorFloat4Value';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

