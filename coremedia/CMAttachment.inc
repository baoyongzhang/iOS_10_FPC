{ Parsed from CoreMedia.framework CMAttachment.h }

{$ifndef CMATTACHMENT_H}

{$ifdef TYPES}
type
  CMAttachmentBearerRef = CM_BRIDGED_TYPE(id) CFTypeRef;
  CMAttachmentBearerRefPtr = ^CMAttachmentBearerRef;
  CMAttachmentMode = cuint32;
  CMAttachmentModePtr = ^CMAttachmentMode;
{$endif}

{$ifdef FUNCTIONS}
procedure CMSetAttachment(target: CMAttachmentBearerRef CM_NONNULL; key: CFStringRef CM_NONNULL; value: CFTypeRef CM_NULLABLE; attachmentMode: CMAttachmentMode); cdecl; external; { available starting in  __MAC_10_7, __IPHONE_4_0  }
function CMGetAttachment(target: CMAttachmentBearerRef CM_NONNULL; key: CFStringRef CM_NONNULL; attachmentModeOut: CMAttachmentMode* CM_NULLABLE): CFTypeRef CM_NULLABLE; cdecl; external; { available starting in  __MAC_10_7, __IPHONE_4_0  }
procedure CMRemoveAttachment(target: CMAttachmentBearerRef CM_NONNULL; key: CFStringRef CM_NONNULL); cdecl; external; { available starting in  __MAC_10_7, __IPHONE_4_0  }
procedure CMRemoveAllAttachments(target: CMAttachmentBearerRef CM_NONNULL); cdecl; external; { available starting in  __MAC_10_7, __IPHONE_4_0  }
function CMCopyDictionaryOfAttachments(allocator: CFAllocatorRef CM_NULLABLE; target: CMAttachmentBearerRef CM_NONNULL; attachmentMode: CMAttachmentMode): CFDictionaryRef CM_NULLABLE; cdecl; external; { available starting in  __MAC_10_7, __IPHONE_4_0  }
procedure CMSetAttachments(target: CMAttachmentBearerRef CM_NONNULL; theAttachments: CFDictionaryRef CM_NONNULL; attachmentMode: CMAttachmentMode); cdecl; external; { available starting in  __MAC_10_7, __IPHONE_4_0  }
procedure CMPropagateAttachments(source: CMAttachmentBearerRef CM_NONNULL; destination: CMAttachmentBearerRef CM_NONNULL); cdecl; external; { available starting in  __MAC_10_7, __IPHONE_4_0  }
{$endif}

{$endif}
