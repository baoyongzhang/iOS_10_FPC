{ Parsed from UIKit.framework UISearchDisplayController.h }

{$ifdef TYPES}
type
  UISearchDisplayControllerPtr = ^UISearchDisplayController;
  UISearchDisplayDelegateProtocolPtr = ^UISearchDisplayDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UISearchDisplayController = objcclass external (NSObject)
  public
    function initWithSearchBar_contentsController (searchBar: UISearchBar; viewController: UIViewController): instancetype; message 'initWithSearchBar:contentsController:';
    procedure setDelegate(newValue: UISearchDisplayDelegateProtocol); message 'setDelegate:';
    function delegate: UISearchDisplayDelegateProtocol; message 'delegate';
    procedure setActive(newValue: boolean); message 'setActive:';
    function isActive: boolean; message 'isActive';
    procedure setActive_animated (visible: boolean; animated: boolean); message 'setActive:animated:';
    function searchBar: UISearchBar; message 'searchBar';
    function searchContentsController: UIViewController; message 'searchContentsController';
    function searchResultsTableView: UITableView; message 'searchResultsTableView';
    procedure setSearchResultsDataSource(newValue: UITableViewDataSourceProtocol); message 'setSearchResultsDataSource:';
    function searchResultsDataSource: UITableViewDataSourceProtocol; message 'searchResultsDataSource';
    procedure setSearchResultsDelegate(newValue: UITableViewDelegateProtocol); message 'setSearchResultsDelegate:';
    function searchResultsDelegate: UITableViewDelegateProtocol; message 'searchResultsDelegate';
    procedure setSearchResultsTitle(newValue: NSString); message 'setSearchResultsTitle:';
    function searchResultsTitle: NSString; message 'searchResultsTitle';
    procedure setDisplaysSearchBarInNavigationBar(newValue: boolean); message 'setDisplaysSearchBarInNavigationBar:';
    function displaysSearchBarInNavigationBar: boolean; message 'displaysSearchBarInNavigationBar';
    function navigationItem: UINavigationItem; message 'navigationItem';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UISearchDisplayDelegateProtocol = objcprotocol external name 'UISearchDisplayDelegate' (NSObjectProtocol)
  optional
    procedure searchDisplayControllerWillBeginSearch (controller: UISearchDisplayController); message 'searchDisplayControllerWillBeginSearch:'; deprecated 'in 3_0,8_0';
    procedure searchDisplayControllerDidBeginSearch (controller: UISearchDisplayController); message 'searchDisplayControllerDidBeginSearch:'; deprecated 'in 3_0,8_0';
    procedure searchDisplayControllerWillEndSearch (controller: UISearchDisplayController); message 'searchDisplayControllerWillEndSearch:'; deprecated 'in 3_0,8_0';
    procedure searchDisplayControllerDidEndSearch (controller: UISearchDisplayController); message 'searchDisplayControllerDidEndSearch:'; deprecated 'in 3_0,8_0';
    procedure searchDisplayController_didLoadSearchResultsTableView (controller: UISearchDisplayController; tableView: UITableView); message 'searchDisplayController:didLoadSearchResultsTableView:'; deprecated 'in 3_0,8_0';
    procedure searchDisplayController_willUnloadSearchResultsTableView (controller: UISearchDisplayController; tableView: UITableView); message 'searchDisplayController:willUnloadSearchResultsTableView:'; deprecated 'in 3_0,8_0';
    procedure searchDisplayController_willShowSearchResultsTableView (controller: UISearchDisplayController; tableView: UITableView); message 'searchDisplayController:willShowSearchResultsTableView:'; deprecated 'in 3_0,8_0';
    procedure searchDisplayController_didShowSearchResultsTableView (controller: UISearchDisplayController; tableView: UITableView); message 'searchDisplayController:didShowSearchResultsTableView:'; deprecated 'in 3_0,8_0';
    procedure searchDisplayController_willHideSearchResultsTableView (controller: UISearchDisplayController; tableView: UITableView); message 'searchDisplayController:willHideSearchResultsTableView:'; deprecated 'in 3_0,8_0';
    procedure searchDisplayController_didHideSearchResultsTableView (controller: UISearchDisplayController; tableView: UITableView); message 'searchDisplayController:didHideSearchResultsTableView:'; deprecated 'in 3_0,8_0';
    function searchDisplayController_shouldReloadTableForSearchString (controller: UISearchDisplayController; searchString: NSStringPtr): boolean; message 'searchDisplayController:shouldReloadTableForSearchString:'; deprecated 'in 3_0,8_0';
    function searchDisplayController_shouldReloadTableForSearchScope (controller: UISearchDisplayController; searchOption: NSInteger): boolean; message 'searchDisplayController:shouldReloadTableForSearchScope:'; deprecated 'in 3_0,8_0';
  end;
{$endif}

