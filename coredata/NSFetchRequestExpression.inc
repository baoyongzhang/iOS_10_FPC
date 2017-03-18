{ Parsed from CoreData.framework NSFetchRequestExpression.h }

{$ifdef TYPES}
type
  NSFetchRequestExpressionPtr = ^NSFetchRequestExpression;
{$endif}

{$ifdef CLASSES}

type
  NSFetchRequestExpression = objcclass external (NSExpression)
  private
    {$if (not defined(__OBJC2__))}
    _reserved1: pointer;
    _reserved2: pointer;
    _reserved3: pointer;
    _reserved4: pointer;
    _fetchRequest: NSExpression;
    _managedObjectContext: NSExpression;
    _fetchExpressionFlags: bitpacked record
      case byte of
        0: (_anonBitField__fetchExpressionFlags0: cuint);
        1: (
          isCountOnly: 0..1;
          _RESERVED: 0..((1 shl 31)-1);
        );
      end;
    {$endif}
  public
    class function expressionForFetch_context_countOnly (fetch: NSExpression; context: NSExpression; countFlag: boolean): NSExpression; message 'expressionForFetch:context:countOnly:';
    function requestExpression: NSExpression; message 'requestExpression';
    function contextExpression: NSExpression; message 'contextExpression';
    function isCountOnlyRequest: boolean; message 'isCountOnlyRequest';
  end;
{$endif}

