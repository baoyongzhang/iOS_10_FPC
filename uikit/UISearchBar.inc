{ Parsed from UIKit.framework UISearchBar.h }

{$ifdef TYPES}
type
  UISearchBarPtr = ^UISearchBar;
  UISearchBarDelegateProtocolPtr = ^UISearchBarDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UISearchBarIcon = NSInteger;
  UISearchBarIconPtr = ^UISearchBarIcon;

const
  UISearchBarIconSearch = 0;
  UISearchBarIconClear = 1;
  __TVOS_PROHIBITED = 2;
  UISearchBarIconBookmark = 3;
  __TVOS_PROHIBITED = 4;
  UISearchBarIconResultsList = 5;
  __TVOS_PROHIBITED = 6;

type
  UISearchBarStyle = NSUInteger;
  UISearchBarStylePtr = ^UISearchBarStyle;

const
  UISearchBarStyleDefault = 0;
  UISearchBarStyleProminent = 1;
  UISearchBarStyleMinimal = 2;
{$endif}

{$ifdef CLASSES}

type
  UISearchBar = objcclass external (UIView, UIBarPositioningProtocol, UITextInputTraitsProtocol)
  public
    function init __TVOS_PROHIBITED: instancetype; message 'init __TVOS_PROHIBITED';
    function initWithFrame (frame: CGRect): instancetype; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure set__TVOS_PROHIBITED(newValue: UIBarStyle barStyle); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIBarStyle barStyle; message 'TVOS_PROHIBITED';
    procedure setDelegate(newValue: UISearchBarDelegateProtocol); message 'setDelegate:';
    function delegate: UISearchBarDelegateProtocol; message 'delegate';
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setPrompt(newValue: NSString); message 'setPrompt:';
    function prompt: NSString; message 'prompt';
    procedure setPlaceholder(newValue: NSString); message 'setPlaceholder:';
    function placeholder: NSString; message 'placeholder';
    procedure set__TVOS_PROHIBITED_(newValue: BOOL showsBookmarkButton); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: BOOL showsBookmarkButton; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: BOOL showsCancelButton); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: BOOL showsCancelButton; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED___(newValue: BOOL showsSearchResultsButton); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___: BOOL showsSearchResultsButton; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED____(newValue: BOOL searchResultsButtonSelected); message 'set__TVOS_PROHIBITED:';
    function isSearchResultsButtonSelected: BOOL searchResultsButtonSelected; message 'isSearchResultsButtonSelected';
    procedure setShowsCancelButton_animated (showsCancelButton: boolean; animated: boolean); message 'setShowsCancelButton:animated:'; { available in 3_0 }
    function __WATCHOS_PROHIBITED_: UITextInputAssistantItem *inputAssistantItem __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBarTintColor(newValue: UIColor); message 'setBarTintColor:';
    function barTintColor: UIColor; message 'barTintColor';
    procedure setSearchBarStyle(newValue: UISearchBarStyle); message 'setSearchBarStyle:';
    function searchBarStyle: UISearchBarStyle; message 'searchBarStyle';
    procedure setTranslucent(newValue: boolean); message 'setTranslucent:';
    function isTranslucent: boolean; message 'isTranslucent';
    procedure setScopeButtonTitles(newValue: NSString *ProtocolPtr); message 'setScopeButtonTitles:';
    function scopeButtonTitles: NSString *ProtocolPtr; message 'scopeButtonTitles';
    procedure setSelectedScopeButtonIndex(newValue: NSInteger); message 'setSelectedScopeButtonIndex:';
    function selectedScopeButtonIndex: NSInteger; message 'selectedScopeButtonIndex';
    procedure setShowsScopeBar(newValue: boolean); message 'setShowsScopeBar:';
    function showsScopeBar: boolean; message 'showsScopeBar';
    procedure setInputAccessoryView(newValue: UIView); message 'setInputAccessoryView:';
    function inputAccessoryView: UIView; message 'inputAccessoryView';
    procedure setBackgroundImage(newValue: UIImage); message 'setBackgroundImage:';
    function backgroundImage: UIImage; message 'backgroundImage';
    procedure setScopeBarBackgroundImage(newValue: UIImage); message 'setScopeBarBackgroundImage:';
    function scopeBarBackgroundImage: UIImage; message 'scopeBarBackgroundImage';
    procedure setBackgroundImage_forBarPosition_barMetrics (backgroundImage_: nullable UIImagePtr; barPosition: UIBarPosition; barMetrics: UIBarMetrics); message 'setBackgroundImage:forBarPosition:barMetrics:'; { available in 7_0 }
    function backgroundImageForBarPosition_barMetrics (barPosition: UIBarPosition; barMetrics: UIBarMetrics): nullable UIImagePtr; message 'backgroundImageForBarPosition:barMetrics:'; { available in 7_0 }
    procedure setSearchFieldBackgroundImage_forState (backgroundImage_: nullable UIImagePtr; state: UIControlState); message 'setSearchFieldBackgroundImage:forState:'; { available in 5_0 }
    function searchFieldBackgroundImageForState (state: UIControlState): nullable UIImagePtr; message 'searchFieldBackgroundImageForState:'; { available in 5_0 }
    procedure setImage_forSearchBarIcon_state (iconImage: nullable UIImagePtr; icon: UISearchBarIcon; state: UIControlState); message 'setImage:forSearchBarIcon:state:'; { available in 5_0 }
    function imageForSearchBarIcon_state (icon: UISearchBarIcon; state: UIControlState): nullable UIImagePtr; message 'imageForSearchBarIcon:state:'; { available in 5_0 }
    procedure setScopeBarButtonBackgroundImage_forState (backgroundImage_: nullable UIImagePtr; state: UIControlState); message 'setScopeBarButtonBackgroundImage:forState:'; { available in 5_0 }
    function scopeBarButtonBackgroundImageForState (state: UIControlState): nullable UIImagePtr; message 'scopeBarButtonBackgroundImageForState:'; { available in 5_0 }
    procedure setScopeBarButtonDividerImage_forLeftSegmentState_rightSegmentState (dividerImage: nullable UIImagePtr; leftState: UIControlState; rightState: UIControlState); message 'setScopeBarButtonDividerImage:forLeftSegmentState:rightSegmentState:'; { available in 5_0 }
    function scopeBarButtonDividerImageForLeftSegmentState_rightSegmentState (leftState: UIControlState; rightState: UIControlState): nullable UIImagePtr; message 'scopeBarButtonDividerImageForLeftSegmentState:rightSegmentState:'; { available in 5_0 }
    procedure setScopeBarButtonTitleTextAttributes_forState (attributes: nullable NSDictionaryPtr; state: UIControlState); message 'setScopeBarButtonTitleTextAttributes:forState:'; { available in 5_0 }
    function scopeBarButtonTitleTextAttributesForState (state: UIControlState): nullable NSDictionaryPtr; message 'scopeBarButtonTitleTextAttributesForState:'; { available in 5_0 }
    procedure setSearchFieldBackgroundPositionAdjustment(newValue: UIOffset); message 'setSearchFieldBackgroundPositionAdjustment:';
    function searchFieldBackgroundPositionAdjustment: UIOffset; message 'searchFieldBackgroundPositionAdjustment';
    procedure setSearchTextPositionAdjustment(newValue: UIOffset); message 'setSearchTextPositionAdjustment:';
    function searchTextPositionAdjustment: UIOffset; message 'searchTextPositionAdjustment';
    procedure setPositionAdjustment_forSearchBarIcon (adjustment: UIOffset; icon: UISearchBarIcon); message 'setPositionAdjustment:forSearchBarIcon:'; { available in 5_0 }
    function positionAdjustmentForSearchBarIcon (icon: UISearchBarIcon): UIOffset; message 'positionAdjustmentForSearchBarIcon:'; { available in 5_0 }

    { Adopted protocols }
    procedure setAutocapitalizationType(newValue: UITextAutocapitalizationType); message 'setAutocapitalizationType:';
    function autocapitalizationType: UITextAutocapitalizationType; message 'autocapitalizationType';
    procedure setAutocorrectionType(newValue: UITextAutocorrectionType); message 'setAutocorrectionType:';
    function autocorrectionType: UITextAutocorrectionType; message 'autocorrectionType';
    function barPosition: UIBarPosition; message 'barPosition';
    procedure setEnablesReturnKeyAutomatically(newValue: boolean); message 'setEnablesReturnKeyAutomatically:';
    function enablesReturnKeyAutomatically: boolean; message 'enablesReturnKeyAutomatically';
    procedure setKeyboardAppearance(newValue: UIKeyboardAppearance); message 'setKeyboardAppearance:';
    function keyboardAppearance: UIKeyboardAppearance; message 'keyboardAppearance';
    procedure setKeyboardType(newValue: UIKeyboardType); message 'setKeyboardType:';
    function keyboardType: UIKeyboardType; message 'keyboardType';
    procedure setReturnKeyType(newValue: UIReturnKeyType); message 'setReturnKeyType:';
    function returnKeyType: UIReturnKeyType; message 'returnKeyType';
    procedure setSecureTextEntry(newValue: boolean); message 'setSecureTextEntry:';
    function isSecureTextEntry: boolean; message 'isSecureTextEntry';
    procedure setSpellCheckingType(newValue: UITextSpellCheckingType); message 'setSpellCheckingType:';
    function spellCheckingType: UITextSpellCheckingType; message 'spellCheckingType';
    procedure setTextContentType(newValue: UITextContentType); message 'setTextContentType:';
    function textContentType: UITextContentType; message 'textContentType';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UISearchBarDelegateProtocol = objcprotocol external name 'UISearchBarDelegate' (UIBarPositioningDelegateProtocol)
  optional
    function searchBarShouldBeginEditing (searchBar: UISearchBar): boolean; message 'searchBarShouldBeginEditing:';
    procedure searchBarTextDidBeginEditing (searchBar: UISearchBar); message 'searchBarTextDidBeginEditing:';
    function searchBarShouldEndEditing (searchBar: UISearchBar): boolean; message 'searchBarShouldEndEditing:';
    procedure searchBarTextDidEndEditing (searchBar: UISearchBar); message 'searchBarTextDidEndEditing:';
    procedure searchBar_textDidChange (searchBar: UISearchBar; searchText: NSString); message 'searchBar:textDidChange:';
    function searchBar_shouldChangeTextInRange_replacementText (searchBar: UISearchBar; range: NSRange; text: NSString): boolean; message 'searchBar:shouldChangeTextInRange:replacementText:'; { available in 3_0 }
    procedure searchBarSearchButtonClicked (searchBar: UISearchBar); message 'searchBarSearchButtonClicked:';
    procedure searchBarBookmarkButtonClicked (searchBar: UISearchBar); message 'searchBarBookmarkButtonClicked:';
    procedure searchBarCancelButtonClicked (searchBar: UISearchBar); message 'searchBarCancelButtonClicked:';
    procedure searchBarResultsListButtonClicked (searchBar: UISearchBar); message 'searchBarResultsListButtonClicked:'; { available in 3_2 }
    procedure searchBar_selectedScopeButtonIndexDidChange (searchBar: UISearchBar; selectedScope: NSInteger); message 'searchBar:selectedScopeButtonIndexDidChange:'; { available in 3_0 }
  end;
{$endif}

