{ Parsed from UIKit.framework UISlider.h }

{$ifdef TYPES}
type
  UISliderPtr = ^UISlider;
{$endif}

{$ifdef CLASSES}

type
  UISlider = objcclass external (UIControl, NSCodingProtocol)
  public
    procedure setValue(newValue: single); message 'setValue:';
    function value: single; message 'value';
    procedure setMinimumValue(newValue: single); message 'setMinimumValue:';
    function minimumValue: single; message 'minimumValue';
    procedure setMaximumValue(newValue: single); message 'setMaximumValue:';
    function maximumValue: single; message 'maximumValue';
    procedure setMinimumValueImage(newValue: UIImage); message 'setMinimumValueImage:';
    function minimumValueImage: UIImage; message 'minimumValueImage';
    procedure setMaximumValueImage(newValue: UIImage); message 'setMaximumValueImage:';
    function maximumValueImage: UIImage; message 'maximumValueImage';
    procedure setContinuous(newValue: boolean); message 'setContinuous:';
    function isContinuous: boolean; message 'isContinuous';
    procedure setMinimumTrackTintColor(newValue: UIColor); message 'setMinimumTrackTintColor:';
    function minimumTrackTintColor: UIColor; message 'minimumTrackTintColor';
    procedure setMaximumTrackTintColor(newValue: UIColor); message 'setMaximumTrackTintColor:';
    function maximumTrackTintColor: UIColor; message 'maximumTrackTintColor';
    procedure setThumbTintColor(newValue: UIColor); message 'setThumbTintColor:';
    function thumbTintColor: UIColor; message 'thumbTintColor';
    procedure setValue_animated (value_: single; animated: boolean); message 'setValue:animated:';
    procedure setThumbImage_forState (image: nullable UIImagePtr; state_: UIControlState); message 'setThumbImage:forState:';
    procedure setMinimumTrackImage_forState (image: nullable UIImagePtr; state_: UIControlState); message 'setMinimumTrackImage:forState:';
    procedure setMaximumTrackImage_forState (image: nullable UIImagePtr; state_: UIControlState); message 'setMaximumTrackImage:forState:';
    function thumbImageForState (state_: UIControlState): nullable UIImagePtr; message 'thumbImageForState:';
    function minimumTrackImageForState (state_: UIControlState): nullable UIImagePtr; message 'minimumTrackImageForState:';
    function maximumTrackImageForState (state_: UIControlState): nullable UIImagePtr; message 'maximumTrackImageForState:';
    function currentThumbImage: UIImage; message 'currentThumbImage';
    function currentMinimumTrackImage: UIImage; message 'currentMinimumTrackImage';
    function currentMaximumTrackImage: UIImage; message 'currentMaximumTrackImage';
    function minimumValueImageRectForBounds (bounds: CGRect): CGRect; message 'minimumValueImageRectForBounds:';
    function maximumValueImageRectForBounds (bounds: CGRect): CGRect; message 'maximumValueImageRectForBounds:';
    function trackRectForBounds (bounds: CGRect): CGRect; message 'trackRectForBounds:';
    function thumbRectForBounds_trackRect_value (bounds: CGRect; rect: CGRect; value_: single): CGRect; message 'thumbRectForBounds:trackRect:value:';
  end;
{$endif}

