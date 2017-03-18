{ Parsed from GameplayKit.framework GKGoal.h }

{$ifdef TYPES}
type
  GKGoalPtr = ^GKGoal;
{$endif}

{$ifdef CLASSES}

type
  GKGoal = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function goalToSeekAgent (agent: GKAgent): instancetype; message 'goalToSeekAgent:';
    class function goalToFleeAgent (agent: GKAgent): instancetype; message 'goalToFleeAgent:';
    class function goalToAvoidObstacles_maxPredictionTime (obstacles: GKObstacle *ProtocolPtr; maxPredictionTime: NSTimeInterval): instancetype; message 'goalToAvoidObstacles:maxPredictionTime:';
    class function goalToAvoidAgents_maxPredictionTime (agents: GKAgent *ProtocolPtr; maxPredictionTime: NSTimeInterval): instancetype; message 'goalToAvoidAgents:maxPredictionTime:';
    class function goalToSeparateFromAgents_maxDistance_maxAngle (agents: GKAgent *ProtocolPtr; maxDistance: single; maxAngle: single): instancetype; message 'goalToSeparateFromAgents:maxDistance:maxAngle:';
    class function goalToAlignWithAgents_maxDistance_maxAngle (agents: GKAgent *ProtocolPtr; maxDistance: single; maxAngle: single): instancetype; message 'goalToAlignWithAgents:maxDistance:maxAngle:';
    class function goalToCohereWithAgents_maxDistance_maxAngle (agents: GKAgent *ProtocolPtr; maxDistance: single; maxAngle: single): instancetype; message 'goalToCohereWithAgents:maxDistance:maxAngle:';
    class function goalToReachTargetSpeed (targetSpeed: single): instancetype; message 'goalToReachTargetSpeed:';
    class function goalToWander (speed: single): instancetype; message 'goalToWander:';
    class function goalToInterceptAgent_maxPredictionTime (target: GKAgent; maxPredictionTime: NSTimeInterval): instancetype; message 'goalToInterceptAgent:maxPredictionTime:';
    class function goalToFollowPath_maxPredictionTime_forward (path: GKPath; maxPredictionTime: NSTimeInterval; forward: boolean): instancetype; message 'goalToFollowPath:maxPredictionTime:forward:';
    class function goalToStayOnPath_maxPredictionTime (path: GKPath; maxPredictionTime: NSTimeInterval): instancetype; message 'goalToStayOnPath:maxPredictionTime:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

