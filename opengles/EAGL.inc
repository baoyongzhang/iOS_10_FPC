{ Parsed from OpenGLES.framework EAGL.h }

{$ifdef TYPES}
type
  EAGLSharegroupPtr = ^EAGLSharegroup;
  EAGLContextPtr = ^EAGLContext;
{$endif}

{$ifndef _EAGL_H_}

{$ifdef TYPES}
const
  EAGL_MAJOR_VERSION = 1;
  EAGL_MINOR_VERSION = 0;

type
  EAGLRenderingAPI = NSUInteger;
  EAGLRenderingAPIPtr = ^EAGLRenderingAPI;

const
  kEAGLRenderingAPIOpenGLES1 = 1;
  kEAGLRenderingAPIOpenGLES2 = 2;
  kEAGLRenderingAPIOpenGLES3 = 3;
{$endif}

{$ifdef FUNCTIONS}
procedure EAGLGetVersion(major: pcuint; minor: pcuint); cdecl; external;
{$endif}

{$ifdef CLASSES}

type
  EAGLSharegroup = objcclass external (NSObject)
  private
    _private: _EAGLSharegroupPrivatePtr;
  public
    procedure setDebugLabel(newValue: NSString); message 'setDebugLabel:';
    function debugLabel: NSString; message 'debugLabel';
  end;

type
  EAGLContext = objcclass external (NSObject)
  private
    _private: _EAGLContextPrivatePtr;
  public
    function init: instancetype; message 'init';
    function initWithAPI (api: EAGLRenderingAPI): instancetype; message 'initWithAPI:';
    function initWithAPI_sharegroup (api: EAGLRenderingAPI; sharegroup: EAGLSharegroup): instancetype; message 'initWithAPI:sharegroup:'; { NS_DESIGNATED_INITIALIZER }
    class function setCurrentContext (context: EAGLContext): boolean; message 'setCurrentContext:';
    class function currentContext: EAGLContext; message 'currentContext';
    function API: EAGLRenderingAPI; message 'API';
    function sharegroup: EAGLSharegroup; message 'sharegroup';
    procedure setDebugLabel(newValue: NSString); message 'setDebugLabel:';
    function debugLabel: NSString; message 'debugLabel';
    procedure setMultiThreaded(newValue: boolean); message 'setMultiThreaded:';
    function isMultiThreaded: boolean; message 'isMultiThreaded';
  end;
{$endif}

{$endif}
