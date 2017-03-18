{ Parsed from Intents.framework INDomainHandling.h }

{$ifdef TYPES}
type
  INCallsDomainHandlingProtocolPtr = ^INCallsDomainHandlingProtocol;
  INCarPlayDomainHandlingProtocolPtr = ^INCarPlayDomainHandlingProtocol;
  INWorkoutsDomainHandlingProtocolPtr = ^INWorkoutsDomainHandlingProtocol;
  INRadioDomainHandlingProtocolPtr = ^INRadioDomainHandlingProtocol;
  INMessagesDomainHandlingProtocolPtr = ^INMessagesDomainHandlingProtocol;
  INPaymentsDomainHandlingProtocolPtr = ^INPaymentsDomainHandlingProtocol;
  INPhotosDomainHandlingProtocolPtr = ^INPhotosDomainHandlingProtocol;
  INRidesharingDomainHandlingProtocolPtr = ^INRidesharingDomainHandlingProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  INCallsDomainHandlingProtocol = objcprotocol external name 'INCallsDomainHandling' (INStartAudioCallIntentHandlingProtocol, INStartVideoCallIntentHandlingProtocol, INSearchCallHistoryIntentHandlingProtocol)
  end;

type
  INCarPlayDomainHandlingProtocol = objcprotocol external name 'INCarPlayDomainHandling' (INSetAudioSourceInCarIntentHandlingProtocol, INSetClimateSettingsInCarIntentHandlingProtocol, INSetDefrosterSettingsInCarIntentHandlingProtocol, INSetSeatSettingsInCarIntentHandlingProtocol, INSetProfileInCarIntentHandlingProtocol, INSaveProfileInCarIntentHandlingProtocol)
  end;

type
  INWorkoutsDomainHandlingProtocol = objcprotocol external name 'INWorkoutsDomainHandling' (INStartWorkoutIntentHandlingProtocol, INPauseWorkoutIntentHandlingProtocol, INEndWorkoutIntentHandlingProtocol, INCancelWorkoutIntentHandlingProtocol, INResumeWorkoutIntentHandlingProtocol)
  end;

type
  INRadioDomainHandlingProtocol = objcprotocol external name 'INRadioDomainHandling' (INSetRadioStationIntentHandlingProtocol)
  end;

type
  INMessagesDomainHandlingProtocol = objcprotocol external name 'INMessagesDomainHandling' (INSendMessageIntentHandlingProtocol, INSearchForMessagesIntentHandlingProtocol, INSetMessageAttributeIntentHandlingProtocol)
  end;

type
  INPaymentsDomainHandlingProtocol = objcprotocol external name 'INPaymentsDomainHandling' (INSendPaymentIntentHandlingProtocol, INRequestPaymentIntentHandlingProtocol)
  end;

type
  INPhotosDomainHandlingProtocol = objcprotocol external name 'INPhotosDomainHandling' (INSearchForPhotosIntentHandlingProtocol, INStartPhotoPlaybackIntentHandlingProtocol)
  end;

type
  INRidesharingDomainHandlingProtocol = objcprotocol external name 'INRidesharingDomainHandling' (INListRideOptionsIntentHandlingProtocol, INRequestRideIntentHandlingProtocol, INGetRideStatusIntentHandlingProtocol)
  end;
{$endif}

