{ Parsed from UIKit.framework UIPickerView.h }

{$ifdef TYPES}
type
  UIPickerViewPtr = ^UIPickerView;
  UIPickerViewDataSourceProtocolPtr = ^UIPickerViewDataSourceProtocol;
  UIPickerViewDelegateProtocolPtr = ^UIPickerViewDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIPickerView = objcclass external (UIView, NSCodingProtocol)
  public
    procedure setDataSource(newValue: UIPickerViewDataSourceProtocol); message 'setDataSource:';
    function dataSource: UIPickerViewDataSourceProtocol; message 'dataSource';
    procedure setDelegate(newValue: UIPickerViewDelegateProtocol); message 'setDelegate:';
    function delegate: UIPickerViewDelegateProtocol; message 'delegate';
    procedure setShowsSelectionIndicator(newValue: boolean); message 'setShowsSelectionIndicator:';
    function showsSelectionIndicator: boolean; message 'showsSelectionIndicator';
    function numberOfComponents: NSInteger; message 'numberOfComponents';
    function numberOfRowsInComponent (component: NSInteger): NSInteger; message 'numberOfRowsInComponent:';
    function rowSizeForComponent (component: NSInteger): CGSize; message 'rowSizeForComponent:';
    function viewForRow_forComponent (row: NSInteger; component: NSInteger): nullable UIViewPtr; message 'viewForRow:forComponent:';
    procedure reloadAllComponents; message 'reloadAllComponents';
    procedure reloadComponent (component: NSInteger); message 'reloadComponent:';
    procedure selectRow_inComponent_animated (row: NSInteger; component: NSInteger; animated: boolean); message 'selectRow:inComponent:animated:';
    function selectedRowInComponent (component: NSInteger): NSInteger; message 'selectedRowInComponent:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPickerViewDataSourceProtocol = objcprotocol external name 'UIPickerViewDataSource' (NSObjectProtocol)
  required
    function numberOfComponentsInPickerView (pickerView: UIPickerView): NSInteger; message 'numberOfComponentsInPickerView:';
    function pickerView_numberOfRowsInComponent (pickerView: UIPickerView; component: NSInteger): NSInteger; message 'pickerView:numberOfRowsInComponent:';
  end;

type
  UIPickerViewDelegateProtocol = objcprotocol external name 'UIPickerViewDelegate' (NSObjectProtocol)
  optional
    function pickerView_widthForComponent (pickerView: UIPickerView; component: NSInteger): CGFloat; message 'pickerView:widthForComponent:';
    function pickerView_rowHeightForComponent (pickerView: UIPickerView; component: NSInteger): CGFloat; message 'pickerView:rowHeightForComponent:';
    function pickerView_titleForRow_forComponent (pickerView: UIPickerView; row: NSInteger; component: NSInteger): NSStringPtr; message 'pickerView:titleForRow:forComponent:';
    function pickerView_attributedTitleForRow_forComponent (pickerView: UIPickerView; row: NSInteger; component: NSInteger): NSAttributedStringPtr; message 'pickerView:attributedTitleForRow:forComponent:'; { available in 6_0 }
    function pickerView_viewForRow_forComponent_reusingView (pickerView: UIPickerView; row: NSInteger; component: NSInteger; view: UIViewPtr): UIView; message 'pickerView:viewForRow:forComponent:reusingView:';
    procedure pickerView_didSelectRow_inComponent (pickerView: UIPickerView; row: NSInteger; component: NSInteger); message 'pickerView:didSelectRow:inComponent:';
  end;
{$endif}

