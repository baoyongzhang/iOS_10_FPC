{ Parsed from Intents.framework INIntentErrors.h }
{$ifdef TYPES}
type
  INIntentErrorCode = NSInteger;
  INIntentErrorCodePtr = ^INIntentErrorCode;

const
  INIntentErrorInteractionOperationNotSupported = 1900;
  INIntentErrorDonatingInteraction = 1901;
  INIntentErrorDeletingAllInteractions = 1902;
  INIntentErrorDeletingInteractionWithIdentifiers = 1903;
  INIntentErrorDeletingInteractionWithGroupIdentifier = 1904;
  INIntentErrorIntentSupportedByMultipleExtension = 2001;
  INIntentErrorRestrictedIntentsNotSupportedByExtension = 2002;
  INIntentErrorNoHandlerProvidedForIntent = 2003;
  INIntentErrorInvalidIntentName = 2004;
  INIntentErrorRequestTimedOut = 3001;
  INIntentErrorInvalidUserVocabularyFileLocation = 4000;
{$endif}

