{ Parsed from CoreVideo.framework CVMetalTexture.h }

{$if  not (defined(__COREVIDEO_CVMETALTEXTURE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVMETALTEXTURE_H__ = 1;
{$endif}

{$if (defined(__OBJC__)) and defined(COREVIDEO_SUPPORTS_METAL)}
{$ifdef TYPES}
type
  CVMetalTextureRef = CVImageBufferRef;
  CVMetalTextureRefPtr = ^CVMetalTextureRef;
{$endif}

{$ifdef FUNCTIONS}
function CVMetalTextureGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_11,__IPHONE_8_0 }
function CVMetalTextureGetTexture(image: CVMetalTextureRef CV_NONNULL): MTLTextureProtocol CV_NULLABLE; cdecl; external; { available starting in __MAC_10_11,__IPHONE_8_0 }
function CVMetalTextureIsFlipped(image: CVMetalTextureRef CV_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_11,__IPHONE_8_0 }
procedure CVMetalTextureGetCleanTexCoords(image: CVMetalTextureRef CV_NONNULL; lowerLeft: psingle { 2 element array of single }; lowerRight: psingle { 2 element array of single }; upperRight: psingle { 2 element array of single }; upperLeft: psingle { 2 element array of single }); cdecl; external; { available starting in __MAC_10_11,__IPHONE_8_0 }
{$endif}

{$endif}

{$endif}
