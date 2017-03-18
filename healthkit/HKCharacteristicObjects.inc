{ Parsed from HealthKit.framework HKCharacteristicObjects.h }

{$ifdef TYPES}
type
  HKBiologicalSexObjectPtr = ^HKBiologicalSexObject;
  HKBloodTypeObjectPtr = ^HKBloodTypeObject;
  HKFitzpatrickSkinTypeObjectPtr = ^HKFitzpatrickSkinTypeObject;
  HKWheelchairUseObjectPtr = ^HKWheelchairUseObject;
{$endif}

{$ifdef CLASSES}

type
  HKBiologicalSexObject = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function biologicalSex: HKBiologicalSex; message 'biologicalSex';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  HKBloodTypeObject = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function bloodType: HKBloodType; message 'bloodType';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  HKFitzpatrickSkinTypeObject = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function skinType: HKFitzpatrickSkinType; message 'skinType';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  HKWheelchairUseObject = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function wheelchairUse: HKWheelchairUse; message 'wheelchairUse';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

