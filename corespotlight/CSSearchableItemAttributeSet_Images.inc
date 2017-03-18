{ Parsed from CoreSpotlight.framework CSSearchableItemAttributeSet_Images.h }
{$ifdef CLASSES}

type
  CSImages = objccategory external (CSSearchableItemAttributeSet)
    procedure setPixelHeight(newValue: NSNumber); message 'setPixelHeight:';
    function pixelHeight: NSNumber; message 'pixelHeight';
    procedure setPixelWidth(newValue: NSNumber); message 'setPixelWidth:';
    function pixelWidth: NSNumber; message 'pixelWidth';
    procedure setPixelCount(newValue: NSNumber); message 'setPixelCount:';
    function pixelCount: NSNumber; message 'pixelCount';
    procedure setColorSpace(newValue: NSString); message 'setColorSpace:';
    function colorSpace: NSString; message 'colorSpace';
    procedure setBitsPerSample(newValue: NSNumber); message 'setBitsPerSample:';
    function bitsPerSample: NSNumber; message 'bitsPerSample';
    procedure setFlashOn(newValue: NSNumber); message 'setFlashOn:';
    function isFlashOn: NSNumber; message 'isFlashOn';
    procedure setFocalLength(newValue: NSNumber); message 'setFocalLength:';
    function focalLength: NSNumber; message 'focalLength';
    procedure setFocalLength35mm(newValue: NSNumber); message 'setFocalLength35mm:';
    function isFocalLength35mm: NSNumber; message 'isFocalLength35mm';
    procedure setAcquisitionMake(newValue: NSString); message 'setAcquisitionMake:';
    function acquisitionMake: NSString; message 'acquisitionMake';
    procedure setAcquisitionModel(newValue: NSString); message 'setAcquisitionModel:';
    function acquisitionModel: NSString; message 'acquisitionModel';
    procedure setCameraOwner(newValue: NSString); message 'setCameraOwner:';
    function cameraOwner: NSString; message 'cameraOwner';
    procedure setLensModel(newValue: NSString); message 'setLensModel:';
    function lensModel: NSString; message 'lensModel';
    procedure setISOSpeed(newValue: NSNumber); message 'setISOSpeed:';
    function ISOSpeed: NSNumber; message 'ISOSpeed';
    procedure setOrientation(newValue: NSNumber); message 'setOrientation:';
    function orientation: NSNumber; message 'orientation';
    procedure setLayerNames(newValue: NSString *ProtocolPtr); message 'setLayerNames:';
    function layerNames: NSString *ProtocolPtr; message 'layerNames';
    procedure setWhiteBalance(newValue: NSNumber); message 'setWhiteBalance:';
    function whiteBalance: NSNumber; message 'whiteBalance';
    procedure setAperture(newValue: NSNumber); message 'setAperture:';
    function aperture: NSNumber; message 'aperture';
    procedure setProfileName(newValue: NSString); message 'setProfileName:';
    function profileName: NSString; message 'profileName';
    procedure setResolutionWidthDPI(newValue: NSNumber); message 'setResolutionWidthDPI:';
    function resolutionWidthDPI: NSNumber; message 'resolutionWidthDPI';
    procedure setResolutionHeightDPI(newValue: NSNumber); message 'setResolutionHeightDPI:';
    function resolutionHeightDPI: NSNumber; message 'resolutionHeightDPI';
    procedure setExposureMode(newValue: NSNumber); message 'setExposureMode:';
    function exposureMode: NSNumber; message 'exposureMode';
    procedure setExposureTime(newValue: NSNumber); message 'setExposureTime:';
    function exposureTime: NSNumber; message 'exposureTime';
    procedure setEXIFVersion(newValue: NSString); message 'setEXIFVersion:';
    function EXIFVersion: NSString; message 'EXIFVersion';
    procedure setEXIFGPSVersion(newValue: NSString); message 'setEXIFGPSVersion:';
    function EXIFGPSVersion: NSString; message 'EXIFGPSVersion';
    procedure setHasAlphaChannel(newValue: NSNumber); message 'setHasAlphaChannel:';
    function hasAlphaChannel: NSNumber; message 'hasAlphaChannel';
    procedure setRedEyeOn(newValue: NSNumber); message 'setRedEyeOn:';
    function isRedEyeOn: NSNumber; message 'isRedEyeOn';
    procedure setMeteringMode(newValue: NSString); message 'setMeteringMode:';
    function meteringMode: NSString; message 'meteringMode';
    procedure setMaxAperture(newValue: NSNumber); message 'setMaxAperture:';
    function maxAperture: NSNumber; message 'maxAperture';
    procedure setFNumber(newValue: NSNumber); message 'setFNumber:';
    function fNumber: NSNumber; message 'fNumber';
    procedure setExposureProgram(newValue: NSString); message 'setExposureProgram:';
    function exposureProgram: NSString; message 'exposureProgram';
    procedure setExposureTimeString(newValue: NSString); message 'setExposureTimeString:';
    function exposureTimeString: NSString; message 'exposureTimeString';
  end;
{$endif}

