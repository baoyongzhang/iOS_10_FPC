{ Parsed from CoreSpotlight.framework CSSearchableItemAttributeSet_General.h }
{$ifdef CLASSES}

type
  CSGeneral = objccategory external (CSSearchableItemAttributeSet)
    procedure setDisplayName(newValue: NSString); message 'setDisplayName:';
    function displayName: NSString; message 'displayName';
    procedure setAlternateNames(newValue: NSString *ProtocolPtr); message 'setAlternateNames:';
    function alternateNames: NSString *ProtocolPtr; message 'alternateNames';
    procedure setPath(newValue: NSString); message 'setPath:';
    function path: NSString; message 'path';
    procedure setContentURL(newValue: NSURL); message 'setContentURL:';
    function contentURL: NSURL; message 'contentURL';
    procedure setThumbnailURL(newValue: NSURL); message 'setThumbnailURL:';
    function thumbnailURL: NSURL; message 'thumbnailURL';
    procedure setThumbnailData(newValue: NSData); message 'setThumbnailData:';
    function thumbnailData: NSData; message 'thumbnailData';
    procedure setRelatedUniqueIdentifier(newValue: NSString); message 'setRelatedUniqueIdentifier:';
    function relatedUniqueIdentifier: NSString; message 'relatedUniqueIdentifier';
    procedure setCS_TVOS_UNAVAILABLE(newValue: NSString *weakRelatedUniqueIdentifier); message 'setCS_TVOS_UNAVAILABLE:';
    function CS_TVOS_UNAVAILABLE_: NSString *weakRelatedUniqueIdentifier; message 'CS_TVOS_UNAVAILABLE';
    procedure setMetadataModificationDate(newValue: NSDate); message 'setMetadataModificationDate:';
    function metadataModificationDate: NSDate; message 'metadataModificationDate';
    procedure setContentType(newValue: NSString); message 'setContentType:';
    function contentType: NSString; message 'contentType';
    procedure setContentTypeTree(newValue: NSString *ProtocolPtr); message 'setContentTypeTree:';
    function contentTypeTree: NSString *ProtocolPtr; message 'contentTypeTree';
    procedure setKeywords(newValue: NSString *ProtocolPtr); message 'setKeywords:';
    function keywords: NSString *ProtocolPtr; message 'keywords';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setVersion(newValue: NSString); message 'setVersion:';
    function version: NSString; message 'version';
    procedure setCS_TVOS_UNAVAILABLE_(newValue: NSString *domainIdentifier); message 'setCS_TVOS_UNAVAILABLE:';
    function CS_TVOS_UNAVAILABLE_: NSString *domainIdentifier; message 'CS_TVOS_UNAVAILABLE';
  end;

type
  CSActionExtras = objccategory external (CSSearchableItemAttributeSet)
    procedure setSupportsPhoneCall(newValue: NSNumber); message 'setSupportsPhoneCall:';
    function supportsPhoneCall: NSNumber; message 'supportsPhoneCall';
    procedure setSupportsNavigation(newValue: NSNumber); message 'setSupportsNavigation:';
    function supportsNavigation: NSNumber; message 'supportsNavigation';
  end;

type
  CSContainment = objccategory external (CSSearchableItemAttributeSet)
    procedure setContainerTitle(newValue: NSString); message 'setContainerTitle:';
    function containerTitle: NSString; message 'containerTitle';
    procedure setContainerDisplayName(newValue: NSString); message 'setContainerDisplayName:';
    function containerDisplayName: NSString; message 'containerDisplayName';
    procedure setContainerIdentifier(newValue: NSString); message 'setContainerIdentifier:';
    function containerIdentifier: NSString; message 'containerIdentifier';
    procedure setContainerOrder(newValue: NSNumber); message 'setContainerOrder:';
    function containerOrder: NSNumber; message 'containerOrder';
  end;
{$endif}

