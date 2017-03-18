{ Parsed from CoreImage.framework CIRAWFilter.h }
{$ifdef CLASSES}

type
  CIRAWFilter = objccategory external (CIFilter)
    class function filterWithImageURL_options (url: NSURL; options: NSDictionary): CIFilter; message 'filterWithImageURL:options:'; { available in 10_5, 10_0 }
    class function filterWithImageData_options (data: NSData; options: NSDictionary): CIFilter; message 'filterWithImageData:options:'; { available in 10_5, 10_0 }
    class function filterWithCVPixelBuffer_properties_options (pixelBuffer: CVPixelBufferRef; properties: NSDictionary; options: NSDictionary): CIFilter; message 'filterWithCVPixelBuffer:properties:options:'; { available in 10_12, 10_0 }
  end;
{$endif}

