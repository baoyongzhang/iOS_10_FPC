{ Parsed from CallKit.framework CXError.h }
{$ifdef TYPES}
type
  CXErrorCode = NSInteger;
  CXErrorCodePtr = ^CXErrorCode;

const
  CXErrorCodeUnknownError = 0;

type
  CXErrorCodeIncomingCallError = NSInteger;
  CXErrorCodeIncomingCallErrorPtr = ^CXErrorCodeIncomingCallError;

const
  CXErrorCodeIncomingCallErrorUnknown = 0;
  CXErrorCodeIncomingCallErrorUnentitled = 1;
  CXErrorCodeIncomingCallErrorCallUUIDAlreadyExists = 2;
  CXErrorCodeIncomingCallErrorFilteredByDoNotDisturb = 3;
  CXErrorCodeIncomingCallErrorFilteredByBlockList = 4;

type
  CXErrorCodeRequestTransactionError = NSInteger;
  CXErrorCodeRequestTransactionErrorPtr = ^CXErrorCodeRequestTransactionError;

const
  CXErrorCodeRequestTransactionErrorUnknown = 0;
  CXErrorCodeRequestTransactionErrorUnentitled = 1;
  CXErrorCodeRequestTransactionErrorUnknownCallProvider = 2;
  CXErrorCodeRequestTransactionErrorEmptyTransaction = 3;
  CXErrorCodeRequestTransactionErrorUnknownCallUUID = 4;
  CXErrorCodeRequestTransactionErrorCallUUIDAlreadyExists = 5;
  CXErrorCodeRequestTransactionErrorInvalidAction = 6;
  CXErrorCodeRequestTransactionErrorMaximumCallGroupsReached = 7;

type
  CXErrorCodeCallDirectoryManagerError = NSInteger;
  CXErrorCodeCallDirectoryManagerErrorPtr = ^CXErrorCodeCallDirectoryManagerError;

const
  CXErrorCodeCallDirectoryManagerErrorUnknown = 0;
  CXErrorCodeCallDirectoryManagerErrorNoExtensionFound = 1;
  CXErrorCodeCallDirectoryManagerErrorLoadingInterrupted = 2;
  CXErrorCodeCallDirectoryManagerErrorEntriesOutOfOrder = 3;
  CXErrorCodeCallDirectoryManagerErrorDuplicateEntries = 4;
  CXErrorCodeCallDirectoryManagerErrorMaximumEntriesExceeded = 5;
  CXErrorCodeCallDirectoryManagerErrorExtensionDisabled = 6;
{$endif}

