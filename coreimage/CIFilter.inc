{ Parsed from CoreImage.framework CIFilter.h }

{ Types from CIFilterXMPSerialization }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  CIFilterPtr = ^CIFilter;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCIAttributeFilterName: NSString; cvar; external;
  kCIAttributeFilterDisplayName: NSString; cvar; external;
  kCIAttributeDescription: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIAttributeFilterAvailable_Mac: NSString { available in 10_11, 9_0 }; cvar; external;
  kCIAttributeFilterAvailable_iOS: NSString { available in 10_11, 9_0 }; cvar; external;
  kCIAttributeReferenceDocumentation: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIAttributeFilterCategories: NSString; cvar; external;
  kCIAttributeClass: NSString; cvar; external;
  kCIAttributeType: NSString; cvar; external;
  kCIAttributeMin: NSString; cvar; external;
  kCIAttributeMax: NSString; cvar; external;
  kCIAttributeSliderMin: NSString; cvar; external;
  kCIAttributeSliderMax: NSString; cvar; external;
  kCIAttributeDefault: NSString; cvar; external;
  kCIAttributeIdentity: NSString; cvar; external;
  kCIAttributeName: NSString; cvar; external;
  kCIAttributeDisplayName: NSString; cvar; external;
  kCIUIParameterSet: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIUISetBasic: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIUISetIntermediate: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIUISetAdvanced: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIUISetDevelopment: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIAttributeTypeTime: NSString; cvar; external;
  kCIAttributeTypeScalar: NSString; cvar; external;
  kCIAttributeTypeDistance: NSString; cvar; external;
  kCIAttributeTypeAngle: NSString; cvar; external;
  kCIAttributeTypeBoolean: NSString; cvar; external;
  kCIAttributeTypeInteger: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIAttributeTypeCount: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIAttributeTypePosition: NSString; cvar; external;
  kCIAttributeTypeOffset: NSString; cvar; external;
  kCIAttributeTypePosition3: NSString; cvar; external;
  kCIAttributeTypeRectangle: NSString; cvar; external;
  kCIAttributeTypeOpaqueColor: NSString { available in 10_4, 9_0 }; cvar; external;
  kCIAttributeTypeColor: NSString { available in 10_11, 5_0 }; cvar; external;
  kCIAttributeTypeGradient: NSString { available in 10_4, 9_0 }; cvar; external;
  kCIAttributeTypeImage: NSString { available in 10_11, 5_0 }; cvar; external;
  kCIAttributeTypeTransform: NSString { available in 10_11, 5_0 }; cvar; external;
  kCICategoryDistortionEffect: NSString; cvar; external;
  kCICategoryGeometryAdjustment: NSString; cvar; external;
  kCICategoryCompositeOperation: NSString; cvar; external;
  kCICategoryHalftoneEffect: NSString; cvar; external;
  kCICategoryColorAdjustment: NSString; cvar; external;
  kCICategoryColorEffect: NSString; cvar; external;
  kCICategoryTransition: NSString; cvar; external;
  kCICategoryTileEffect: NSString; cvar; external;
  kCICategoryGenerator: NSString; cvar; external;
  kCICategoryReduction: NSString { available in 10_5, 5_0 }; cvar; external;
  kCICategoryGradient: NSString; cvar; external;
  kCICategoryStylize: NSString; cvar; external;
  kCICategorySharpen: NSString; cvar; external;
  kCICategoryBlur: NSString; cvar; external;
  kCICategoryVideo: NSString; cvar; external;
  kCICategoryStillImage: NSString; cvar; external;
  kCICategoryInterlaced: NSString; cvar; external;
  kCICategoryNonSquarePixels: NSString; cvar; external;
  kCICategoryHighDynamicRange: NSString; cvar; external;
  kCICategoryBuiltIn: NSString; cvar; external;
  kCICategoryFilterGenerator: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIApplyOptionExtent: NSString { available in 10_4 }; cvar; external;
  kCIApplyOptionDefinition: NSString { available in 10_4 }; cvar; external;
  kCIApplyOptionUserInfo: NSString { available in 10_4 }; cvar; external;
  kCIApplyOptionColorSpace: NSString { available in 10_4 }; cvar; external;
  kCIOutputImageKey: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIInputBackgroundImageKey: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIInputImageKey: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIInputTimeKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputTransformKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputScaleKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputAspectRatioKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputCenterKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputRadiusKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputAngleKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputRefractionKey: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIInputWidthKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputSharpnessKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputIntensityKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputEVKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputSaturationKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputColorKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputBrightnessKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputContrastKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputBiasKey: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIInputWeightsKey: NSString { available in 10_11, 9_0 }; cvar; external;
  kCIInputGradientImageKey: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIInputMaskImageKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputShadingImageKey: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIInputTargetImageKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputExtentKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputVersionKey: NSString { available in 10_11, 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CIFilter = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _priv:array[0..7] of pointer;
  public
    function outputImage: CIImage; message 'outputImage';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function name_: NSString; message 'name'; { available in 10_5,5_0 }
    procedure setName (aString: NSString); message 'setName:'; { available in 10_5,10_0 }
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    function inputKeys: NSString *ProtocolPtr; message 'inputKeys';
    function outputKeys: NSString *ProtocolPtr; message 'outputKeys';
    procedure setDefaults; message 'setDefaults';
    function attributes: NSDictionary; message 'attributes';
    function apply_arguments_options (k: CIKernel; args: nullable NSArrayPtr; dict: nullable NSDictionaryPtr): nullable CIImagePtr; message 'apply:arguments:options:'; { available in 10_4 }
    function apply (k: CIKernel): nullable CIImagePtr; message 'apply:'; { available in 10_4 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  CIFilterRegistry = objccategory external (CIFilter)
    class function filterWithName (name__: NSString): nullable CIFilterPtr; message 'filterWithName:';
    class function filterWithName_keysAndValues (name__: NSString; key0: id): nullable CIFilterPtr; message 'filterWithName:keysAndValues:';
    class function filterWithName_withInputParameters (name__: NSString; params: nullable NSDictionaryPtr): nullable CIFilterPtr; message 'filterWithName:withInputParameters:'; { available in 10_10, 8_0 }
    class function filterNamesInCategory (category: nullable NSStringPtr): NSString *ProtocolPtr; message 'filterNamesInCategory:';
    class function filterNamesInCategories (categories: nullable NSString *ProtocolPtr): NSString *ProtocolPtr; message 'filterNamesInCategories:';
    class procedure registerFilterName_constructor_classAttributes (name__: NSString; anObject: CIFilterConstructorProtocol; attributes_: NSDictionary); message 'registerFilterName:constructor:classAttributes:'; { available in 10_4, 9_0 }
    class function localizedNameForFilterName (filterName: NSString): nullable NSStringPtr; message 'localizedNameForFilterName:'; { available in 10_4, 9_0 }
    class function localizedNameForCategory (category: NSString): NSString; message 'localizedNameForCategory:'; { available in 10_4, 9_0 }
    class function localizedDescriptionForFilterName (filterName: NSString): nullable NSStringPtr; message 'localizedDescriptionForFilterName:'; { available in 10_4, 9_0 }
    class function localizedReferenceDocumentationForFilterName (filterName: NSString): nullable NSURLPtr; message 'localizedReferenceDocumentationForFilterName:'; { available in 10_4, 9_0 }
  end;

type
  CIFilterXMPSerialization = objccategory external (CIFilter)
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    class function serializedXMPFromFilters_inputImageExtent (filters: CIFilter *ProtocolPtr; extent: CGRect): nullable NSDataPtr; message 'serializedXMPFromFilters:inputImageExtent:'; { available in 10_9, 6_0 }
    {$else}
    class function serializedXMPFromFilters_inputImageExtent (filters: CIFilter *ProtocolPtr; extent: CGRect): NSData; message 'serializedXMPFromFilters:inputImageExtent:'; { available in 10_9, 6_0 }
    {$endif}
    class function filterArrayFromSerializedXMP_inputImageExtent_error (xmpData: NSData; extent: CGRect; outError: NSErrorPtr): CIFilter *ProtocolPtr; message 'filterArrayFromSerializedXMP:inputImageExtent:error:'; { available in 10_9, 6_0 }
  end;
{$endif}

