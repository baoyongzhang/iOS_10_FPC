{ Parsed from UIKit.framework UIScreenEdgePanGestureRecognizer.h }

{$ifdef TYPES}
type
  UIScreenEdgePanGestureRecognizerPtr = ^UIScreenEdgePanGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UIScreenEdgePanGestureRecognizer = objcclass external (UIPanGestureRecognizer)
  public
    procedure setEdges(newValue: UIRectEdge); message 'setEdges:';
    function edges: UIRectEdge; message 'edges';
  end;
{$endif}

