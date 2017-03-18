{ Parsed from MediaPlayer.framework MPVolumeView.h }

{$ifdef TYPES}
type
  MPVolumeViewPtr = ^MPVolumeView;
{$endif}

{$ifdef CLASSES}

type
  MPVolumeView = objcclass external (UIView, NSCodingProtocol)
  public
    procedure setShowsVolumeSlider(newValue: boolean); message 'setShowsVolumeSlider:';
    function showsVolumeSlider: boolean; message 'showsVolumeSlider';
    procedure setShowsRouteButton(newValue: boolean); message 'setShowsRouteButton:';
    function showsRouteButton: boolean; message 'showsRouteButton';
    function areWirelessRoutesAvailable: boolean; message 'areWirelessRoutesAvailable';
    function isWirelessRouteActive: boolean; message 'isWirelessRouteActive';
    procedure setMinimumVolumeSliderImage_forState (image: nullable UIImagePtr; state: UIControlState); message 'setMinimumVolumeSliderImage:forState:'; { available in 6_0 }
    procedure setMaximumVolumeSliderImage_forState (image: nullable UIImagePtr; state: UIControlState); message 'setMaximumVolumeSliderImage:forState:'; { available in 6_0 }
    procedure setVolumeThumbImage_forState (image: nullable UIImagePtr; state: UIControlState); message 'setVolumeThumbImage:forState:'; { available in 6_0 }
    function minimumVolumeSliderImageForState (state: UIControlState): nullable UIImagePtr; message 'minimumVolumeSliderImageForState:'; { available in 6_0 }
    function maximumVolumeSliderImageForState (state: UIControlState): nullable UIImagePtr; message 'maximumVolumeSliderImageForState:'; { available in 6_0 }
    function volumeThumbImageForState (state: UIControlState): nullable UIImagePtr; message 'volumeThumbImageForState:'; { available in 6_0 }
    procedure setVolumeWarningSliderImage(newValue: UIImage); message 'setVolumeWarningSliderImage:';
    function volumeWarningSliderImage: UIImage; message 'volumeWarningSliderImage';
    function volumeSliderRectForBounds (bounds: CGRect): CGRect; message 'volumeSliderRectForBounds:'; { available in 6_0 }
    function volumeThumbRectForBounds_volumeSliderRect_value (bounds: CGRect; rect: CGRect; value: single): CGRect; message 'volumeThumbRectForBounds:volumeSliderRect:value:'; { available in 6_0 }
    procedure setRouteButtonImage_forState (image: nullable UIImagePtr; state: UIControlState); message 'setRouteButtonImage:forState:'; { available in 6_0 }
    function routeButtonImageForState (state: UIControlState): nullable UIImagePtr; message 'routeButtonImageForState:'; { available in 6_0 }
    function routeButtonRectForBounds (bounds: CGRect): CGRect; message 'routeButtonRectForBounds:'; { available in 6_0 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPVolumeViewWirelessRoutesAvailableDidChangeNotification: __TVOS_PROHIBITED NSStringPtr { available in 7_0 }; cvar; external;
  MPVolumeViewWirelessRouteActiveDidChangeNotification: __TVOS_PROHIBITED NSStringPtr { available in 7_0 }; cvar; external;
{$endif}

