{ Parsed from UIKit.framework UIGuidedAccessRestrictions.h }

{ Types from UIGuidedAccessRestrictionDelegateProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIGuidedAccessRestrictionDelegateProtocolPtr = ^UIGuidedAccessRestrictionDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIGuidedAccessRestrictionState = NSInteger;
  UIGuidedAccessRestrictionStatePtr = ^UIGuidedAccessRestrictionState;

const
  UIGuidedAccessRestrictionStateAllow = 0;
  UIGuidedAccessRestrictionStateDeny = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  UIGuidedAccessRestrictionDelegateProtocol = objcprotocol external name 'UIGuidedAccessRestrictionDelegate' (NSObjectProtocol)
  required
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function guidedAccessRestrictionIdentifiers: NSString *ProtocolPtr; message 'guidedAccessRestrictionIdentifiers';
    {$else}
    function guidedAccessRestrictionIdentifiers: nullable NSString *ProtocolPtr; message 'guidedAccessRestrictionIdentifiers';
    {$endif}
    procedure guidedAccessRestrictionWithIdentifier_didChangeState (restrictionIdentifier: NSString; newRestrictionState: UIGuidedAccessRestrictionState); message 'guidedAccessRestrictionWithIdentifier:didChangeState:';
    function textForGuidedAccessRestrictionWithIdentifier (restrictionIdentifier: NSString): nullable NSStringPtr; message 'textForGuidedAccessRestrictionWithIdentifier:';
  optional
    function detailTextForGuidedAccessRestrictionWithIdentifier (restrictionIdentifier: NSString): nullable NSStringPtr; message 'detailTextForGuidedAccessRestrictionWithIdentifier:';
  end;
{$endif}

{$ifdef FUNCTIONS}
function UIGuidedAccessRestrictionStateForIdentifier(restrictionIdentifier: NSString): UIGuidedAccessRestrictionState; cdecl; external; { available in 7_0 }
{$endif}

