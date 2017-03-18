{ Parsed from CFNetwork.framework CFFTPStream.h }

{$ifndef __CFFTPSTREAM__}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamErrorDomainFTP: SInt32 { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertyFTPUserName: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPPassword: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPUsePassiveMode: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPResourceSize: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPFetchResourceInfo: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPFileTransferOffset: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPAttemptPersistentConnection: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPProxy: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPProxyHost: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPProxyPort: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPProxyUser: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFStreamPropertyFTPProxyPassword: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFFTPResourceMode: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFFTPResourceName: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFFTPResourceOwner: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFFTPResourceGroup: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFFTPResourceLink: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFFTPResourceSize: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFFTPResourceType: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
  kCFFTPResourceModDate: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"'; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFReadStreamCreateWithFTPURL(alloc: CFAllocatorRef; ftpURL: CFURLRef): CFReadStreamRef; cdecl; external; deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"';
function CFFTPCreateParsedResourceListing(alloc: CFAllocatorRef; buffer: pointer; bufferLength: CFIndex; var parsed: CFDictionaryRef): CFIndex; cdecl; external; deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"';
function CFWriteStreamCreateWithFTPURL(alloc: CFAllocatorRef; ftpURL: CFURLRef): CFWriteStreamRef; cdecl; external; deprecated 'in 10_3, 10_11, 2_0, 9_0 , "Use NSURLSessionAPI for ftp requests"';
{$endif}

{$endif}
