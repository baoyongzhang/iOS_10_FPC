{ Parsed from SceneKit.framework SceneKitTypes.h }

{$ifdef TYPES}
type
  SCNVector3 = record
    x, y, z: single;
  end;
type
  SCNVector3Ptr = ^SCNVector3;
type
  SCNVector4 = record
    x, y, z, w: single;
  end;
type
  SCNVector4Ptr = ^SCNVector4;
{$endif}

{$ifdef FUNCTIONS}
function SCNVector3EqualToVector3(a: SCNVector3; b: SCNVector3): cbool; cdecl; external;
function SCNVector4EqualToVector4(a: SCNVector4; b: SCNVector4): cbool; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  SCNQuaternion = SCNVector4;
  SCNQuaternionPtr = ^SCNQuaternion;

type
  SCNMatrix4 = record
    m11, m12, m13, m14: single;
    m21, m22, m23, m24: single;
    m31, m32, m33, m34: single;
    m41, m42, m43, m44: single;
  end;
type
  SCNMatrix4Ptr = ^SCNMatrix4;
{$endif}

{$ifdef __OBJC__}
{$ifdef CLASSES}

type
  NSValue_SceneKitAdditions = objccategory external name 'SceneKitAdditions' (NSValue)
    class function valueWithSCNVector3 (v: SCNVector3): NSValue; message 'valueWithSCNVector3:';
    class function valueWithSCNVector4 (v: SCNVector4): NSValue; message 'valueWithSCNVector4:';
    class function valueWithSCNMatrix4 (v: SCNMatrix4): NSValue; message 'valueWithSCNMatrix4:'; { available in macosx(10.10 }
    function SCNVector3Value: SCNVector3; message 'SCNVector3Value';
    function SCNVector4Value: SCNVector4; message 'SCNVector4Value';
    function ): SCNMatrix4 SCNMatrix4Value; message ')';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
const
  SCNProgramCompilationError = 1;
{$endif}

{$endif}
