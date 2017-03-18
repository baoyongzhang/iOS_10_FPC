{ Parsed from Intents.framework INSearchForPhotosIntent.h }

{$ifdef TYPES}
type
  INSearchForPhotosIntentPtr = ^INSearchForPhotosIntent;
  INSearchForPhotosIntentHandlingProtocolPtr = ^INSearchForPhotosIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSearchForPhotosIntent = objcclass external (INIntent)
  public
    function initWithDateCreated_locationCreated_albumName_searchTerms_includedAttributes_excludedAttributes_peopleInPhoto (dateCreated: nullable INDateComponentsRangePtr; locationCreated: nullable CLPlacemarkPtr; albumName: nullable NSStringPtr; searchTerms: nullable NSString *ProtocolPtr; includedAttributes: INPhotoAttributeOptions; excludedAttributes: INPhotoAttributeOptions; peopleInPhoto: nullable INPerson *ProtocolPtr): instancetype; message 'initWithDateCreated:locationCreated:albumName:searchTerms:includedAttributes:excludedAttributes:peopleInPhoto:'; { NS_DESIGNATED_INITIALIZER }
    function dateCreated: INDateComponentsRange; message 'dateCreated';
    function locationCreated: CLPlacemark; message 'locationCreated';
    function albumName: NSString; message 'albumName';
    function searchTerms: NSString *ProtocolPtr; message 'searchTerms';
    function searchTermsOperator: INConditionalOperator; message 'searchTermsOperator';
    function includedAttributes: INPhotoAttributeOptions; message 'includedAttributes';
    function excludedAttributes: INPhotoAttributeOptions; message 'excludedAttributes';
    function peopleInPhoto: INPerson *ProtocolPtr; message 'peopleInPhoto';
    function peopleInPhotoOperator: INConditionalOperator; message 'peopleInPhotoOperator';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSearchForPhotosIntentHandlingProtocol = objcprotocol external name 'INSearchForPhotosIntentHandling' (NSObjectProtocol)
  required
    procedure handleSearchForPhotos_completion_searchForPhotos (intent: INSearchForPhotosIntent; completion: OpaqueCBlock; completion3: id); message 'handleSearchForPhotos:completion:searchForPhotos:';
  optional
    procedure confirmSearchForPhotos_completion_searchForPhotos (intent: INSearchForPhotosIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSearchForPhotos:completion:searchForPhotos:';
    procedure resolveDateCreatedForSearchForPhotos_withCompletion_forSearchForPhotos (intent: INSearchForPhotosIntent; completion: OpaqueCBlock; with_: id); message 'resolveDateCreatedForSearchForPhotos:withCompletion:forSearchForPhotos:';
    procedure resolveLocationCreatedForSearchForPhotos_withCompletion_forSearchForPhotos (intent: INSearchForPhotosIntent; completion: OpaqueCBlock; with_: id); message 'resolveLocationCreatedForSearchForPhotos:withCompletion:forSearchForPhotos:';
    procedure resolveAlbumNameForSearchForPhotos_withCompletion_forSearchForPhotos (intent: INSearchForPhotosIntent; completion: OpaqueCBlock; with_: id); message 'resolveAlbumNameForSearchForPhotos:withCompletion:forSearchForPhotos:';
    procedure resolvePeopleInPhotoForSearchForPhotos_withCompletion_forSearchForPhotos (intent: INSearchForPhotosIntent; completion: OpaqueCBlock; with_: id); message 'resolvePeopleInPhotoForSearchForPhotos:withCompletion:forSearchForPhotos:';
  end;
{$endif}

