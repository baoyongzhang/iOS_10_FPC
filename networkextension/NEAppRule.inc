{ Parsed from NetworkExtension.framework NEAppRule.h }

{$ifdef TYPES}
type
  NEAppRulePtr = ^NEAppRule;
{$endif}

{$ifdef CLASSES}

type
  NEAppRule = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithSigningIdentifier (signingIdentifier: NSString): instancetype; message 'initWithSigningIdentifier:'; { available in NA, 9_0 }
    function initWithSigningIdentifier_designatedRequirement (signingIdentifier: NSString; designatedRequirement: NSString): instancetype; message 'initWithSigningIdentifier:designatedRequirement:'; { available in 10_11, NA }
    function matchSigningIdentifier: NSString; message 'matchSigningIdentifier';
    function matchDesignatedRequirement: NSString; message 'matchDesignatedRequirement';
    procedure setMatchPath(newValue: NSString); message 'setMatchPath:';
    function matchPath: NSString; message 'matchPath';
    procedure setMatchDomains(newValue: NSArray); message 'setMatchDomains:';
    function matchDomains: NSArray; message 'matchDomains';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

