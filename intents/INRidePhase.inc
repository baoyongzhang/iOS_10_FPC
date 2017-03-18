{ Parsed from Intents.framework INRidePhase.h }

{$ifndef INRidePhase_h}
{$ifdef TYPES}
type
  INRidePhase = NSInteger;
  INRidePhasePtr = ^INRidePhase;

const
  INRidePhaseUnknown = 0;
  INRidePhaseReceived = 1;
  INRidePhaseConfirmed = 2;
  INRidePhaseOngoing = 3;
  INRidePhaseCompleted = 4;
  INRidePhaseApproachingPickup = 5;
  INRidePhasePickup = 6;
{$endif}

{$endif}
