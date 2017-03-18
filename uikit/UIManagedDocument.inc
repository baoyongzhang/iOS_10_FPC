{ Parsed from UIKit.framework UIManagedDocument.h }

{ Types from UIManagedDocument }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIManagedDocumentPtr = ^UIManagedDocument;
{$endif}

{$ifdef CLASSES}

type
  UIManagedDocument = objcclass external (UIDocument)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function persistentStoreName: NSString; message 'persistentStoreName';
    {$else}
    class function persistentStoreName: NSString; message 'persistentStoreName';
    {$endif}
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    procedure setPersistentStoreOptions(newValue: NSDictionary); message 'setPersistentStoreOptions:';
    function persistentStoreOptions: NSDictionary; message 'persistentStoreOptions';
    procedure setModelConfiguration(newValue: NSString); message 'setModelConfiguration:';
    function modelConfiguration: NSString; message 'modelConfiguration';
    function configurePersistentStoreCoordinatorForURL_ofType_modelConfiguration_storeOptions_error (storeURL: NSURL; fileType: NSString; configuration: nullable NSStringPtr; storeOptions: nullable NSDictionaryPtr; error: NSErrorPtr): boolean; message 'configurePersistentStoreCoordinatorForURL:ofType:modelConfiguration:storeOptions:error:';
    function persistentStoreTypeForFileType (fileType: NSString): NSString; message 'persistentStoreTypeForFileType:';
    function readAdditionalContentFromURL_error (absoluteURL: NSURL; error: NSErrorPtr): boolean; message 'readAdditionalContentFromURL:error:';
    function additionalContentForURL_error (absoluteURL: NSURL; error: NSErrorPtr): nullable id; message 'additionalContentForURL:error:';
    function writeAdditionalContent_toURL_originalContentsURL_error (content: id; absoluteURL: NSURL; absoluteOriginalContentsURL: nullable NSURLPtr; error: NSErrorPtr): boolean; message 'writeAdditionalContent:toURL:originalContentsURL:error:';
  end;
{$endif}

