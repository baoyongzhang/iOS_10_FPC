{ Parsed from MapKit.framework MKLocalSearchCompleter.h }

{$ifdef TYPES}
type
  MKLocalSearchCompleterPtr = ^MKLocalSearchCompleter;
  MKLocalSearchRequestPtr = ^MKLocalSearchRequest;
  MKLocalSearchCompleterDelegateProtocolPtr = ^MKLocalSearchCompleterDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  MKSearchCompletionFilterType = NSInteger;
  MKSearchCompletionFilterTypePtr = ^MKSearchCompletionFilterType;

const
  MKSearchCompletionFilterTypeLocationsAndQueries = 0;
  MKSearchCompletionFilterTypeLocationsOnly = 1;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearchCompleter = objcclass external (NSObject)
  public
    procedure setQueryFragment(newValue: NSString); message 'setQueryFragment:';
    function queryFragment: NSString; message 'queryFragment';
    procedure setRegion(newValue: MKCoordinateRegion); message 'setRegion:';
    function region: MKCoordinateRegion; message 'region';
    procedure setFilterType(newValue: MKSearchCompletionFilterType); message 'setFilterType:';
    function filterType: MKSearchCompletionFilterType; message 'filterType';
    procedure setDelegate(newValue: MKLocalSearchCompleterDelegateProtocol); message 'setDelegate:';
    function delegate: MKLocalSearchCompleterDelegateProtocol; message 'delegate';
    function results: MKLocalSearchCompletion *ProtocolPtr; message 'results';
    function isSearching: boolean; message 'isSearching';
    procedure cancel; message 'cancel';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MKLocalSearchCompleterDelegateProtocol = objcprotocol external name 'MKLocalSearchCompleterDelegate' (NSObjectProtocol)
  optional
    procedure completerDidUpdateResults (completer: MKLocalSearchCompleter); message 'completerDidUpdateResults:';
    procedure completer_didFailWithError (completer: MKLocalSearchCompleter; error: NSError); message 'completer:didFailWithError:';
    function title: NSString; message 'title';
    function titleHighlightRanges: NSValue *ProtocolPtr; message 'titleHighlightRanges';
    function subtitle: NSString; message 'subtitle';
    function subtitleHighlightRanges: NSValue *ProtocolPtr; message 'subtitleHighlightRanges';
  end;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearchRequest = objcclass external (NSObject)
  public
    function initWithCompletion (completion: MKLocalSearchCompletion): instancetype; message 'initWithCompletion:'; { available in 10_11_4, 9_3 }
  end;
{$endif}

