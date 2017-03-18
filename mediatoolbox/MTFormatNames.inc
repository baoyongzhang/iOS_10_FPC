{ Parsed from MediaToolbox.framework MTFormatNames.h }

{$ifndef MTFORMATNAME_H}

{$ifdef FUNCTIONS}
function MTCopyLocalizedNameForMediaType(mediaType: CMMediaType): CFStringRef CM_NULLABLE; cdecl; external;
function MTCopyLocalizedNameForMediaSubType(mediaType: CMMediaType; mediaSubType: FourCharCode): CFStringRef CM_NULLABLE; cdecl; external;
{$endif}

{$endif}
