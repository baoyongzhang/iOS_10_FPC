{ Parsed from UIKit.framework UICollectionViewCell.h }

{$ifdef TYPES}
type
  UICollectionReusableViewPtr = ^UICollectionReusableView;
  UICollectionViewCellPtr = ^UICollectionViewCell;
{$endif}

{$ifdef CLASSES}

type
  UICollectionReusableView = objcclass external (UIView)
  public
    function reuseIdentifier: NSString; message 'reuseIdentifier';
    procedure prepareForReuse; message 'prepareForReuse';
    procedure applyLayoutAttributes (layoutAttributes: UICollectionViewLayoutAttributes); message 'applyLayoutAttributes:';
    procedure willTransitionFromLayout_toLayout (oldLayout: UICollectionViewLayout; newLayout: UICollectionViewLayout); message 'willTransitionFromLayout:toLayout:';
    procedure didTransitionFromLayout_toLayout (oldLayout: UICollectionViewLayout; newLayout: UICollectionViewLayout); message 'didTransitionFromLayout:toLayout:';
    function preferredLayoutAttributesFittingAttributes (layoutAttributes: UICollectionViewLayoutAttributes): UICollectionViewLayoutAttributes; message 'preferredLayoutAttributesFittingAttributes:'; { available in 8_0 }
  end;

type
  UICollectionViewCell = objcclass external (UICollectionReusableView)
  public
    function contentView: UIView; message 'contentView';
    procedure setSelected(newValue: boolean); message 'setSelected:';
    function isSelected: boolean; message 'isSelected';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setBackgroundView(newValue: UIView); message 'setBackgroundView:';
    function backgroundView: UIView; message 'backgroundView';
    procedure setSelectedBackgroundView(newValue: UIView); message 'setSelectedBackgroundView:';
    function selectedBackgroundView: UIView; message 'selectedBackgroundView';
  end;
{$endif}

