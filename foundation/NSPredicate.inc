{ Parsed from Foundation.framework NSPredicate.h }

{ Types from NSPredicate }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSPredicatePtr = ^NSPredicate;
{$endif}

{$ifdef CLASSES}

type
  NSPredicate = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _predicateFlags: bitpacked record
      case byte of
        0: (_anonBitField__predicateFlags0: cuint);
        1: (
          _evaluationBlocked: 0..1;
          _reservedPredicateFlags: 0..((1 shl 31)-1);
        );
      end;
    {$ifdef __LP64__}
    reserved: cuint32;
    {$endif}
  public
    class function predicateWithFormat_argumentArray (predicateFormat: NSString; arguments: nullable NSArrayPtr): NSPredicate; message 'predicateWithFormat:argumentArray:';
    class function predicateWithFormat (predicateFormat: NSString): NSPredicate; varargs; message 'predicateWithFormat:';
    class function predicateWithFormat_arguments (predicateFormat: NSString; argList: va_list): NSPredicate; message 'predicateWithFormat:arguments:';
    class function predicateFromMetadataQueryString (queryString: NSString): nullable NSPredicatePtr; message 'predicateFromMetadataQueryString:'; { available in 10_9 }
    class function predicateWithValue (value: boolean): NSPredicate; message 'predicateWithValue:';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    class function predicateWithBlock (block: OpaqueCBlock): NSPredicate; message 'predicateWithBlock:'; { available in 10_6, 4_0 }
    {$endif}
    function predicateFormat: NSString; message 'predicateFormat';
    function predicateWithSubstitutionVariables (variables: NSDictionary): instancetype; message 'predicateWithSubstitutionVariables:';
    function evaluateWithObject (object_: nullable id): boolean; message 'evaluateWithObject:';
    function evaluateWithObject_substitutionVariables (object_: nullable id; bindings: nullable NSDictionaryPtr): boolean; message 'evaluateWithObject:substitutionVariables:'; { available in 10_5, 3_0 }
    procedure allowEvaluation; message 'allowEvaluation'; { available in 10_9, 7_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function filteredArrayUsingPredicate (predicate: NSPredicate): ObjectTypeProtocolPtr; message 'filteredArrayUsingPredicate:';
  end;

type
  NSMutableArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure filterUsingPredicate (predicate: NSPredicate); message 'filterUsingPredicate:';
  end;

type
  NSSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function filteredSetUsingPredicate (predicate: NSPredicate): ObjectTypeProtocolPtr; message 'filteredSetUsingPredicate:'; { available in 10_5, 3_0 }
  end;

type
  NSMutableSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure filterUsingPredicate (predicate: NSPredicate); message 'filterUsingPredicate:'; { available in 10_5, 3_0 }
  end;

type
  NSOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function filteredOrderedSetUsingPredicate (p: NSPredicate): ObjectTypeProtocolPtr; message 'filteredOrderedSetUsingPredicate:'; { available in 10_7, 5_0 }
  end;

type
  NSMutableOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure filterUsingPredicate (p: NSPredicate); message 'filterUsingPredicate:'; { available in 10_7, 5_0 }
  end;
{$endif}

