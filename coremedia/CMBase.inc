{ Parsed from CoreMedia.framework CMBase.h }

{$ifndef CMBASE_H}

{$ifndef __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11}
{$ifdef TYPES}
const
  __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11 = WEAK_IMPORT_ATTRIBUTE;
{$endif}

{$endif}

{$if defined(TARGET_OS_WINDOWS) and defined(TARGET_CPU_X86_64)}
{$ifdef TYPES}
type
  CMItemCount = cint64;
  CMItemCountPtr = ^CMItemCount;
  CMItemIndex = cint64;
  CMItemIndexPtr = ^CMItemIndex;
{$endif}

{$else}
{$ifdef TYPES}
type
  CMItemCount = clong;
  CMItemCountPtr = ^CMItemCount;
  CMItemIndex = clong;
  CMItemIndexPtr = ^CMItemIndex;
{$endif}

{$endif}

{$if (defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MAC)) and (defined(__has_feature))}

{$if defined(__has_feature)}
{$ifdef TYPES}
const
  COREMEDIA_DECLARE_NULLABILITY = 1;
{$endif}

{$endif}

{$if defined(__has_feature)}
{$ifdef TYPES}
const
  COREMEDIA_DECLARE_NULLABILITY_BEGIN_END = 1;
{$endif}

{$endif}

{$if defined(__has_feature)}
{$ifdef TYPES}
const
  COREMEDIA_DECLARE_BRIDGED_TYPES = 1;
{$endif}

{$endif}

{$if defined(__has_feature)}
{$ifdef TYPES}
const
  COREMEDIA_DECLARE_RETURNS_RETAINED = 1;
{$endif}

{$endif}

{$if defined(__has_feature)}
{$ifdef TYPES}
const
  COREMEDIA_DECLARE_RETURNS_RETAINED_ON_PARAMETERS = 1;
  COREMEDIA_DECLARE_RETURNS_NOT_RETAINED_ON_PARAMETERS = 1;
{$endif}

{$endif}
{$endif}

{$if defined(COREMEDIA_DECLARE_NULLABILITY)}
{$ifdef TYPES}
const
  CM_NULLABLE = __nullable;
  CM_NONNULL = __nonnull;
{$endif}

{$else}
{$endif}

{$if defined(COREMEDIA_DECLARE_RETURNS_RETAINED)}
{$ifdef TYPES}
const
  CM_RETURNS_RETAINED = CF_RETURNS_RETAINED;
{$endif}

{$else}
{$endif}

{$if defined(COREMEDIA_DECLARE_RETURNS_RETAINED_ON_PARAMETERS)}
{$ifdef TYPES}
const
  CM_RETURNS_RETAINED_PARAMETER = CF_RETURNS_RETAINED;
{$endif}

{$else}
{$endif}

{$ifdef TYPES}
type
  CMPersistentTrackID = cint32;
  CMPersistentTrackIDPtr = ^CMPersistentTrackID;
{$endif}

{$endif}
