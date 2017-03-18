{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesAudioToolbox;
interface

type
  AUAudioUnit = objcclass external;
  AUAudioUnitBus = objcclass external;
  AUAudioUnitBusArray = objcclass external;
  AUAudioUnitPreset = objcclass external;
  AUAudioUnitV2Bridge = objcclass external;
  AUParameter = objcclass external;
  AUParameterGroup = objcclass external;
  AUParameterNode = objcclass external;
  AUParameterTree = objcclass external;
  AUAudioUnitFactoryProtocol = objcprotocol external name 'AUAudioUnitFactory';

type
  AVAudioFormat = objcclass external;
  NSImage = objcclass external;
  UIImage = objcclass external;

implementation
end.
