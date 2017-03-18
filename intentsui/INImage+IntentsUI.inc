{ Parsed from IntentsUI.framework INImage+IntentsUI.h }
{$ifdef CLASSES}

type
  IntentsUI = objccategory external (INImage)
    class function imageWithCGImage (imageRef: CGImageRef): instancetype; message 'imageWithCGImage:'; { available in ios(10.0 }
    class function imageWithUIImage (image: UIImage): instancetype; message 'imageWithUIImage:'; { available in ios(10.0 }
    class function imageSizeForIntentResponse (response: INIntentResponse): CGSize; message 'imageSizeForIntentResponse:'; { available in ios(10.0 }
  end;
{$endif}

