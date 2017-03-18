{ Parsed from ImageIO.framework ImageIOBase.h }

{$ifndef __IMAGEIOBASE__}

{$if (defined(TARGET_OS_MAC) and not defined(TARGET_IPHONE_SIMULATOR)) or defined(TARGET_OS_EMBEDDED)}
{$ifdef TYPES}
const
  IIO_HAS_IOSURFACE = 1;
{$endif}

{$else}
{$ifdef TYPES}
const
  IIO_HAS_IOSURFACE = 0;
{$endif}

{$endif}

{$endif}
