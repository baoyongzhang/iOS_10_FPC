{ Parsed from PhotosUI.framework PHLivePhotoView.h }

{$ifdef TYPES}
type
  PHLivePhotoViewPtr = ^PHLivePhotoView;
  PHLivePhotoViewDelegateProtocolPtr = ^PHLivePhotoViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  PHLivePhotoBadgeOptions = NSUInteger;
  PHLivePhotoBadgeOptionsPtr = ^PHLivePhotoBadgeOptions;

const
  PHLivePhotoBadgeOptionsOverContent = 1 shl 0;
  PHLivePhotoBadgeOptionsLiveOff = 1 shl 1;

type
  PHLivePhotoViewPlaybackStyle = NSInteger;
  PHLivePhotoViewPlaybackStylePtr = ^PHLivePhotoViewPlaybackStyle;

const
  PHLivePhotoViewPlaybackStyleUndefined = 0;
  PHLivePhotoViewPlaybackStyleFull = 1;
  PHLivePhotoViewPlaybackStyleHint = 2;
{$endif}

{$ifdef CLASSES}

type
  PHLivePhotoView = objcclass external (UIView)
  public
    class function livePhotoBadgeImageWithOptions (badgeOptions: PHLivePhotoBadgeOptions): UIImage; message 'livePhotoBadgeImageWithOptions:';
    procedure setDelegate(newValue: PHLivePhotoViewDelegateProtocol); message 'setDelegate:';
    function delegate: PHLivePhotoViewDelegateProtocol; message 'delegate';
    procedure setLivePhoto(newValue: PHLivePhoto); message 'setLivePhoto:';
    function livePhoto: PHLivePhoto; message 'livePhoto';
    procedure setMuted(newValue: boolean); message 'setMuted:';
    function isMuted: boolean; message 'isMuted';
    function playbackGestureRecognizer: UIGestureRecognizer; message 'playbackGestureRecognizer';
    procedure startPlaybackWithStyle (playbackStyle: PHLivePhotoViewPlaybackStyle); message 'startPlaybackWithStyle:';
    procedure stopPlayback; message 'stopPlayback';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  PHLivePhotoViewDelegateProtocol = objcprotocol external name 'PHLivePhotoViewDelegate' (NSObjectProtocol)
  optional
    procedure livePhotoView_willBeginPlaybackWithStyle (livePhotoView: PHLivePhotoView; playbackStyle: PHLivePhotoViewPlaybackStyle); message 'livePhotoView:willBeginPlaybackWithStyle:';
    procedure livePhotoView_didEndPlaybackWithStyle (livePhotoView: PHLivePhotoView; playbackStyle: PHLivePhotoViewPlaybackStyle); message 'livePhotoView:didEndPlaybackWithStyle:';
  end;
{$endif}

