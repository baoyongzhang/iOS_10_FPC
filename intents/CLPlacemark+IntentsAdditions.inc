{ Parsed from Intents.framework CLPlacemark+IntentsAdditions.h }
{$ifdef CLASSES}

type
  INIntentsAdditions = objccategory external (CLPlacemark)
    class function placemarkWithLocation_name_postalAddress (location: CLLocation; name: nullable NSStringPtr; postalAddress: nullable CNPostalAddressPtr): instancetype; message 'placemarkWithLocation:name:postalAddress:'; { available in ios(10.0 }
  end;
{$endif}

