//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIToolbarDelegate-Protocol.h"
#import "WAForwardPickerDataSourceDelegate-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIBarButtonItem, UISearchController, UISearchDisplayController, UITableView, WAForwardPickerDataSource, WASearchResultsController, WamEventForwardPicker, _WAForwardPickerEmptyListView, _WAForwardPickerMultiselectBar, _WAMyStatusTableViewCell;

@interface WAForwardPickerViewController : WAViewController <WAForwardPickerDataSourceDelegate, WASearchResultsControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, UIToolbarDelegate, UISearchResultsUpdating, UISearchControllerDelegate>
{
    _WAForwardPickerEmptyListView *_emptyListView;
    UIBarButtonItem *_barButtonCancel;
    _Bool _showCancelButton;
    WASearchResultsController *_searchResultsController;
    NSMutableDictionary *_contactsForChatSessions;
    NSMutableArray *_selectedContacts;
    _Bool _showStatusVideoTruncationWarning;
    _Bool _showStatusTextTruncationWarning;
    _WAMyStatusTableViewCell *_myStatusCell;
    _WAForwardPickerMultiselectBar *_multiSelectBar;
    NSLayoutConstraint *_multiSelectBarToSuperViewBottom;
    _Bool _resetScrollOffsetInLayoutSubviews;
    double _keyboardHeight;
    WamEventForwardPicker *_fsEvent;
    double _controllerDidAppearTimestamp;
    NSMutableSet *_selectedSearchResults;
    NSArray *_originalNavigationStack;
    _Bool _requiresConfirmation;
    _Bool _allowsMultipleSelection;
    _Bool _allowsStatusSelection;
    _Bool _statusSelectionDisabled;
    _Bool _statusSelected;
    _Bool _useSearchController;
    CDUnknownBlockType _completionHandler;
    NSString *_confirmationButtonTitle;
    NSString *_confirmationTextForStatus;
    CDUnknownBlockType _confirmationTextForContact;
    CDUnknownBlockType _shouldProceedWithContact;
    long long _contentType;
    UITableView *_tableView;
    WAForwardPickerDataSource *_dataSource;
    UISearchController *_searchController;
    UISearchDisplayController *_searchDisplayController;
}

+ (id)controller;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) _Bool useSearchController; // @synthesize useSearchController=_useSearchController;
@property(retain, nonatomic) WAForwardPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSArray *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(copy, nonatomic) CDUnknownBlockType shouldProceedWithContact; // @synthesize shouldProceedWithContact=_shouldProceedWithContact;
@property(copy, nonatomic) CDUnknownBlockType confirmationTextForContact; // @synthesize confirmationTextForContact=_confirmationTextForContact;
@property(copy, nonatomic) NSString *confirmationTextForStatus; // @synthesize confirmationTextForStatus=_confirmationTextForStatus;
@property(copy, nonatomic) NSString *confirmationButtonTitle; // @synthesize confirmationButtonTitle=_confirmationButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool statusSelected; // @synthesize statusSelected=_statusSelected;
@property(nonatomic) _Bool statusSelectionDisabled; // @synthesize statusSelectionDisabled=_statusSelectionDisabled;
@property(nonatomic) _Bool allowsStatusSelection; // @synthesize allowsStatusSelection=_allowsStatusSelection;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) _Bool requiresConfirmation; // @synthesize requiresConfirmation=_requiresConfirmation;
- (void).cxx_destruct;
- (_Bool)shouldProceedWithContact:(id)arg1;
- (void)tableView:(id)arg1 didSelectContactRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectStatusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableViewIsDisplayingSearchResults:(id)arg1;
- (id)tableView:(id)arg1 cellForStatusAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForContact:(id)arg2 atIndexPath:(id)arg3;
- (void)forwardPickerDataSourceDidChangeContent:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (_Bool)searchResultsControllerShouldReloadData:(id)arg1;
- (_Bool)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned long long)arg2;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (id)searchResultsTableView;
- (void)tearDownSearchResultsController;
- (void)initializeSearchResultsController;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)contactForSearchResultAtIndexPath:(id)arg1;
- (id)contactForChatSessionSearchResult:(id)arg1;
- (void)updateContactSelection;
- (void)finishWithSelectedContacts;
- (void)statusPrivacyPolicyDidChange:(id)arg1;
- (void)showStatusPrivacySettingsPicker;
- (_Bool)showPrivacySettingsHelperPopup;
- (void)showHelperPopupAfterStatusSelection;
- (_Bool)isStatusCellSufficientlyVisible;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setKeyboardHeight:(double)arg1;
@property(copy, nonatomic) NSSet *excludedJIDs;
- (void)setSharedMediaItems:(id)arg1;
- (void)setSharedItems:(id)arg1;
- (void)updateMultiSelectBarContentInsets;
- (void)updateTableViewInsets;
- (void)cancel:(id)arg1;
- (void)cancel;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)wa_fontSizeDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
