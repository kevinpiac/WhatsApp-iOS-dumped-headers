//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASavedContentBrowserChildTableViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"
#import "_WASavedContentSearchResultsTableViewControllerConfigurationDelegate-Protocol.h"

@class NSCalendar, NSDateFormatter, NSFetchedResultsController, NSIndexPath, NSString, UIBarButtonItem, UILabel, UISearchController, WASearchResultsController, _WASavedContentSearchResultsTableViewController;

@interface WASavedContentListViewController : WASavedContentBrowserChildTableViewController <UISearchControllerDelegate, UISearchResultsUpdating, WASearchResultsControllerDelegate, _WASavedContentSearchResultsTableViewControllerConfigurationDelegate, NSFetchedResultsControllerDelegate, UIViewControllerPreviewingDelegate>
{
    NSString *_chatName;
    NSCalendar *_calendar;
    long long _currentMonth;
    long long _currentYear;
    _Bool _needsReset;
    NSFetchedResultsController *_emptyResultsController;
    NSDateFormatter *_fullDateFormatter;
    NSDateFormatter *_monthOnlyDateFormatter;
    _Bool _isUpdatingTable;
    _Bool _needsUpdateFooter;
    _Bool _isInitialLayoutPass;
    UIBarButtonItem *_selectButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_forwardToolbarButton;
    UIBarButtonItem *_trashToolbarButton;
    UIBarButtonItem *_shareToolbarButton;
    UIBarButtonItem *_starToolbarButton;
    UIBarButtonItem *_unstarToolbarButton;
    NSIndexPath *_editingRowIndexPath;
    UILabel *_itemCountLabel;
    UISearchController *_searchController;
    _WASavedContentSearchResultsTableViewController *_searchResultsTableViewController;
    WASearchResultsController *_searchResultsController;
    NSString *_chatJID;
    NSFetchedResultsController *_resultsController;
}

+ (id)localizedStringForItemCount:(long long)arg1;
+ (id)tableViewCellNibName;
+ (double)tableViewCellPreferredHeight;
@property(readonly, nonatomic) NSFetchedResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(copy, nonatomic) NSString *chatJID; // @synthesize chatJID=_chatJID;
- (void).cxx_destruct;
- (id)itemPreviewViewControllerForItem:(id)arg1 location:(struct CGPoint)arg2 inTableViewCell:(id)arg3 tableView:(id)arg4 returningSourceRect:(struct CGRect *)arg5;
- (void)presentItemOnSelection:(id)arg1;
- (id)itemsInMessage:(id)arg1;
- (id)messageForItem:(id)arg1;
- (void)configureCell:(id)arg1 withItem:(id)arg2 searchTerm:(id)arg3;
- (void)prepareTableViewCellForFirstUse:(id)arg1;
- (id)newSearchResultsController;
- (id)newFetchedResultsController;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)reloadSearchResultItems;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (_Bool)searchResultsControllerShouldReloadData:(id)arg1;
- (_Bool)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned long long)arg2;
- (id)previewActionsForMessage:(id)arg1;
- (struct CGRect)sourceRectForChatPreviewFromTableViewCell:(id)arg1 inTableView:(id)arg2;
- (id)chatPreviewViewControllerForItem:(id)arg1 location:(struct CGPoint)arg2 inTableViewCell:(id)arg3 tableView:(id)arg4 returningSourceRect:(struct CGRect *)arg5;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)savedContentSearchResultsTableViewController:(id)arg1 configureTableViewCell:(id)arg2 forItem:(id)arg3 searchTerm:(id)arg4;
- (void)savedContentSearchResultsTableViewControllerConfigureTableView:(id)arg1;
- (void)showChatForItem:(id)arg1;
- (id)chatViewControllerForItem:(id)arg1;
- (void)deselectAllRowsForMessage:(id)arg1;
- (void)selectAllRowsForMessage:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)reallyRevokeMessages:(id)arg1;
- (void)reallyDeleteMessages:(id)arg1;
- (void)promptToDeleteMessages:(id)arg1;
- (void)trashButtonTapped:(id)arg1;
- (void)unstarMessages:(id)arg1;
- (void)unstarButtonTapped:(id)arg1;
- (void)starMessages:(id)arg1;
- (void)starButtonTapped:(id)arg1;
- (void)showShareSheetForMessages:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)forwardButtonTapped:(id)arg1;
- (id)selectedMessages;
- (void)updateToolbar;
- (void)cancelButtonTapped:(id)arg1;
- (void)selectButtonTapped:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)chatName;
- (void)loadIfNeeded;
- (void)reset;
- (void)setNeedsReset;
- (void)updateDateFormatters;
- (void)updateFooter;
- (void)updateInterfaceWithAnimation:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)relayoutAll;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configureTableView:(id)arg1;
- (void)transactionDidReplaceChatSession:(id)arg1;
- (void)currentLocaleDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

