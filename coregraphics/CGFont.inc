{ Parsed from CoreGraphics.framework CGFont.h }

{$ifndef CGFONT_H_}
{$ifdef TYPES}
type
  CGFontRef = OpaqueType;
  CGFontIndex = cushort;
  CGFontIndexPtr = ^CGFontIndex;
  CGGlyph = CGFontIndex;
  CGGlyphPtr = ^CGGlyph;
  CGFontPostScriptFormat = cint32;
  CGFontPostScriptFormatPtr = ^CGFontPostScriptFormat;

const
  kCGFontPostScriptFormatType1 = 1;
  kCGFontPostScriptFormatType3 = 3;
  kCGFontPostScriptFormatType42 = 42;
{$endif}

{$ifdef FUNCTIONS}
function CGFontGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGFontCreateWithPlatformFont(platformFontReference: void* cg_nullable): CGFontRef __nullable; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_6,                                __IPHONE_NA, __IPHONE_NA';
function CGFontCreateWithDataProvider(provider: CGDataProviderRef cg_nullable): CGFontRef cg_nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCreateWithFontName(name: CFStringRef cg_nullable): CGFontRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCreateCopyWithVariations(font: CGFontRef cg_nullable; variations: CFDictionaryRef __nullable): CGFontRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontRetain(font: CGFontRef cg_nullable): CGFontRef cg_nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGFontRelease(font: CGFontRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGFontGetNumberOfGlyphs(font: CGFontRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGFontGetUnitsPerEm(font: CGFontRef cg_nullable): cint; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGFontCopyPostScriptName(font: CGFontRef cg_nullable): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCopyFullName(font: CGFontRef cg_nullable): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetAscent(font: CGFontRef cg_nullable): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetDescent(font: CGFontRef cg_nullable): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetLeading(font: CGFontRef cg_nullable): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetCapHeight(font: CGFontRef cg_nullable): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetXHeight(font: CGFontRef cg_nullable): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetFontBBox(font: CGFontRef cg_nullable): CGRect; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetItalicAngle(font: CGFontRef cg_nullable): CGFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetStemV(font: CGFontRef cg_nullable): CGFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCopyVariationAxes(font: CGFontRef cg_nullable): CFArrayRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCopyVariations(font: CGFontRef cg_nullable): CFDictionaryRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontGetGlyphAdvances(font: CGFontRef cg_nullable; glyphs: CGGlyphPtr; count: size_t; advances: pcint): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGFontGetGlyphBBoxes(font: CGFontRef cg_nullable; glyphs: CGGlyphPtr; count: size_t; bboxes: CGRectPtr): cbool; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetGlyphWithGlyphName(font: CGFontRef cg_nullable; name: CFStringRef cg_nullable): CGGlyph; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCopyGlyphNameForGlyph(font: CGFontRef cg_nullable; glyph: CGGlyph): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCanCreatePostScriptSubset(font: CGFontRef cg_nullable; format: CGFontPostScriptFormat): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCreatePostScriptSubset(font: CGFontRef cg_nullable; subsetName: CFStringRef cg_nullable; format: CGFontPostScriptFormat; glyphs: CGGlyph* __nullable; count: size_t; encoding: CGGlyphPtr { 6 element array of CGGlyph }): CFDataRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCreatePostScriptEncoding(font: CGFontRef cg_nullable; encoding: CGGlyphPtr { 6 element array of CGGlyph }): CFDataRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCopyTableTags(font: CGFontRef cg_nullable): CFArrayRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCopyTableForTag(font: CGFontRef cg_nullable; tag: cuint32): CFDataRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGFontVariationAxisName: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGFontVariationAxisMinValue: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGFontVariationAxisMaxValue: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGFontVariationAxisDefaultValue: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CGGlyphDeprecatedEnum = cint32;
  CGGlyphDeprecatedEnumPtr = ^CGGlyphDeprecatedEnum;

const
  CGGlyphMin = 0;
  CGGlyphMax = 2;
{$endif}

{$endif}
