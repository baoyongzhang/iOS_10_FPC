{ Parsed from Contacts.framework CNError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  CNErrorDomain: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CNErrorCode = NSInteger;
  CNErrorCodePtr = ^CNErrorCode;

const
  CNErrorCodeCommunicationError = 1;
  CNErrorCodeDataAccessError = 2;
  CNErrorCodeAuthorizationDenied = 100;
  CNErrorCodeRecordDoesNotExist = 200;
  CNErrorCodeInsertedRecordAlreadyExists = 201;
  CNErrorCodeContainmentCycle = 202;
  CNErrorCodeContainmentScope = 203;
  CNErrorCodeParentRecordDoesNotExist = 204;
  CNErrorCodeValidationMultipleErrors = 300;
  CNErrorCodeValidationTypeMismatch = 301;
  CNErrorCodeValidationConfigurationError = 302;
  CNErrorCodePredicateInvalid = 400;
  CNErrorCodePolicyViolation = 500;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNErrorUserInfoAffectedRecordsKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNErrorUserInfoAffectedRecordIdentifiersKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNErrorUserInfoValidationErrorsKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNErrorUserInfoKeyPathsKey: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

