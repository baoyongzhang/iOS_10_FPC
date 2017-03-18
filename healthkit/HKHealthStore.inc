{ Parsed from HealthKit.framework HKHealthStore.h }

{$ifdef TYPES}
type
  HKHealthStorePtr = ^HKHealthStore;
{$endif}

{$ifdef CLASSES}

type
  HKHealthStore = objcclass external (NSObject)
  public
    class function isHealthDataAvailable: boolean; message 'isHealthDataAvailable';
    function authorizationStatusForType (type_: HKObjectType): HKAuthorizationStatus; message 'authorizationStatusForType:';
    procedure requestAuthorizationToShareTypes_readTypes_completion (typesToShare: nullable HKSampleType *ProtocolPtr; typesToRead: nullable HKObjectType *ProtocolPtr; completion: OpaqueCBlock); message 'requestAuthorizationToShareTypes:readTypes:completion:';
    procedure handleAuthorizationForExtensionWithCompletion (completion: OpaqueCBlock); message 'handleAuthorizationForExtensionWithCompletion:'; { available in 9_0 }
    function earliestPermittedSampleDate: NSDate; message 'earliestPermittedSampleDate'; { available in 9_0, 2_0 }
    procedure saveObject_withCompletion (object_: HKObject; completion: OpaqueCBlock); message 'saveObject:withCompletion:';
    procedure saveObjects_withCompletion (objects: HKObject *ProtocolPtr; completion: OpaqueCBlock); message 'saveObjects:withCompletion:';
    procedure deleteObject_withCompletion (object_: HKObject; completion: OpaqueCBlock); message 'deleteObject:withCompletion:';
    procedure deleteObjects_withCompletion (objects: HKObject *ProtocolPtr; completion: OpaqueCBlock); message 'deleteObjects:withCompletion:'; { available in 9_0, 2_0 }
    procedure deleteObjectsOfType_predicate_withCompletion (objectType: HKObjectType; predicate: NSPredicate; completion: OpaqueCBlock); message 'deleteObjectsOfType:predicate:withCompletion:'; { available in 9_0, 2_0 }
    procedure executeQuery (query: HKQuery); message 'executeQuery:';
    procedure stopQuery (query: HKQuery); message 'stopQuery:';
    procedure splitTotalEnergy_startDate_endDate_resultsHandler (totalEnergy: HKQuantity; startDate: NSDate; endDate: NSDate; resultsHandler: OpaqueCBlock); message 'splitTotalEnergy:startDate:endDate:resultsHandler:'; { available in 9_0, 2_0 }
    function dateOfBirthWithError (error: NSErrorPtr): nullable NSDatePtr; message 'dateOfBirthWithError:'; deprecated 'in 8_0, 10_0, "Use dateOfBirthComponentsWithError:"';
    function dateOfBirthComponentsWithError (error: NSErrorPtr): nullable NSDateComponentsPtr; message 'dateOfBirthComponentsWithError:'; { available in 10_0, 3_0 }
    function biologicalSexWithError (error: NSErrorPtr): nullable HKBiologicalSexObjectPtr; message 'biologicalSexWithError:';
    function bloodTypeWithError (error: NSErrorPtr): nullable HKBloodTypeObjectPtr; message 'bloodTypeWithError:';
    function fitzpatrickSkinTypeWithError (error: NSErrorPtr): nullable HKFitzpatrickSkinTypeObjectPtr; message 'fitzpatrickSkinTypeWithError:'; { available in 9_0, 2_0 }
    function wheelchairUseWithError (error: NSErrorPtr): nullable HKWheelchairUseObjectPtr; message 'wheelchairUseWithError:'; { available in 10_0, 3_0 }
  end;


type
  HKHealthStore_HKWorkout = objccategory external name 'HKWorkout' (HKHealthStore)
    procedure addSamples_toWorkout_completion (samples: HKSample *ProtocolPtr; workout: HKWorkout; completion: OpaqueCBlock); message 'addSamples:toWorkout:completion:';
    procedure startWorkoutSession (workoutSession: HKWorkoutSession); message 'startWorkoutSession:'; { available in 2_0 }
    procedure endWorkoutSession (workoutSession: HKWorkoutSession); message 'endWorkoutSession:'; { available in 2_0 }
    procedure pauseWorkoutSession (workoutSession: HKWorkoutSession); message 'pauseWorkoutSession:'; { available in 3_0 }
    procedure resumeWorkoutSession (workoutSession: HKWorkoutSession); message 'resumeWorkoutSession:'; { available in 3_0 }
    procedure startWatchAppWithWorkoutConfiguration_completion (workoutConfiguration: HKWorkoutConfiguration; completion: OpaqueCBlock); message 'startWatchAppWithWorkoutConfiguration:completion:'; { available in 10_0 }
  end;

type
  HKBackgroundDelivery = objccategory external (HKHealthStore)
    procedure enableBackgroundDeliveryForType_frequency_withCompletion (type_: HKObjectType; frequency: HKUpdateFrequency; completion: OpaqueCBlock); message 'enableBackgroundDeliveryForType:frequency:withCompletion:';
    procedure disableBackgroundDeliveryForType_withCompletion (type_: HKObjectType; completion: OpaqueCBlock); message 'disableBackgroundDeliveryForType:withCompletion:';
    procedure disableAllBackgroundDeliveryWithCompletion (completion: OpaqueCBlock); message 'disableAllBackgroundDeliveryWithCompletion:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKUserPreferencesDidChangeNotification: NSString { available in 8_2, 2_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  HKUserPreferences = objccategory external (HKHealthStore)
    procedure preferredUnitsForQuantityTypes_completion (quantityTypes: HKQuantityType *ProtocolPtr; completion: OpaqueCBlock); message 'preferredUnitsForQuantityTypes:completion:'; { available in 8_2, 2_0 }
  end;
{$endif}

