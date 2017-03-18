{ Parsed from Photos.framework PHContentEditingInput.h }

{$ifdef TYPES}
type
  PHContentEditingInputPtr = ^PHContentEditingInput;
{$endif}

{$ifdef CLASSES}

type
  PHContentEditingInput = objcclass external (NSObject)
  public
    function mediaType: PHAssetMediaType; message 'mediaType';
    function mediaSubtypes: PHAssetMediaSubtype; message 'mediaSubtypes';
    function creationDate: NSDate; message 'creationDate';
    function location: CLLocation; message 'location';
    function uniformTypeIdentifier: NSString; message 'uniformTypeIdentifier';
    function adjustmentData: PHAdjustmentData; message 'adjustmentData';
    function displaySizeImage: UIImage; message 'displaySizeImage';
    function fullSizeImageURL: NSURL; message 'fullSizeImageURL';
    function fullSizeImageOrientation: cint; message 'fullSizeImageOrientation';
    function avAsset: AVAsset; message 'avAsset';
    function audiovisualAsset: AVAsset; message 'audiovisualAsset';
    function livePhoto: PHLivePhoto; message 'livePhoto';
  end;
{$endif}

