{ Parsed from UIKit.framework UILexicon.h }

{$ifdef TYPES}
type
  UILexiconEntryPtr = ^UILexiconEntry;
  UILexiconPtr = ^UILexicon;
{$endif}

{$ifdef CLASSES}

type
  UILexiconEntry = objcclass external (NSObject, NSCopyingProtocol)
  public
    function documentText: NSString; message 'documentText';
    function userInput: NSString; message 'userInput';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  UILexicon = objcclass external (NSObject, NSCopyingProtocol)
  public
    function entries: UILexiconEntry *ProtocolPtr; message 'entries';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

