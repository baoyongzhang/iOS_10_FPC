{ Parsed from CoreVideo.framework CVBuffer.h }

{$if  not (defined(__COREVIDEO_CVBUFFER_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVBUFFER_H__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVBufferPropagatedAttachmentsKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVBufferNonPropagatedAttachmentsKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVBufferMovieTimeKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVBufferTimeValueKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVBufferTimeScaleKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVAttachmentMode = cuint32;
  CVAttachmentModePtr = ^CVAttachmentMode;

const
  kCVAttachmentMode_ShouldNotPropagate = 0;
  kCVAttachmentMode_ShouldPropagate = 1;

type
  struct CV_BRIDGED_TYPE = function (buffer: id) __CVBuffer* CVBufferRef;CV_EXPORT CVBufferRef CV_NULLABLE CVBufferRetain( CVBufferRef CV_NULLABLE): ; cdecl { available starting in __MAC_10_4,__IPHONE_4_0 };
{$endif}

{$ifdef FUNCTIONS}
procedure CVBufferRelease(buffer: CV_RELEASES_ARGUMENT CVBufferRef CV_NULLABLE); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
procedure CVBufferSetAttachment(buffer: CVBufferRef CV_NONNULL; key: CFStringRef CV_NONNULL; value: CFTypeRef CV_NONNULL; attachmentMode: CVAttachmentMode); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferGetAttachment(buffer: CVBufferRef CV_NONNULL; key: CFStringRef CV_NONNULL; var attachmentMode: CVAttachmentMode* CV_NULLABLE): CFTypeRef CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
procedure CVBufferRemoveAttachment(buffer: CVBufferRef CV_NONNULL; key: CFStringRef CV_NONNULL); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
procedure CVBufferRemoveAllAttachments(buffer: CVBufferRef CV_NONNULL); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferGetAttachments(buffer: CVBufferRef CV_NONNULL; attachmentMode: CVAttachmentMode): CFDictionaryRef                         CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
procedure CVBufferSetAttachments(buffer: CVBufferRef CV_NONNULL; theAttachments: CFDictionaryRef CV_NONNULL; attachmentMode: CVAttachmentMode); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
procedure CVBufferPropagateAttachments(sourceBuffer: CVBufferRef CV_NONNULL; destinationBuffer: CVBufferRef CV_NONNULL); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$endif}
