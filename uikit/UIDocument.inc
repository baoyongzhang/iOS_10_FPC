{ Parsed from UIKit.framework UIDocument.h }

{ Types from UIDocument }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  UIDocumentPtr = ^UIDocument;
{$endif}

{$ifdef TYPES}
type
  UIDocumentChangeKind = NSInteger;
  UIDocumentChangeKindPtr = ^UIDocumentChangeKind;

const
  UIDocumentChangeDone = 0;
  UIDocumentChangeUndone = 1;
  UIDocumentChangeRedone = 2;
  UIDocumentChangeCleared = 3;

type
  UIDocumentSaveOperation = NSInteger;
  UIDocumentSaveOperationPtr = ^UIDocumentSaveOperation;

const
  UIDocumentSaveForCreating = 0;
  UIDocumentSaveForOverwriting = 1;

type
  UIDocumentState = NSUInteger;
  UIDocumentStatePtr = ^UIDocumentState;

const
  UIDocumentStateNormal = 0;
  UIDocumentStateClosed = 1 shl 0;
  UIDocumentStateInConflict = 1 shl 1;
  UIDocumentStateSavingError = 1 shl 2;
  UIDocumentStateEditingDisabled = 1 shl 3;
  UIDocumentStateProgressAvailable = 1 shl 4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSNotificationName UIDocumentStateChangedNotification { available in 5_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIDocument = objcclass external (NSObject, NSFilePresenterProtocol, NSProgressReportingProtocol)
  public
    function initWithFileURL (url: NSURL): instancetype; message 'initWithFileURL:'; { NS_DESIGNATED_INITIALIZER }
    function __TVOS_PROHIBITED_: NSURL *fileURL; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: NSString *localizedName; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED__: NSString *fileType; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED(newValue: NSDate *fileModificationDate); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___: NSDate *fileModificationDate; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED____: UIDocumentState documentState; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_____: NSProgress *progress; message 'TVOS_PROHIBITED';
    procedure openWithCompletionHandler (completionHandler: void (^ __nullable)(BOOL success)); message 'openWithCompletionHandler:';
    procedure closeWithCompletionHandler (completionHandler: void (^ __nullable)(BOOL success)); message 'closeWithCompletionHandler:';
    function loadFromContents_ofType_error (contents: id; typeName: nullable NSStringPtr; outError: NSErrorPtr): boolean; message 'loadFromContents:ofType:error:';
    function contentsForType_error (typeName: NSString; outError: NSErrorPtr): nullable id; message 'contentsForType:error:';
    procedure disableEditing __TVOS_PROHIBITED; message 'disableEditing __TVOS_PROHIBITED';
    procedure enableEditing __TVOS_PROHIBITED; message 'enableEditing __TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: NSUndoManager *undoManager); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED______: NSUndoManager *undoManager; message 'TVOS_PROHIBITED';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function __TVOS_PROHIBITED_______: BOOL hasUnsavedChanges; message 'TVOS_PROHIBITED';
    {$else}
    function hasUnsavedChanges __TVOS_PROHIBITED: boolean; message 'hasUnsavedChanges __TVOS_PROHIBITED';
    {$endif}
    procedure updateChangeCount (change: UIDocumentChangeKind); message 'updateChangeCount:';
    function changeCountTokenForSaveOperation (saveOperation: UIDocumentSaveOperation): id; message 'changeCountTokenForSaveOperation:';
    procedure updateChangeCountWithToken_forSaveOperation (changeCountToken: id; saveOperation: UIDocumentSaveOperation); message 'updateChangeCountWithToken:forSaveOperation:';
    procedure saveToURL_forSaveOperation_completionHandler (url: NSURL; saveOperation: UIDocumentSaveOperation; completionHandler: void (^ __nullable)(BOOL success)); message 'saveToURL:forSaveOperation:completionHandler:';
    procedure autosaveWithCompletionHandler (completionHandler: void (^ __nullable)(BOOL success)); message 'autosaveWithCompletionHandler:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function __TVOS_PROHIBITED________: NSString *savingFileType; message 'TVOS_PROHIBITED';
    {$else}
    function savingFileType __TVOS_PROHIBITED: nullable NSStringPtr; message 'savingFileType __TVOS_PROHIBITED';
    {$endif}
    function fileNameExtensionForType_saveOperation (typeName: nullable NSStringPtr; saveOperation: UIDocumentSaveOperation): NSString; message 'fileNameExtensionForType:saveOperation:';
    function writeContents_andAttributes_safelyToURL_forSaveOperation_error (contents: id; additionalFileAttributes: nullable NSDictionaryPtr; url: NSURL; saveOperation: UIDocumentSaveOperation; outError: NSErrorPtr): boolean; message 'writeContents:andAttributes:safelyToURL:forSaveOperation:error:';
    function writeContents_toURL_forSaveOperation_originalContentsURL_error (contents: id; url: NSURL; saveOperation: UIDocumentSaveOperation; originalContentsURL: nullable NSURLPtr; outError: NSErrorPtr): boolean; message 'writeContents:toURL:forSaveOperation:originalContentsURL:error:';
    function fileAttributesToWriteToURL_forSaveOperation_error (url: NSURL; saveOperation: UIDocumentSaveOperation; outError: NSErrorPtr): nullable NSDictionaryPtr; message 'fileAttributesToWriteToURL:forSaveOperation:error:';
    function readFromURL_error (url: NSURL; outError: NSErrorPtr): boolean; message 'readFromURL:error:';
    procedure performAsynchronousFileAccessUsingBlock (block: OpaqueCBlock); message 'performAsynchronousFileAccessUsingBlock:';
    procedure handleError_userInteractionPermitted (error: NSError; userInteractionPermitted: boolean); message 'handleError:userInteractionPermitted:';
    procedure finishedHandlingError_recovered (error: NSError; recovered: boolean); message 'finishedHandlingError:recovered:';
    procedure userInteractionNoLongerPermittedForError (error: NSError); message 'userInteractionNoLongerPermittedForError:';
    procedure revertToContentsOfURL_completionHandler (url: NSURL; completionHandler: void (^ __nullable)(BOOL success)); message 'revertToContentsOfURL:completionHandler:';

    { Adopted protocols }
    procedure accommodatePresentedItemDeletionWithCompletionHandler (completionHandler: OpaqueCBlock); message 'accommodatePresentedItemDeletionWithCompletionHandler:';
    procedure accommodatePresentedSubitemDeletionAtURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock); message 'accommodatePresentedSubitemDeletionAtURL:completionHandler:';
    procedure presentedItemDidChange; message 'presentedItemDidChange';
    procedure presentedItemDidGainVersion (version: NSFileVersion); message 'presentedItemDidGainVersion:';
    procedure presentedItemDidLoseVersion (version: NSFileVersion); message 'presentedItemDidLoseVersion:';
    procedure presentedItemDidMoveToURL (newURL: NSURL); message 'presentedItemDidMoveToURL:';
    procedure presentedItemDidResolveConflictVersion (version: NSFileVersion); message 'presentedItemDidResolveConflictVersion:';
    function presentedItemOperationQueue: NSOperationQueue; message 'presentedItemOperationQueue';
    function presentedItemURL: NSURL; message 'presentedItemURL';
    procedure presentedSubitemAtURL_didGainVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didGainVersion:';
    procedure presentedSubitemAtURL_didLoseVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didLoseVersion:';
    procedure presentedSubitemAtURL_didMoveToURL (oldURL: NSURL; newURL: NSURL); message 'presentedSubitemAtURL:didMoveToURL:';
    procedure presentedSubitemAtURL_didResolveConflictVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didResolveConflictVersion:';
    procedure presentedSubitemDidAppearAtURL (url: NSURL); message 'presentedSubitemDidAppearAtURL:';
    procedure presentedSubitemDidChangeAtURL (url: NSURL); message 'presentedSubitemDidChangeAtURL:';
    function primaryPresentedItemURL: NSURL; message 'primaryPresentedItemURL';
    function progress: NSProgress; message 'progress';
    procedure relinquishPresentedItemToReader (reader: OpaqueCBlock); message 'relinquishPresentedItemToReader:';
    procedure relinquishPresentedItemToWriter (writer: OpaqueCBlock); message 'relinquishPresentedItemToWriter:';
    procedure savePresentedItemChangesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'savePresentedItemChangesWithCompletionHandler:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *NSUserActivityDocumentURLKey { available in 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ActivityContinuation = objccategory external (UIDocument)
    procedure set__TVOS_PROHIBITED(newValue: NSUserActivity *userActivity); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSUserActivity *userActivity; message 'TVOS_PROHIBITED';
    procedure updateUserActivityState (userActivity: NSUserActivity); message 'updateUserActivityState:'; { available in 8_0 }
    procedure restoreUserActivityState (userActivity: NSUserActivity); message 'restoreUserActivityState:'; { available in 8_0 }
  end;
{$endif}

