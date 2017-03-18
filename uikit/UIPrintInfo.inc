{ Parsed from UIKit.framework UIPrintInfo.h }

{$ifdef TYPES}
type
  UIPrintInfoPtr = ^UIPrintInfo;
{$endif}

{$ifdef TYPES}
type
  UIPrintInfoOutputType = NSInteger;
  UIPrintInfoOutputTypePtr = ^UIPrintInfoOutputType;

const
  UIPrintInfoOutputGeneral = 0;
  UIPrintInfoOutputPhoto = 1;
  UIPrintInfoOutputGrayscale = 2;
  UIPrintInfoOutputPhotoGrayscale = 3 { available in 7_0 };

type
  UIPrintInfoOrientation = NSInteger;
  UIPrintInfoOrientationPtr = ^UIPrintInfoOrientation;

const
  UIPrintInfoOrientationPortrait = 0;
  UIPrintInfoOrientationLandscape = 1;

type
  UIPrintInfoDuplex = NSInteger;
  UIPrintInfoDuplexPtr = ^UIPrintInfoDuplex;

const
  UIPrintInfoDuplexNone = 0;
  UIPrintInfoDuplexLongEdge = 1;
  UIPrintInfoDuplexShortEdge = 2;
{$endif}

{$ifdef CLASSES}

type
  UIPrintInfo = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function printInfo: UIPrintInfo; message 'printInfo';
    class function printInfoWithDictionary (dictionary: nullable NSDictionaryPtr): UIPrintInfo; message 'printInfoWithDictionary:';
    procedure setPrinterID(newValue: NSString); message 'setPrinterID:';
    function printerID: NSString; message 'printerID';
    procedure setJobName(newValue: NSString); message 'setJobName:';
    function jobName: NSString; message 'jobName';
    procedure setOutputType(newValue: UIPrintInfoOutputType); message 'setOutputType:';
    function outputType: UIPrintInfoOutputType; message 'outputType';
    procedure setOrientation(newValue: UIPrintInfoOrientation); message 'setOrientation:';
    function orientation: UIPrintInfoOrientation; message 'orientation';
    procedure setDuplex(newValue: UIPrintInfoDuplex); message 'setDuplex:';
    function duplex: UIPrintInfoDuplex; message 'duplex';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

