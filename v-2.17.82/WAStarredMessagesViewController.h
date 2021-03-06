//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatSessionViewController.h"

#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "WANavigationItemCustomBackButtonTitle-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UISearchController, UIView, WAChatMessagesController, WASearchResultsController;

@interface WAStarredMessagesViewController : WAChatSessionViewController <WASearchResultsControllerDelegate, UISearchControllerDelegate, UISearchResultsUpdating, WANavigationItemCustomBackButtonTitle>
{
    WAChatMessagesController *_currentMessagesController;
    WAChatMessagesController *_allMessagesController;
    NSArray *_jids;
    unsigned int _loadedAllMessagesCount;
    WAChatMessagesController *_filteredMessagesController;
    float _keyboardHeight;
    BOOL _needsScrollToTop;
    UILabel *_helperText;
    UILabel *_helperTextTitle;
    UIView *_noStarredMessagesView;
    UISearchController *_searchController;
    WASearchResultsController *_searchResultsController;
    BOOL _combinedViewForAllChats;
}

+ (BOOL)needsWallpaperImageView;
+ (unsigned int)chatMessagesControllerOptions;
+ (BOOL)needsChatBar;
+ (BOOL)canViewMessageInfo;
+ (BOOL)isEditModeSupported;
@property(nonatomic) BOOL combinedViewForAllChats; // @synthesize combinedViewForAllChats=_combinedViewForAllChats;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (BOOL)shouldAutorotate;
- (id)backButtonItemTitleForViewController:(id)arg1;
- (BOOL)shouldShowEditOrDoneButton;
- (void)setEditMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)uniqueIdentifier;
- (id)initWithJID:(id)arg1;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (BOOL)searchResultsControllerShouldReloadData:(id)arg1;
- (BOOL)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned int)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)cancelSearching;
- (void)prepareToSearch;
- (void)loadSearchSubviews;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)updateTableViewContentInsetsWithKeyboardHeight:(float)arg1 adjustingContentOffset:(BOOL)arg2 fadeInDateBubbles:(BOOL)arg3;
- (BOOL)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (unsigned int)defaultEditMode;
- (id)scrollToMostRecentButton;
- (void)showNoMessagesViewIfNecessary;
- (void)reloadHelperTextFonts;
- (void)addNoMessagesView;
- (void)layoutNoMessagesSubviews;
- (void)chatStorageDidDeleteMessages:(id)arg1;
- (void)handleMessageUpdatedNotification:(id)arg1;
- (BOOL)controller:(id)arg1 shouldRemoveMessage:(id)arg2;
- (void)removeInvalidStarredMessages;
- (void)insertStarredMessageIfNecessary:(id)arg1;
- (BOOL)loadLaterMessagesIfNeeded;
- (BOOL)loadEarlierMessagesIfNeeded;
- (BOOL)isMessageInChatView:(id)arg1;
- (void)addMessages:(id)arg1 toMessagesController:(id)arg2 animated:(BOOL)arg3;
- (id)loadMessagesFromOffset:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)reloadMessageControllerWithMessageCount:(unsigned int)arg1;
- (void)reloadMessageControllerAtMessage:(id)arg1;
- (id)messagesController;
- (void)prepareController;
- (void)openChatAroundMessage:(id)arg1;
- (void)restoreContentOffsetWithTopCellData:(id)arg1 relativeOffset:(float)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)topChatCellDataReturningRelativeOffset:(float *)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)isLoadingSearchResults;
- (unsigned int)presentationContextForBubbleTableViewCell:(id)arg1;
- (BOOL)isTableRowLastWithIndexPath:(id)arg1;
- (void)layoutTableSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

