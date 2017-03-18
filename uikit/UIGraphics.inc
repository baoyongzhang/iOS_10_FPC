{ Parsed from UIKit.framework UIGraphics.h }
{$ifdef FUNCTIONS}
function UIGraphicsGetCurrentContext: CGContextRef __nullable; cdecl; external; { CF_RETURNS_NOT_RETAINED }
procedure UIGraphicsPushContext(context: CGContextRef); cdecl; external;
procedure UIGraphicsPopContext; cdecl; external;
procedure UIRectFillUsingBlendMode(rect: CGRect; blendMode: CGBlendMode); cdecl; external;
procedure UIRectFill(rect: CGRect); cdecl; external;
procedure UIRectFrameUsingBlendMode(rect: CGRect; blendMode: CGBlendMode); cdecl; external;
procedure UIRectFrame(rect: CGRect); cdecl; external;
procedure UIRectClip(rect: CGRect); cdecl; external;
procedure UIGraphicsBeginImageContext(size: CGSize); cdecl; external;
procedure UIGraphicsBeginImageContextWithOptions(size: CGSize; opaque: boolean; scale: CGFloat); cdecl; external; { available in 4_0 }
function UIGraphicsGetImageFromCurrentImageContext: UIImage* __nullable; cdecl; external;
procedure UIGraphicsEndImageContext; cdecl; external;
function UIGraphicsBeginPDFContextToFile(path: NSString; bounds: CGRect; documentInfo: NSDictionary* __nullable): boolean; cdecl; external; { available in 3_2 }
procedure UIGraphicsBeginPDFContextToData(data: NSMutableData; bounds: CGRect; documentInfo: NSDictionary* __nullable); cdecl; external; { available in 3_2 }
procedure UIGraphicsEndPDFContext; cdecl; external; { available in 3_2 }
procedure UIGraphicsBeginPDFPage; cdecl; external; { available in 3_2 }
procedure UIGraphicsBeginPDFPageWithInfo(bounds: CGRect; pageInfo: NSDictionary* __nullable); cdecl; external; { available in 3_2 }
function UIGraphicsGetPDFContextBounds: CGRect; cdecl; external; { available in 3_2 }
procedure UIGraphicsSetPDFContextURLForRect(url: NSURL; rect: CGRect); cdecl; external; { available in 3_2 }
procedure UIGraphicsAddPDFContextDestinationAtPoint(name: NSString; point: CGPoint); cdecl; external; { available in 3_2 }
procedure UIGraphicsSetPDFContextDestinationForRect(name: NSString; rect: CGRect); cdecl; external; { available in 3_2 }
{$endif}

