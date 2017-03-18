{ Parsed from AssetsLibrary.framework ALAssetsFilter.h }

{$ifdef TYPES}
type
  ALAssetsFilterPtr = ^ALAssetsFilter;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef CLASSES}

type
  ALAssetsFilter = objcclass external (NSObject)
  private
    _internal: id;
  public
    class function allPhotos: ALAssetsFilter; message 'allPhotos';
    class function allVideos: ALAssetsFilter; message 'allVideos';
    class function allAssets: ALAssetsFilter; message 'allAssets';
  end;
{$endif}

{$endif}
