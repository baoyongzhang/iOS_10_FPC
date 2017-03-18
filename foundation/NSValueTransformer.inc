{ Parsed from Foundation.framework NSValueTransformer.h }

{$ifdef TYPES}
type
  NSValueTransformerPtr = ^NSValueTransformer;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSNegateBooleanTransformerName: NSValueTransformerName { available in 10_3, 3_0 }; cvar; external;
  NSIsNilTransformerName: NSValueTransformerName { available in 10_3, 3_0 }; cvar; external;
  NSIsNotNilTransformerName: NSValueTransformerName { available in 10_3, 3_0 }; cvar; external;
  NSUnarchiveFromDataTransformerName: NSValueTransformerName { available in 10_3, 3_0 }; cvar; external;
  NSKeyedUnarchiveFromDataTransformerName: NSValueTransformerName { available in 10_5, 3_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSValueTransformer = objcclass external (NSObject)
  private
  public
    class procedure setValueTransformer_forName (transformer: nullable NSValueTransformerPtr; name: NSValueTransformerName); message 'setValueTransformer:forName:';
    class function valueTransformerForName (name: NSValueTransformerName): nullable NSValueTransformerPtr; message 'valueTransformerForName:';
    class function valueTransformerNames: NSValueTransformerNameProtocolPtr; message 'valueTransformerNames';
    class function transformedValueClass: pobjc_class; message 'transformedValueClass';
    class function allowsReverseTransformation: boolean; message 'allowsReverseTransformation';
    function transformedValue (value: nullable id): nullable id; message 'transformedValue:';
    function reverseTransformedValue (value: nullable id): nullable id; message 'reverseTransformedValue:';
  end;
{$endif}

