{ Parsed from CoreFoundation.framework CFTree.h }

{$if  not (defined(__COREFOUNDATION_CFTREE__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFTREE__ = 1;

type
  CFTreeRef = OpaqueType;
  CFTreeRetainCallBack = function (info: pointer): pointer; cdecl;
  CFTreeReleaseCallBack = procedure (info: pointer); cdecl;
  CFTreeCopyDescriptionCallBack = function (info: pointer): CFStringRef; cdecl;

type
  CFTreeContext = record
    version: CFIndex;
    info: pointer;
    retain: CFTreeRetainCallBack;
    release: CFTreeReleaseCallBack;
    copyDescription: CFTreeCopyDescriptionCallBack;
  end;
type
  CFTreeContextPtr = ^CFTreeContext;

type
  CFTreeApplierFunction = procedure (value: pointer; context: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFTreeCreate(allocator: CFAllocatorRef; context: CFTreeContextPtr): CFTreeRef; cdecl; external;
function CFTreeGetParent(tree: CFTreeRef): CFTreeRef; cdecl; external;
function CFTreeGetNextSibling(tree: CFTreeRef): CFTreeRef; cdecl; external;
function CFTreeGetFirstChild(tree: CFTreeRef): CFTreeRef; cdecl; external;
procedure CFTreeGetContext(tree: CFTreeRef; var context: CFTreeContext); cdecl; external;
function CFTreeGetChildCount(tree: CFTreeRef): CFIndex; cdecl; external;
function CFTreeGetChildAtIndex(tree: CFTreeRef; idx: CFIndex): CFTreeRef; cdecl; external;
procedure CFTreeGetChildren(tree: CFTreeRef; var children: CFTreeRef); cdecl; external;
procedure CFTreeApplyFunctionToChildren(tree: CFTreeRef; applier: CFTreeApplierFunction; context: pointer); cdecl; external;
function CFTreeFindRoot(tree: CFTreeRef): CFTreeRef; cdecl; external;
procedure CFTreeSetContext(tree: CFTreeRef; context: CFTreeContextPtr); cdecl; external;
procedure CFTreePrependChild(tree: CFTreeRef; newChild: CFTreeRef); cdecl; external;
procedure CFTreeAppendChild(tree: CFTreeRef; newChild: CFTreeRef); cdecl; external;
procedure CFTreeInsertSibling(tree: CFTreeRef; newSibling: CFTreeRef); cdecl; external;
procedure CFTreeRemove(tree: CFTreeRef); cdecl; external;
procedure CFTreeRemoveAllChildren(tree: CFTreeRef); cdecl; external;
procedure CFTreeSortChildren(tree: CFTreeRef; comparator: CFComparatorFunction; context: pointer); cdecl; external;
{$endif}

{$endif}
