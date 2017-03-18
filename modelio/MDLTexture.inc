{ Parsed from ModelIO.framework MDLTexture.h }

{$ifdef TYPES}
type
  MDLTexturePtr = ^MDLTexture;
  MDLURLTexturePtr = ^MDLURLTexture;
  MDLCheckerboardTexturePtr = ^MDLCheckerboardTexture;
  MDLSkyCubeTexturePtr = ^MDLSkyCubeTexture;
  MDLColorSwatchTexturePtr = ^MDLColorSwatchTexture;
  MDLNoiseTexturePtr = ^MDLNoiseTexture;
  MDLNormalMapTexturePtr = ^MDLNormalMapTexture;
{$endif}

{$ifdef TYPES}
type
  MDLTextureChannelEncoding = NSInteger;
  MDLTextureChannelEncodingPtr = ^MDLTextureChannelEncoding;

const
  MDLTextureChannelEncodingUInt8 = 1;
  MDLTextureChannelEncodingUint8 = 1;
  MDLTextureChannelEncodingUInt16 = 2;
  MDLTextureChannelEncodingUint16 = 2;
  MDLTextureChannelEncodingUInt24 = 3;
  MDLTextureChannelEncodingUint24 = 3;
  MDLTextureChannelEncodingUInt32 = 4;
  MDLTextureChannelEncodingUint32 = 4;
  MDLTextureChannelEncodingFloat16 = $102;
  MDLTextureChannelEncodingFloat32 = $104;
{$endif}

{$ifdef CLASSES}

