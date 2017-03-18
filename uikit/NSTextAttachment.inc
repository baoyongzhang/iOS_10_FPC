{ Parsed from UIKit.framework NSTextAttachment.h }

{ Types from NSTextAttachment }
{$ifdef TYPES}

{$endif}


{ Types from NSTextAttachmentContainerProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSTextAttachmentPtr = ^NSTextAttachment;
  NSTextAttachmentContainerProtocolPtr = ^NSTextAttachmentContainerProtocol;
{$endif}

{$ifdef TYPES}
const
  NSAttachmentCharacter = $FFFC { available in 10_0, 7_0 };
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextAttachmentContainerProtocol = objcprotocol external name 'NSTextAttachmentContainer' (NSObjectProtocol)
    {$if defined(__OBJC2__)}
    function imageForBounds_textContainer_characterIndex (imageBounds: CGRect; textContainer: nullable NSTextContainerPtr; charIndex: NSUInteger): nullable UIImagePtr; message 'imageForBounds:textContainer:characterIndex:'; { available in 10_11, 7_0 }
    function attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex (textContainer: nullable NSTextContainerPtr; lineFrag: CGRect; position: CGPoint; charIndex: NSUInteger): CGRect; message 'attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:'; { available in 10_11, 7_0 }
    {$endif}
  end;
{$endif}

{$ifdef CLASSES}

type
  NSTextAttachment = objcclass external (NSObject, NSTextAttachmentContainerProtocol, NSCodingProtocol)
  public
    function initWithData_ofType (contentData: nullable NSDataPtr; uti: nullable NSStringPtr): instancetype; message 'initWithData:ofType:'; { available in 10_11, 7_0 }
    {$if defined(__OBJC2__)}
    procedure setContents(newValue: NSData); message 'setContents:';
    function contents: NSData; message 'contents';
    procedure setFileType(newValue: NSString); message 'setFileType:';
    function fileType: NSString; message 'fileType';
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';
    {$endif}
    procedure setFileWrapper(newValue: NSFileWrapper); message 'setFileWrapper:';
    function fileWrapper: NSFileWrapper; message 'fileWrapper';

    { Adopted protocols }
    function attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex (textContainer: nullable NSTextContainerPtr; lineFrag: CGRect; position: CGPoint; charIndex: NSUInteger): CGRect; message 'attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:'; { available in 10_11, 7_0 }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function imageForBounds_textContainer_characterIndex (imageBounds: CGRect; textContainer: nullable NSTextContainerPtr; charIndex: NSUInteger): nullable UIImagePtr; message 'imageForBounds:textContainer:characterIndex:'; { available in 10_11, 7_0 }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;


type
  NSAttributedStringAttachmentConveniences = objccategory external (NSAttributedString)
    class function attributedStringWithAttachment (attachment: NSTextAttachment): NSAttributedString; message 'attributedStringWithAttachment:'; { available in 10_0, 7_0 }
  end;
{$endif}

