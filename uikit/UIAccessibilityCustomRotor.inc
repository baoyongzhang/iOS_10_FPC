{ Parsed from UIKit.framework UIAccessibilityCustomRotor.h }

{$ifdef TYPES}
type
  UIAccessibilityCustomRotorSearchPredicatePtr = ^UIAccessibilityCustomRotorSearchPredicate;
  UIAccessibilityCustomRotorPtr = ^UIAccessibilityCustomRotor;
  UIAccessibilityCustomRotorItemResultPtr = ^UIAccessibilityCustomRotorItemResult;
{$endif}

{$ifdef TYPES}
type
  UIAccessibilityCustomRotorDirection = NSInteger;
  UIAccessibilityCustomRotorDirectionPtr = ^UIAccessibilityCustomRotorDirection;

const
  UIAccessibilityCustomRotorDirectionPrevious = 0 { available in 10_0 };
  UIAccessibilityCustomRotorDirectionNext = 1 { available in 10_0 };

type
  UIAccessibilityCustomRotorSearch = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  NSObject_UIAccessibilityCustomRotor = objccategory external name 'UIAccessibilityCustomRotor' (NSObject)
    procedure setAccessibilityCustomRotors(newValue: UIAccessibilityCustomRotor *ProtocolPtr); message 'setAccessibilityCustomRotors:';
    function accessibilityCustomRotors: UIAccessibilityCustomRotor *ProtocolPtr; message 'accessibilityCustomRotors';
  end;


type
  UIAccessibilityCustomRotorSearchPredicate = objcclass external (NSObject)
  public
    procedure setCurrentItem(newValue: UIAccessibilityCustomRotorItemResult); message 'setCurrentItem:';
    function currentItem: UIAccessibilityCustomRotorItemResult; message 'currentItem';
    procedure setSearchDirection(newValue: UIAccessibilityCustomRotorDirection); message 'setSearchDirection:';
    function searchDirection: UIAccessibilityCustomRotorDirection; message 'searchDirection';
  end;

type
  UIAccessibilityCustomRotor = objcclass external (NSObject)
  public
    function initWithName_itemSearchBlock (name: NSString; itemSearchBlock: UIAccessibilityCustomRotorSearch): instancetype; message 'initWithName:itemSearchBlock:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setItemSearchBlock(newValue: UIAccessibilityCustomRotorSearch); message 'setItemSearchBlock:';
    function itemSearchBlock: UIAccessibilityCustomRotorSearch; message 'itemSearchBlock';
  end;

type
  UIAccessibilityCustomRotorItemResult = objcclass external (NSObject)
  public
    function initWithTargetElement_targetRange (targetElement: NSObjectProtocol; targetRange: nullable UITextRangePtr): instancetype; message 'initWithTargetElement:targetRange:';
    procedure setTargetElement(newValue: NSObjectProtocol); message 'setTargetElement:';
    function targetElement: NSObjectProtocol; message 'targetElement';
    procedure setTargetRange(newValue: UITextRange); message 'setTargetRange:';
    function targetRange: UITextRange; message 'targetRange';
  end;
{$endif}