type
  MDLTexture = objcclass external (NSObject, MDLNamedProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    class function textureNamed (name: NSString): nullable instancetype; message 'textureNamed:';
    class function textureNamed_bundle (name: NSString; bundleOrNil: nullable NSBundlePtr): nullable instancetype; message 'textureNamed:bundle:';
    class function textureCubeWithImagesNamed (names: NSString *ProtocolPtr): nullable instancetype; message 'textureCubeWithImagesNamed:';
    class function textureCubeWithImagesNamed_bundle (names: NSString *ProtocolPtr; bundleOrNil: nullable NSBundlePtr): nullable instancetype; message 'textureCubeWithImagesNamed:bundle:';
    class function irradianceTextureCubeWithTexture_name_dimensions (texture: MDLTexture; name: nullable NSStringPtr; dimensions: vector_int2): instancetype; message 'irradianceTextureCubeWithTexture:name:dimensions:';
    class function irradianceTextureCubeWithTexture_name_dimensions_roughness (texture: MDLTexture; name: nullable NSStringPtr; dimensions: vector_int2; roughness: single): instancetype; message 'irradianceTextureCubeWithTexture:name:dimensions:roughness:';
    function initWithData_topLeftOrigin_name_dimensions_rowStride_channelCount_channelEncoding_isCube (pixelData: nullable NSDataPtr; topLeftOrigin: boolean; name: nullable NSStringPtr; dimensions: vector_int2; rowStride: NSInteger; channelCount: NSUInteger; channelEncoding: MDLTextureChannelEncoding; isCube: boolean): instancetype; message 'initWithData:topLeftOrigin:name:dimensions:rowStride:channelCount:channelEncoding:isCube:'; { NS_DESIGNATED_INITIALIZER }
    function writeToURL (URL: NSURL): boolean; message 'writeToURL:';
    function writeToURL_type (nsurl_: NSURL; type_: CFStringRef): boolean; message 'writeToURL:type:';
    function imageFromTexture: nullable CGImageRef; message 'imageFromTexture';
    function texelDataWithTopLeftOrigin: nullable NSDataPtr; message 'texelDataWithTopLeftOrigin';
    function texelDataWithBottomLeftOrigin: nullable NSDataPtr; message 'texelDataWithBottomLeftOrigin';
    function texelDataWithTopLeftOriginAtMipLevel_create (level: NSInteger; create_: boolean): nullable NSDataPtr; message 'texelDataWithTopLeftOriginAtMipLevel:create:';
    function texelDataWithBottomLeftOriginAtMipLevel_create (level: NSInteger; create_: boolean): nullable NSDataPtr; message 'texelDataWithBottomLeftOriginAtMipLevel:create:';
    function dimensions: vector_int2; message 'dimensions';
    function rowStride: NSInteger; message 'rowStride';
    function channelCount: NSUInteger; message 'channelCount';
    function mipLevelCount: NSUInteger; message 'mipLevelCount';
    function channelEncoding: MDLTextureChannelEncoding; message 'channelEncoding';
    procedure setIsCube(newValue: boolean); message 'setIsCube:';
    function isCube: boolean; message 'isCube';
    procedure setHasAlphaValues(newValue: boolean); message 'setHasAlphaValues:';
    function hasAlphaValues: boolean; message 'hasAlphaValues';

    { Adopted protocols }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  MDLURLTexture = objcclass external (MDLTexture)
  public
    function initWithURL_name (URL: NSURL; name: nullable NSStringPtr): instancetype; message 'initWithURL:name:';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
  end;

type
  MDLCheckerboardTexture = objcclass external (MDLTexture)
  public
    function initWithDivisions_name_dimensions_channelCount_channelEncoding_color1_color2 (divisions: single; name: nullable NSStringPtr; dimensions_: vector_int2; channelCount_: cint; channelEncoding_: MDLTextureChannelEncoding; color1: CGColorRef; color2: CGColorRef): instancetype; message 'initWithDivisions:name:dimensions:channelCount:channelEncoding:color1:color2:';
    procedure setDivisions(newValue: single); message 'setDivisions:';
    function divisions: single; message 'divisions';
    procedure setColor1(newValue: CGColorRef); message 'setColor1:';
    function color1: CGColorRef; message 'color1';
    procedure setColor2(newValue: CGColorRef); message 'setColor2:';
    function color2: CGColorRef; message 'color2';
  end;

type
  MDLSkyCubeTexture = objcclass external (MDLTexture)
  public
    function initWithName_channelEncoding_textureDimensions_turbidity_sunElevation_upperAtmosphereScattering_groundAlbedo (name: nullable NSStringPtr; channelEncoding_: MDLTextureChannelEncoding; textureDimensions: vector_int2; turbidity: single; sunElevation: single; upperAtmosphereScattering: single; groundAlbedo: single): instancetype; message 'initWithName:channelEncoding:textureDimensions:turbidity:sunElevation:upperAtmosphereScattering:groundAlbedo:';
    procedure updateTexture; message 'updateTexture';
    procedure setTurbidity(newValue: single); message 'setTurbidity:';
    function turbidity: single; message 'turbidity';
    procedure setSunElevation(newValue: single); message 'setSunElevation:';
    function sunElevation: single; message 'sunElevation';
    procedure setUpperAtmosphereScattering(newValue: single); message 'setUpperAtmosphereScattering:';
    function upperAtmosphereScattering: single; message 'upperAtmosphereScattering';
    procedure setGroundAlbedo(newValue: single); message 'setGroundAlbedo:';
    function groundAlbedo: single; message 'groundAlbedo';
    procedure setHorizonElevation(newValue: single); message 'setHorizonElevation:';
    function horizonElevation: single; message 'horizonElevation';
    procedure setGroundColor(newValue: CGColorRef); message 'setGroundColor:';
    function groundColor: CGColorRef; message 'groundColor';
    procedure setGamma(newValue: single); message 'setGamma:';
    function gamma: single; message 'gamma';
    procedure setExposure(newValue: single); message 'setExposure:';
    function exposure: single; message 'exposure';
    procedure setBrightness(newValue: single); message 'setBrightness:';
    function brightness: single; message 'brightness';
    procedure setContrast(newValue: single); message 'setContrast:';
    function contrast: single; message 'contrast';
    procedure setSaturation(newValue: single); message 'setSaturation:';
    function saturation: single; message 'saturation';
    procedure setHighDynamicRangeCompression(newValue: vector_float2); message 'setHighDynamicRangeCompression:';
    function highDynamicRangeCompression: vector_float2; message 'highDynamicRangeCompression';
  end;

type
  MDLColorSwatchTexture = objcclass external (MDLTexture)
  public
    function initWithColorTemperatureGradientFrom_toColorTemperature_name_textureDimensions (colorTemperature1: single; colorTemperature2: single; name: nullable NSStringPtr; textureDimensions: vector_int2): instancetype; message 'initWithColorTemperatureGradientFrom:toColorTemperature:name:textureDimensions:';
    function initWithColorGradientFrom_toColor_name_textureDimensions (color1: CGColorRef; color2: CGColorRef; name: nullable NSStringPtr; textureDimensions: vector_int2): instancetype; message 'initWithColorGradientFrom:toColor:name:textureDimensions:';
  end;

type
  MDLNoiseTexture = objcclass external (MDLTexture)
  public
    function initVectorNoiseWithSmoothness_name_textureDimensions_channelEncoding (smoothness: single; name: nullable NSStringPtr; textureDimensions: vector_int2; channelEncoding_: MDLTextureChannelEncoding): instancetype; message 'initVectorNoiseWithSmoothness:name:textureDimensions:channelEncoding:';
    function initScalarNoiseWithSmoothness_name_textureDimensions_channelCount_channelEncoding_grayscale (smoothness: single; name: nullable NSStringPtr; textureDimensions: vector_int2; channelCount_: cint; channelEncoding_: MDLTextureChannelEncoding; grayscale: boolean): instancetype; message 'initScalarNoiseWithSmoothness:name:textureDimensions:channelCount:channelEncoding:grayscale:';
    function initCellularNoiseWithFrequency_name_textureDimensions_channelEncoding (frequency: single; name: nullable NSStringPtr; textureDimensions: vector_int2; channelEncoding_: MDLTextureChannelEncoding): instancetype; message 'initCellularNoiseWithFrequency:name:textureDimensions:channelEncoding:';
  end;

type
  MDLNormalMapTexture = objcclass external (MDLTexture)
  public
    function initByGeneratingNormalMapWithTexture_name_smoothness_contrast (sourceTexture: MDLTexture; name: nullable NSStringPtr; smoothness: single; contrast: single): instancetype; message 'initByGeneratingNormalMapWithTexture:name:smoothness:contrast:';
  end;
{$endif}

