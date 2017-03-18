{ Parsed from Intents.framework INStartPhotoPlaybackIntent.h }

{$ifdef TYPES}
type
  INStartPhotoPlaybackIntentPtr = ^INStartPhotoPlaybackIntent;
  INStartPhotoPlaybackIntentHandlingProtocolPtr = ^INStartPhotoPlaybackIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INStartPhotoPlaybackIntent = objcclass external (INIntent)
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
  INStartPhotoPlaybackIntentHandlingProtocol = objcprotocol external name 'INStartPhotoPlaybackIntentHandling' (NSObjectProtocol)
  required
    procedure handleStartPhotoPlayback_completion_startPhotoPlayback (intent: INStartPhotoPlaybackIntent; completion: OpaqueCBlock; completion3: id); message 'handleStartPhotoPlayback:completion:startPhotoPlayback:';
  optional
    procedure confirmStartPhotoPlayback_completion_startPhotoPlayback (intent: INStartPhotoPlaybackIntent; completion: OpaqueCBlock; completion3: id); message 'confirmStartPhotoPlayback:completion:startPhotoPlayback:';
    procedure resolveDateCreatedForStartPhotoPlayback_withCompletion_forStartPhotoPlayback (intent: INStartPhotoPlaybackIntent; completion: OpaqueCBlock; with_: id); message 'resolveDateCreatedForStartPhotoPlayback:withCompletion:forStartPhotoPlayback:';
    procedure resolveLocationCreatedForStartPhotoPlayback_withCompletion_forStartPhotoPlayback (intent: INStartPhotoPlaybackIntent; completion: OpaqueCBlock; with_: id); message 'resolveLocationCreatedForStartPhotoPlayback:withCompletion:forStartPhotoPlayback:';
    procedure resolveAlbumNameForStartPhotoPlayback_withCompletion_forStartPhotoPlayback (intent: INStartPhotoPlaybackIntent; completion: OpaqueCBlock; with_: id); message 'resolveAlbumNameForStartPhotoPlayback:withCompletion:forStartPhotoPlayback:';
    procedure resolvePeopleInPhotoForStartPhotoPlayback_withCompletion_forStartPhotoPlayback (intent: INStartPhotoPlaybackIntent; completion: OpaqueCBlock; with_: id); message 'resolvePeopleInPhotoForStartPhotoPlayback:withCompletion:forStartPhotoPlayback:';
  end;
{$endif}

