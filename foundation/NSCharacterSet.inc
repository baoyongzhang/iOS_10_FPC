{ Parsed from Foundation.framework NSCharacterSet.h }

{ Types from NSCharacterSet }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSCharacterSetPtr = ^NSCharacterSet;
  NSMutableCharacterSetPtr = ^NSMutableCharacterSet;
{$endif}

{$ifdef TYPES}
const
  NSOpenStepUnicodeReservedBase = $F400;
{$endif}

{$ifdef CLASSES}

type
  NSCharacterSet = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function controlCharacterSet: NSCharacterSet; message 'controlCharacterSet';
    function whitespaceCharacterSet: NSCharacterSet; message 'whitespaceCharacterSet';
    function whitespaceAndNewlineCharacterSet: NSCharacterSet; message 'whitespaceAndNewlineCharacterSet';
    function decimalDigitCharacterSet: NSCharacterSet; message 'decimalDigitCharacterSet';
    function letterCharacterSet: NSCharacterSet; message 'letterCharacterSet';
    function lowercaseLetterCharacterSet: NSCharacterSet; message 'lowercaseLetterCharacterSet';
    function uppercaseLetterCharacterSet: NSCharacterSet; message 'uppercaseLetterCharacterSet';
    function nonBaseCharacterSet: NSCharacterSet; message 'nonBaseCharacterSet';
    function alphanumericCharacterSet: NSCharacterSet; message 'alphanumericCharacterSet';
    function decomposableCharacterSet: NSCharacterSet; message 'decomposableCharacterSet';
    function illegalCharacterSet: NSCharacterSet; message 'illegalCharacterSet';
    function punctuationCharacterSet: NSCharacterSet; message 'punctuationCharacterSet';
    function capitalizedLetterCharacterSet: NSCharacterSet; message 'capitalizedLetterCharacterSet';
    function symbolCharacterSet: NSCharacterSet; message 'symbolCharacterSet';
    function newlineCharacterSet: NSCharacterSet; message 'newlineCharacterSet';
    {$endif}
    class function characterSetWithRange (aRange: NSRange): NSCharacterSet; message 'characterSetWithRange:';
    class function characterSetWithCharactersInString (aString: NSString): NSCharacterSet; message 'characterSetWithCharactersInString:';
    class function characterSetWithBitmapRepresentation (data: NSData): NSCharacterSet; message 'characterSetWithBitmapRepresentation:';
    class function characterSetWithContentsOfFile (fName: NSString): nullable NSCharacterSetPtr; message 'characterSetWithContentsOfFile:';
    function initWithCoder (aDecoder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function characterIsMember (aCharacter: unichar): boolean; message 'characterIsMember:';
    function bitmapRepresentation: NSData; message 'bitmapRepresentation';
    function invertedSet: NSCharacterSet; message 'invertedSet';
    function longCharacterIsMember (theLongChar: UTF32Char): boolean; message 'longCharacterIsMember:';
    function isSupersetOfSet (theOtherSet: NSCharacterSet): boolean; message 'isSupersetOfSet:';
    function hasMemberInPlane (thePlane: cuint8): boolean; message 'hasMemberInPlane:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSMutableCharacterSet = objcclass external (NSCharacterSet, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure addCharactersInRange (aRange: NSRange); message 'addCharactersInRange:';
    procedure removeCharactersInRange (aRange: NSRange); message 'removeCharactersInRange:';
    procedure addCharactersInString (aString: NSString); message 'addCharactersInString:';
    procedure removeCharactersInString (aString: NSString); message 'removeCharactersInString:';
    procedure formUnionWithCharacterSet (otherSet: NSCharacterSet); message 'formUnionWithCharacterSet:';
    procedure formIntersectionWithCharacterSet (otherSet: NSCharacterSet); message 'formIntersectionWithCharacterSet:';
    procedure invert; message 'invert';
    class function controlCharacterSet: NSMutableCharacterSet; message 'controlCharacterSet';
    class function whitespaceCharacterSet: NSMutableCharacterSet; message 'whitespaceCharacterSet';
    class function whitespaceAndNewlineCharacterSet: NSMutableCharacterSet; message 'whitespaceAndNewlineCharacterSet';
    class function decimalDigitCharacterSet: NSMutableCharacterSet; message 'decimalDigitCharacterSet';
    class function letterCharacterSet: NSMutableCharacterSet; message 'letterCharacterSet';
    class function lowercaseLetterCharacterSet: NSMutableCharacterSet; message 'lowercaseLetterCharacterSet';
    class function uppercaseLetterCharacterSet: NSMutableCharacterSet; message 'uppercaseLetterCharacterSet';
    class function nonBaseCharacterSet: NSMutableCharacterSet; message 'nonBaseCharacterSet';
    class function alphanumericCharacterSet: NSMutableCharacterSet; message 'alphanumericCharacterSet';
    class function decomposableCharacterSet: NSMutableCharacterSet; message 'decomposableCharacterSet';
    class function illegalCharacterSet: NSMutableCharacterSet; message 'illegalCharacterSet';
    class function punctuationCharacterSet: NSMutableCharacterSet; message 'punctuationCharacterSet';
    class function capitalizedLetterCharacterSet: NSMutableCharacterSet; message 'capitalizedLetterCharacterSet';
    class function symbolCharacterSet: NSMutableCharacterSet; message 'symbolCharacterSet';
    class function newlineCharacterSet: NSMutableCharacterSet; message 'newlineCharacterSet'; { available in 10_5, 2_0 }
    class function characterSetWithRange (aRange: NSRange): NSMutableCharacterSet; message 'characterSetWithRange:';
    class function characterSetWithCharactersInString (aString: NSString): NSMutableCharacterSet; message 'characterSetWithCharactersInString:';
    class function characterSetWithBitmapRepresentation (data: NSData): NSMutableCharacterSet; message 'characterSetWithBitmapRepresentation:';
    class function characterSetWithContentsOfFile (fName: NSString): nullable NSMutableCharacterSetPtr; message 'characterSetWithContentsOfFile:';
  end;
{$endif}

