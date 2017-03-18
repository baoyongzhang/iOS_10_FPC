{ Parsed from CoreGraphics.framework CGPDFObject.h }

{$ifndef CGPDFOBJECT_H_}
{$ifdef TYPES}
type
  CGPDFBoolean = char;
  CGPDFBooleanPtr = ^CGPDFBoolean;
  CGPDFInteger = clong;
  CGPDFIntegerPtr = ^CGPDFInteger;
  CGPDFReal = CGFloat;
  CGPDFRealPtr = ^CGPDFReal;
  CGPDFObjectRef = OpaqueType;
  CGPDFObjectType = cint32;
  CGPDFObjectTypePtr = ^CGPDFObjectType;

const
  kCGPDFObjectTypeNull = 1;
  kCGPDFObjectTypeBoolean = 2;
  kCGPDFObjectTypeInteger = 3;
  kCGPDFObjectTypeReal = 4;
  kCGPDFObjectTypeName = 5;
  kCGPDFObjectTypeString = 6;
  kCGPDFObjectTypeArray = 7;
  kCGPDFObjectTypeDictionary = 8;
  kCGPDFObjectTypeStream = 9;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFObjectGetType(object_: CGPDFObjectRef cg_nullable): CGPDFObjectType; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFObjectGetValue(object_: CGPDFObjectRef cg_nullable; type_: CGPDFObjectType; value: void* __nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
