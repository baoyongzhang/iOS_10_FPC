{ Parsed from MapKit.framework MKAnnotationView.h }

{ Types from MKAnnotationView }
{$ifdef TYPES}






{$endif}


{$ifdef TYPES}
type
  MKAnnotationViewPtr = ^MKAnnotationView;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKAnnotationCalloutInfoDidChangeNotification: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MKAnnotationViewDragState = NSUInteger;
  MKAnnotationViewDragStatePtr = ^MKAnnotationViewDragState;

const
  MKAnnotationViewDragStateNone = 0;
  MKAnnotationViewDragStateStarting = 1;
  MKAnnotationViewDragStateDragging = 2;
  MKAnnotationViewDragStateCanceling = 3;
  MKAnnotationViewDragStateEnding = 4;
{$endif}

{$ifdef CLASSES}

type
  MKAnnotationView = objcclass external (UIView)
  public
    function initWithAnnotation_reuseIdentifier (annotation: nullable MKAnnotationProtocol; reuseIdentifier: nullable NSStringPtr): instancetype; message 'initWithAnnotation:reuseIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function reuseIdentifier: NSString; message 'reuseIdentifier';
    procedure prepareForReuse; message 'prepareForReuse';
    procedure setAnnotation(newValue: MKAnnotationProtocol); message 'setAnnotation:';
    function annotation: MKAnnotationProtocol; message 'annotation';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    {$else}
    procedure setImage_(newValue: NSImage); message 'setImage:';
    function image_: NSImage; message 'image';
    {$endif}
    procedure setCenterOffset(newValue: CGPoint); message 'setCenterOffset:';
    function centerOffset: CGPoint; message 'centerOffset';
    procedure setCalloutOffset(newValue: CGPoint); message 'setCalloutOffset:';
    function calloutOffset: CGPoint; message 'calloutOffset';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setLeftCalloutOffset(newValue: CGPoint); message 'setLeftCalloutOffset:';
    function leftCalloutOffset: CGPoint; message 'leftCalloutOffset';
    procedure setRightCalloutOffset(newValue: CGPoint); message 'setRightCalloutOffset:';
    function rightCalloutOffset: CGPoint; message 'rightCalloutOffset';
    {$endif}
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setSelected(newValue: boolean); message 'setSelected:';
    function isSelected: boolean; message 'isSelected';
    procedure setSelected_animated (selected: boolean; animated: boolean); message 'setSelected:animated:';
    procedure setCanShowCallout(newValue: boolean); message 'setCanShowCallout:';
    function canShowCallout: boolean; message 'canShowCallout';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setLeftCalloutAccessoryView(newValue: UIView); message 'setLeftCalloutAccessoryView:';
    function leftCalloutAccessoryView: UIView; message 'leftCalloutAccessoryView';
    {$else}
    procedure setLeftCalloutAccessoryView_(newValue: NSViewPtr); message 'setLeftCalloutAccessoryView:';
    function leftCalloutAccessoryView_: NSViewPtr; message 'leftCalloutAccessoryView';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setRightCalloutAccessoryView(newValue: UIView); message 'setRightCalloutAccessoryView:';
    function rightCalloutAccessoryView: UIView; message 'rightCalloutAccessoryView';
    {$else}
    procedure setRightCalloutAccessoryView_(newValue: NSViewPtr); message 'setRightCalloutAccessoryView:';
    function rightCalloutAccessoryView_: NSViewPtr; message 'rightCalloutAccessoryView';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setDetailCalloutAccessoryView(newValue: UIView); message 'setDetailCalloutAccessoryView:';
    function detailCalloutAccessoryView: UIView; message 'detailCalloutAccessoryView';
    {$else}
    procedure setDetailCalloutAccessoryView_(newValue: NSViewPtr); message 'setDetailCalloutAccessoryView:';
    function detailCalloutAccessoryView_: NSViewPtr; message 'detailCalloutAccessoryView';
    {$endif}
    procedure set__TVOS_PROHIBITED(newValue: BOOL draggable); message 'set__TVOS_PROHIBITED:';
    function isDraggable: BOOL draggable; message 'isDraggable';
    procedure set__TVOS_PROHIBITED_(newValue: MKAnnotationViewDragState dragState); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: MKAnnotationViewDragState dragState; message 'TVOS_PROHIBITED';
    procedure setDragState_animated (newDragState: MKAnnotationViewDragState; animated: boolean); message 'setDragState:animated:'; { available in 10_9, 4_2 }
  end;
{$endif}

