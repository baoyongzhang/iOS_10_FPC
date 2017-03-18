{ Parsed from GameplayKit.framework GKBehavior.h }

{$ifdef TYPES}
type
  GKBehaviorPtr = ^GKBehavior;
{$endif}

{$ifdef CLASSES}

type
  GKBehavior = objcclass external (NSObject, NSFastEnumerationProtocol, NSCopyingProtocol)
  public
    function goalCount: NSInteger; message 'goalCount';
    class function behaviorWithGoal_weight (goal: GKGoal; weight: single): instancetype; message 'behaviorWithGoal:weight:';
    class function behaviorWithGoals (goals: GKGoal *ProtocolPtr): instancetype; message 'behaviorWithGoals:';
    class function behaviorWithGoals_andWeights (goals: GKGoal *ProtocolPtr; weights: NSNumber*ProtocolPtr): instancetype; message 'behaviorWithGoals:andWeights:';
    class function behaviorWithWeightedGoals (weightedGoals: NSDictionary): instancetype; message 'behaviorWithWeightedGoals:';
    procedure setWeight_forGoal (weight: single; goal: GKGoal); message 'setWeight:forGoal:';
    function weightForGoal (goal: GKGoal): single; message 'weightForGoal:';
    procedure removeGoal (goal: GKGoal); message 'removeGoal:';
    procedure removeAllGoals; message 'removeAllGoals';
    function objectAtIndexedSubscript (idx: NSUInteger): GKGoal; message 'objectAtIndexedSubscript:';
    procedure setObject_forKeyedSubscript (weight: NSNumber; goal: GKGoal); message 'setObject:forKeyedSubscript:';
    function objectForKeyedSubscript (goal: GKGoal): nullable NSNumberPtr; message 'objectForKeyedSubscript:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id  _Nullable; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

