{ Parsed from CoreGraphics.framework CGContext.h }

{$ifndef CGCONTEXT_H_}
{$ifdef TYPES}
type
  CGPathDrawingMode = cint32;
  CGPathDrawingModePtr = ^CGPathDrawingMode;

const
  kCGPathFill = 0;
  kCGPathEOFill = 1;
  kCGPathStroke = 2;
  kCGPathFillStroke = 3;
  kCGPathEOFillStroke = 4;

type
  CGTextDrawingMode = cint32;
  CGTextDrawingModePtr = ^CGTextDrawingMode;

const
  kCGTextFill = 0;
  kCGTextStroke = 1;
  kCGTextFillStroke = 2;
  kCGTextInvisible = 3;
  kCGTextFillClip = 4;
  kCGTextStrokeClip = 5;
  kCGTextFillStrokeClip = 6;
  kCGTextClip = 7;

type
  CGTextEncoding = cint32;
  CGTextEncodingPtr = ^CGTextEncoding;

const
  kCGEncodingFontSpecific = 0;
  kCGEncodingMacRoman = 1;

type
  CGInterpolationQuality = cint32;
  CGInterpolationQualityPtr = ^CGInterpolationQuality;

const
  kCGInterpolationDefault = 0;
  kCGInterpolationNone = 1;
  kCGInterpolationLow = 2;
  kCGInterpolationMedium = 4;
  kCGInterpolationHigh = 3;

type
  CGBlendMode = cint32;
  CGBlendModePtr = ^CGBlendMode;

const
  kCGBlendModeNormal = 0;
  kCGBlendModeMultiply = 1;
  kCGBlendModeScreen = 2;
  kCGBlendModeOverlay = 3;
  kCGBlendModeDarken = 4;
  kCGBlendModeLighten = 5;
  kCGBlendModeColorDodge = 6;
  kCGBlendModeColorBurn = 7;
  kCGBlendModeSoftLight = 8;
  kCGBlendModeHardLight = 9;
  kCGBlendModeDifference = 10;
  kCGBlendModeExclusion = 11;
  kCGBlendModeHue = 12;
  kCGBlendModeSaturation = 13;
  kCGBlendModeColor = 14;
  kCGBlendModeLuminosity = 15;
  kCGBlendModeClear = 16;
  kCGBlendModeCopy = 17;
  kCGBlendModeSourceIn = 18;
  kCGBlendModeSourceOut = 19;
  kCGBlendModeSourceAtop = 20;
  kCGBlendModeDestinationOver = 21;
  kCGBlendModeDestinationIn = 22;
  kCGBlendModeDestinationOut = 23;
  kCGBlendModeDestinationAtop = 24;
  kCGBlendModeXOR = 25;
  kCGBlendModePlusDarker = 26;
  kCGBlendModePlusLighter = 27;
{$endif}

