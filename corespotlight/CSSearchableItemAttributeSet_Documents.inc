{ Parsed from CoreSpotlight.framework CSSearchableItemAttributeSet_Documents.h }
{$ifdef CLASSES}

type
  CSDocuments = objccategory external (CSSearchableItemAttributeSet)
    procedure setSubject(newValue: NSString); message 'setSubject:';
    function subject: NSString; message 'subject';
    procedure setTheme(newValue: NSString); message 'setTheme:';
    function theme: NSString; message 'theme';
    procedure setContentDescription(newValue: NSString); message 'setContentDescription:';
    function contentDescription: NSString; message 'contentDescription';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setAudiences(newValue: NSString *ProtocolPtr); message 'setAudiences:';
    function audiences: NSString *ProtocolPtr; message 'audiences';
    procedure setFileSize(newValue: NSNumber); message 'setFileSize:';
    function fileSize: NSNumber; message 'fileSize';
    procedure setPageCount(newValue: NSNumber); message 'setPageCount:';
    function pageCount: NSNumber; message 'pageCount';
    procedure setPageWidth(newValue: NSNumber); message 'setPageWidth:';
    function pageWidth: NSNumber; message 'pageWidth';
    procedure setPageHeight(newValue: NSNumber); message 'setPageHeight:';
    function pageHeight: NSNumber; message 'pageHeight';
    procedure setSecurityMethod(newValue: NSString); message 'setSecurityMethod:';
    function securityMethod: NSString; message 'securityMethod';
    procedure setCreator(newValue: NSString); message 'setCreator:';
    function creator: NSString; message 'creator';
    procedure setEncodingApplications(newValue: NSString *ProtocolPtr); message 'setEncodingApplications:';
    function encodingApplications: NSString *ProtocolPtr; message 'encodingApplications';
    procedure setKind(newValue: NSString); message 'setKind:';
    function kind: NSString; message 'kind';
    procedure setFontNames(newValue: NSString *ProtocolPtr); message 'setFontNames:';
    function fontNames: NSString *ProtocolPtr; message 'fontNames';
  end;
{$endif}

