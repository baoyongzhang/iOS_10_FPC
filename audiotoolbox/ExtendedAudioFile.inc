{ Parsed from AudioToolbox.framework ExtendedAudioFile.h }

{$ifndef AudioToolbox_ExtendedAudioFile_h}

{$ifdef TYPES}
type
  ExtAudioFileRef = OpaqueType;
  ExtAudioFilePropertyID = UInt32;
  ExtAudioFilePropertyIDPtr = ^ExtAudioFilePropertyID;
{$endif}

{$ifdef FUNCTIONS}
function ExtAudioFileOpenURL(inURL: CFURLRef; outExtAudioFile: ExtAudioFileRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_1 }
function ExtAudioFileWrapAudioFileID(inFileID: AudioFileID; inForWriting: Boolean; outExtAudioFile: ExtAudioFileRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileCreateWithURL(inURL: CFURLRef; inFileType: AudioFileTypeID; inStreamDesc: AudioStreamBasicDescriptionPtr; inChannelLayout: AudioChannelLayout* __nullable; inFlags: UInt32; outExtAudioFile: ExtAudioFileRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_1 }
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function ExtAudioFileOpen(inFSRef: FSRefPtr; outExtAudioFile: ExtAudioFileRef __nullable* __nonnull): OSStatus; cdecl; external; deprecated 'in __MAC_10_4,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
function ExtAudioFileCreateNew(inParentDir: FSRefPtr; inFileName: CFStringRef; inFileType: AudioFileTypeID; inStreamDesc: AudioStreamBasicDescriptionPtr; inChannelLayout: AudioChannelLayout* __nullable; outExtAudioFile: ExtAudioFileRef __nullable* __nonnull): OSStatus; cdecl; external; deprecated 'in __MAC_10_4,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function ExtAudioFileDispose(inExtAudioFile: ExtAudioFileRef): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileRead(inExtAudioFile: ExtAudioFileRef; ioNumberFrames: UInt32Ptr; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileWrite(inExtAudioFile: ExtAudioFileRef; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileWriteAsync(inExtAudioFile: ExtAudioFileRef; inNumberFrames: UInt32; ioData: AudioBufferList* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileSeek(inExtAudioFile: ExtAudioFileRef; inFrameOffset: SInt64): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileTell(inExtAudioFile: ExtAudioFileRef; outFrameOffset: SInt64Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileGetPropertyInfo(inExtAudioFile: ExtAudioFileRef; inPropertyID: ExtAudioFilePropertyID; outSize: UInt32* __nullable; outWritable: Boolean* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileGetProperty(inExtAudioFile: ExtAudioFileRef; inPropertyID: ExtAudioFilePropertyID; ioPropertyDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileSetProperty(inExtAudioFile: ExtAudioFileRef; inPropertyID: ExtAudioFilePropertyID; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
{$endif}

{$endif}
