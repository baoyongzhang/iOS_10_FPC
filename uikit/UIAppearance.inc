{ Parsed from UIKit.framework UIAppearance.h }

{$ifdef TYPES}
type
  UIAppearanceContainerProtocolPtr = ^UIAppearanceContainerProtocol;
  UIAppearanceProtocolPtr = ^UIAppearanceProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAppearanceContainerProtocol = objcprotocol external name 'UIAppearanceContainer' (NSObjectProtocol)
  end;

type
  UIAppearanceProtocol = objcprotocol external name 'UIAppearance' (NSObjectProtocol)
    class function appearance: instancetype; message 'appearance';
    class function appearanceWhenContainedIn (ContainerClass: UIAppearanceContainerProtocol): instancetype; message 'appearanceWhenContainedIn:'; deprecated 'in 5_0, 9_0, "Use +appearanceWhenContainedInInstancesOfClasses: instead"';
    class function appearanceWhenContainedInInstancesOfClasses (containerTypes: OpaqueType): instancetype; message 'appearanceWhenContainedInInstancesOfClasses:'; { available in 9_0 }
    class function appearanceForTraitCollection (trait: UITraitCollection): instancetype; message 'appearanceForTraitCollection:'; { available in 8_0 }
    class function appearanceForTraitCollection_whenContainedIn (trait: UITraitCollection; ContainerClass: UIAppearanceContainerProtocol): instancetype; message 'appearanceForTraitCollection:whenContainedIn:'; deprecated 'in 8_0, 9_0, "Use +appearanceForTraitCollection:whenContainedInInstancesOfClasses: instead"';
    class function appearanceForTraitCollection_whenContainedInInstancesOfClasses (trait: UITraitCollection; containerTypes: OpaqueType): instancetype; message 'appearanceForTraitCollection:whenContainedInInstancesOfClasses:'; { available in 9_0 }
  end;
{$endif}