{$ifdef FUNCTIONS}
function CGContextGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextSaveGState(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextRestoreGState(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextScaleCTM(c: CGContextRef cg_nullable; sx: CGFloat; sy: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextTranslateCTM(c: CGContextRef cg_nullable; tx: CGFloat; ty: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextRotateCTM(c: CGContextRef cg_nullable; angle: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextConcatCTM(c: CGContextRef cg_nullable; transform: CGAffineTransform); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetCTM(c: CGContextRef cg_nullable): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetLineWidth(c: CGContextRef cg_nullable; width: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetLineCap(c: CGContextRef cg_nullable; cap: CGLineCap); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetLineJoin(c: CGContextRef cg_nullable; join: CGLineJoin); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetMiterLimit(c: CGContextRef cg_nullable; limit: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetLineDash(c: CGContextRef cg_nullable; phase: CGFloat; lengths: CGFloat* __nullable; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFlatness(c: CGContextRef cg_nullable; flatness: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetAlpha(c: CGContextRef cg_nullable; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetBlendMode(c: CGContextRef cg_nullable; mode: CGBlendMode); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextBeginPath(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextMoveToPoint(c: CGContextRef cg_nullable; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddLineToPoint(c: CGContextRef cg_nullable; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddCurveToPoint(c: CGContextRef cg_nullable; cp1x: CGFloat; cp1y: CGFloat; cp2x: CGFloat; cp2y: CGFloat; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddQuadCurveToPoint(c: CGContextRef cg_nullable; cpx: CGFloat; cpy: CGFloat; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextClosePath(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddRect(c: CGContextRef cg_nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddRects(c: CGContextRef cg_nullable; rects: CGRect* __nullable; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddLines(c: CGContextRef cg_nullable; points: CGPoint* __nullable; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddEllipseInRect(c: CGContextRef cg_nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextAddArc(c: CGContextRef cg_nullable; x: CGFloat; y: CGFloat; radius: CGFloat; startAngle: CGFloat; endAngle: CGFloat; clockwise: cint); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddArcToPoint(c: CGContextRef cg_nullable; x1: CGFloat; y1: CGFloat; x2: CGFloat; y2: CGFloat; radius: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddPath(c: CGContextRef cg_nullable; path: CGPathRef cg_nullable); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextReplacePathWithStrokedPath(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextIsPathEmpty(c: CGContextRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetPathCurrentPoint(c: CGContextRef cg_nullable): CGPoint; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetPathBoundingBox(c: CGContextRef cg_nullable): CGRect; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextCopyPath(c: CGContextRef cg_nullable): CGPathRef __nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGContextPathContainsPoint(c: CGContextRef cg_nullable; point: CGPoint; mode: CGPathDrawingMode): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextDrawPath(c: CGContextRef cg_nullable; mode: CGPathDrawingMode); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFillPath(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextEOFillPath(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextStrokePath(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFillRect(c: CGContextRef cg_nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFillRects(c: CGContextRef cg_nullable; rects: CGRect* __nullable; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextStrokeRect(c: CGContextRef cg_nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextStrokeRectWithWidth(c: CGContextRef cg_nullable; rect: CGRect; width: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextClearRect(c: CGContextRef cg_nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFillEllipseInRect(c: CGContextRef cg_nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextStrokeEllipseInRect(c: CGContextRef cg_nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextStrokeLineSegments(c: CGContextRef cg_nullable; points: CGPoint* __nullable; count: size_t); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextClip(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextEOClip(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextClipToMask(c: CGContextRef cg_nullable; rect: CGRect; mask: CGImageRef cg_nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextGetClipBoundingBox(c: CGContextRef cg_nullable): CGRect; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextClipToRect(c: CGContextRef cg_nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextClipToRects(c: CGContextRef cg_nullable; rects: CGRectPtr; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFillColorWithColor(c: CGContextRef cg_nullable; color: CGColorRef cg_nullable); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextSetStrokeColorWithColor(c: CGContextRef cg_nullable; color: CGColorRef cg_nullable); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextSetFillColorSpace(c: CGContextRef cg_nullable; space: CGColorSpaceRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetStrokeColorSpace(c: CGContextRef cg_nullable; space: CGColorSpaceRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFillColor(c: CGContextRef cg_nullable; components: CGFloat* cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetStrokeColor(c: CGContextRef cg_nullable; components: CGFloat* cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFillPattern(c: CGContextRef cg_nullable; pattern: CGPatternRef cg_nullable; components: CGFloat* cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetStrokePattern(c: CGContextRef cg_nullable; pattern: CGPatternRef cg_nullable; components: CGFloat* cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetPatternPhase(c: CGContextRef cg_nullable; phase: CGSize); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetGrayFillColor(c: CGContextRef cg_nullable; gray: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetGrayStrokeColor(c: CGContextRef cg_nullable; gray: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetRGBFillColor(c: CGContextRef cg_nullable; red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetRGBStrokeColor(c: CGContextRef cg_nullable; red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetCMYKFillColor(c: CGContextRef cg_nullable; cyan: CGFloat; magenta: CGFloat; yellow: CGFloat; black: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetCMYKStrokeColor(c: CGContextRef cg_nullable; cyan: CGFloat; magenta: CGFloat; yellow: CGFloat; black: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetRenderingIntent(c: CGContextRef cg_nullable; intent: CGColorRenderingIntent); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextDrawImage(c: CGContextRef cg_nullable; rect: CGRect; image: CGImageRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextDrawTiledImage(c: CGContextRef cg_nullable; rect: CGRect; image: CGImageRef cg_nullable); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGContextGetInterpolationQuality(c: CGContextRef cg_nullable): CGInterpolationQuality; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetInterpolationQuality(c: CGContextRef cg_nullable; quality: CGInterpolationQuality); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetShadowWithColor(c: CGContextRef cg_nullable; offset: CGSize; blur: CGFloat; color: CGColorRef __nullable); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextSetShadow(c: CGContextRef cg_nullable; offset: CGSize; blur: CGFloat); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextDrawLinearGradient(c: CGContextRef cg_nullable; gradient: CGGradientRef cg_nullable; startPoint: CGPoint; endPoint: CGPoint; options: CGGradientDrawingOptions); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextDrawRadialGradient(c: CGContextRef cg_nullable; gradient: CGGradientRef cg_nullable; startCenter: CGPoint; startRadius: CGFloat; endCenter: CGPoint; endRadius: CGFloat; options: CGGradientDrawingOptions); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextDrawShading(c: CGContextRef cg_nullable; shading: cg_nullable CGShadingRef); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextSetCharacterSpacing(c: CGContextRef cg_nullable; spacing: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetTextPosition(c: CGContextRef cg_nullable; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetTextPosition(c: CGContextRef cg_nullable): CGPoint; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetTextMatrix(c: CGContextRef cg_nullable; t: CGAffineTransform); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetTextMatrix(c: CGContextRef cg_nullable): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetTextDrawingMode(c: CGContextRef cg_nullable; mode: CGTextDrawingMode); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFont(c: CGContextRef cg_nullable; font: CGFontRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFontSize(c: CGContextRef cg_nullable; size: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextShowGlyphsAtPositions(c: CGContextRef cg_nullable; glyphs: CGGlyph* cg_nullable; Lpositions: CGPoint* cg_nullable; count: size_t); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextDrawPDFPage(c: CGContextRef cg_nullable; page: CGPDFPageRef cg_nullable); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextBeginPage(c: CGContextRef cg_nullable; mediaBox: CGRect* __nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextEndPage(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextRetain(c: CGContextRef cg_nullable): CGContextRef cg_nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextRelease(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFlush(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSynchronize(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetShouldAntialias(c: CGContextRef cg_nullable; shouldAntialias: cbool); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetAllowsAntialiasing(c: CGContextRef cg_nullable; allowsAntialiasing: cbool); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextSetShouldSmoothFonts(c: CGContextRef cg_nullable; shouldSmoothFonts: cbool); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextSetAllowsFontSmoothing(c: CGContextRef cg_nullable; allowsFontSmoothing: cbool); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextSetShouldSubpixelPositionFonts(c: CGContextRef cg_nullable; shouldSubpixelPositionFonts: cbool); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextSetAllowsFontSubpixelPositioning(c: CGContextRef cg_nullable; allowsFontSubpixelPositioning: cbool); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextSetShouldSubpixelQuantizeFonts(c: CGContextRef cg_nullable; shouldSubpixelQuantizeFonts: cbool); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextSetAllowsFontSubpixelQuantization(c: CGContextRef cg_nullable; allowsFontSubpixelQuantization: cbool); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextBeginTransparencyLayer(c: CGContextRef cg_nullable; auxiliaryInfo: CFDictionaryRef __nullable); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextBeginTransparencyLayerWithRect(c: CGContextRef cg_nullable; rect: CGRect; auxInfo: CFDictionaryRef __nullable); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextEndTransparencyLayer(c: CGContextRef cg_nullable); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGContextGetUserSpaceToDeviceSpaceTransform(c: CGContextRef cg_nullable): CGAffineTransform; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertPointToDeviceSpace(c: CGContextRef cg_nullable; point: CGPoint): CGPoint; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertPointToUserSpace(c: CGContextRef cg_nullable; point: CGPoint): CGPoint; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertSizeToDeviceSpace(c: CGContextRef cg_nullable; size: CGSize): CGSize; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertSizeToUserSpace(c: CGContextRef cg_nullable; size: CGSize): CGSize; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertRectToDeviceSpace(c: CGContextRef cg_nullable; rect: CGRect): CGRect; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertRectToUserSpace(c: CGContextRef cg_nullable; rect: CGRect): CGRect; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextSelectFont(c: CGContextRef cg_nullable; name: char* cg_nullable; size: CGFloat; textEncoding: CGTextEncoding); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,                                __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowText(c: CGContextRef cg_nullable; string_: char* cg_nullable; length: size_t); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,                                __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowTextAtPoint(c: CGContextRef cg_nullable; x: CGFloat; y: CGFloat; string_: char* cg_nullable; length: size_t); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,                                __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowGlyphs(c: CGContextRef cg_nullable; g: CGGlyph* __nullable; count: size_t); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,                                __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowGlyphsAtPoint(c: CGContextRef cg_nullable; x: CGFloat; y: CGFloat; glyphs: CGGlyph* __nullable; count: size_t); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,                                __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowGlyphsWithAdvances(c: CGContextRef cg_nullable; glyphs: CGGlyph* __nullable; advances: CGSize* __nullable; count: size_t); cdecl; external; deprecated 'in __MAC_10_3, __MAC_10_9,                                __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextDrawPDFDocument(c: CGContextRef cg_nullable; rect: CGRect; document: CGPDFDocumentRef cg_nullable; page: cint); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,                                __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}
