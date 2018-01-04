//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatSessionsViewController.h"

#import "ABDisabledControllerDelegate-Protocol.h"
#import "PhoneInputViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WAAllChatsArchivedViewDelegate-Protocol.h"
#import "WAChatComposerDelegate-Protocol.h"
#import "WAChatListExpandableHeaderDelegate-Protocol.h"
#import "WAEmptyChatListViewDelegate-Protocol.h"
#import "WAMultiSelectBarDelegate-Protocol.h"
#import "WAMultiSendMediaPickerControllerDelegate-Protocol.h"
#import "WAMultiSendPreviewViewControllerDelegate-Protocol.h"
#import "WAMultiShotCameraControllerDelegate-Protocol.h"
#import "WANavigationItemCustomBackButtonTitle-Protocol.h"
#import "WARestorable-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"
#import "WATextSharingViewControllerDelegate-Protocol.h"

@class NSArray, NSNumber, NSString, NSTimer, UIBarButtonItem, UIFont, UIView, WAActivityLabel, WAAllChatsArchivedView, WAChatListHeaderCell, WAChatListNavigationController, WAEmptyChatListView, WALoadingTableViewCell, WAMultiSelectBar, WARestoreTableViewCell, WASearchResultsController;
@protocol UIViewControllerPreviewing, WAChatListExpandableHeader;

@interface WAChatListViewController : WAChatSessionsViewController <WASearchResultsControllerDelegate, PhoneInputViewControllerDelegate, ABDisabledControllerDelegate, WAChatComposerDelegate, WAEmptyChatListViewDelegate, WAAllChatsArchivedViewDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, WAChatListExpandableHeaderDelegate, WASearchControllerDelegate, WATextSharingViewControllerDelegate, WAMultiSendPreviewViewControllerDelegate, WAMultiShotCameraControllerDelegate, WAMultiSelectBarDelegate, WARestorable, WAMultiSendMediaPickerControllerDelegate, WANavigationItemCustomBackButtonTitle>
{
    CDUnknownBlockType _prepareToSendVideoFileCompletionHandler;
    UIBarButtonItem *_composeButton;
    WAChatListHeaderCell *_headerCell;
    WAActivityLabel *_activityLabel;
    NSString *_activityText;
    unsigned int _activityCounter;
    double _lastActivityUpdateTime;
    WAEmptyChatListView *_emptyChatListView;
    WAAllChatsArchivedView *_allChatsArchivedView;
    WAMultiSelectBar *_multiSelectBar;
    NSArray *_deletedEmptyChatSessions;
    int _numberOfUnreadChatSessions;
    WASearchResultsController *_searchResultsController;
    WALoadingTableViewCell *_searchIndexingCell;
    BOOL _needsRemoveInvalidSearchResults;
    BOOL _needsReloadSearchResultsTableAfterLayout;
    BOOL _ignoreScrollViewDidScroll;
    BOOL _animateChangesToSearchResults;
    UIFont *_searchResultsSectionTitleFont;
    float _searchResultsSectionHeaderHeight;
    id <UIViewControllerPreviewing> _searchResultsTablePreviewingContext;
    UIView<WAChatListExpandableHeader> *_chatListHeader;
    NSNumber *_startedNewSearchTime;
    NSTimer *_finishedSearchingTimer;
    BOOL _searchBarInNavBarIsVisibleWhenDraggingBegan;
    float _messageSearchResultRowHeight;
    float _contactSearchResultRowHeight;
    BOOL _multiSelectBarHidden;
    WARestoreTableViewCell *_mediaRestoreCell;
}

+ (unsigned int)editButtonPlacement;
+ (BOOL)wa_needsCustomTableViewBehaviors;
@property(retain, nonatomic) WARestoreTableViewCell *mediaRestoreCell; // @synthesize mediaRestoreCell=_mediaRestoreCell;
@property(nonatomic, getter=isMultiSelectBarHidden) BOOL multiSelectBarHidden; // @synthesize multiSelectBarHidden=_multiSelectBarHidden;
- (void).cxx_destruct;
- (id)startChatWithContact:(id)arg1 JID:(id)arg2 animated:(BOOL)arg3;
- (id)tableViewSessions;
- (void)updateNavigationItemTitle;
- (void)multiSelectBar:(id)arg1 didRequestSetEditing:(BOOL)arg2 animated:(BOOL)arg3;
- (void)layoutMultiSelectBar;
- (void)setMultiSelectBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)textSharingViewControllerDidCancel:(id)arg1;
- (void)textSharingViewController:(id)arg1 didFinishWithText:(id)arg2 metadata:(id)arg3 hasTextFromURL:(BOOL)arg4;
- (void)presentTextSharingControllerForText:(id)arg1 contacts:(id)arg2 navigationController:(id)arg3;
- (void)processSendURL:(id)arg1;
- (void)forwardFileAtURL:(id)arg1;
- (void)sendExternalAudioFileAtURL:(id)arg1 toContacts:(id)arg2;
- (void)multiSendPreviewViewControllerDidRequestRetakePhoto:(id)arg1;
- (void)multiSendPreviewViewControllerDidCancel:(id)arg1;
- (void)multiSendPreviewViewController:(id)arg1 didConfirmItems:(id)arg2 pickerStatistics:(id)arg3;
- (id)createForwardPicker;
- (void)chatComposerDidAskToInviteFriends:(id)arg1;
- (void)chatComposerDidCancel:(id)arg1;
- (void)chatComposer:(id)arg1 didFinishWithContacts:(id)arg2 subject:(id)arg3 picture:(id)arg4;
- (void)chatComposer:(id)arg1 didFinishWithContact:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setHeaderExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)canExpandHeader;
- (void)chatListExpandableHeaderDidRequestShowBroadcastLists:(id)arg1;
- (void)chatListExpandableHeaderDidRequestShowArchivedChats:(id)arg1;
- (void)showAllArchivedChats;
- (void)allChatsArchivedViewDidRequestViewBroadcastLists:(id)arg1;
- (void)allChatsArchivedViewDidRequestViewArchivedChats:(id)arg1;
- (void)phoneInputViewControllerDidCancel:(id)arg1;
- (void)phoneInputViewController:(id)arg1 didFinishWithCountryCode:(id)arg2 phoneNumber:(id)arg3;
- (void)abDisabledViewControllerDidCancel:(id)arg1;
- (void)removeFileAtURL:(id)arg1;
- (void)updateRestoreCell:(id)arg1;
- (void)registerForRestoreNotifications;
- (void)updateChatSessionCellsInSearchTableView;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (BOOL)searchResultsControllerShouldReloadData:(id)arg1;
- (BOOL)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned int)arg2;
- (void)updateSizeOfViewToMatchItsSuperview:(id)arg1 logMessageOnError:(id)arg2;
- (void)logAndFixIfNeededSearchTableViewState:(id)arg1 name:(id)arg2;
- (void)reloadSearchResultsTableView;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (void)startFinishedSearchTimerIfResultsAreDone;
- (BOOL)messageSearchResultsFinishedLoading;
- (void)removeInvalidSearchResults;
- (void)wa_hideTableViewHeader;
- (void)activateSearchModeAnimated:(BOOL)arg1;
- (float)searchResultsSectionHeaderHeight;
- (id)searchResultsSectionTitleFont;
- (id)chatSessionForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (id)tableViewForChatSessionCell:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableViewCellForList:(id)arg1 inTableView:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (unsigned int)fetchedResultsSectionIndexFromTableSectionIndex:(unsigned int)arg1;
- (unsigned int)tableSectionIndexFromFetchedResultsSectionIndex:(unsigned int)arg1;
- (id)fetchedResultsIndexPathFromTableIndexPath:(id)arg1;
- (id)tableIndexPathFromFetchedResultsIndexPath:(id)arg1;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)searchController:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)searchController:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (BOOL)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInSearchController:(id)arg1;
- (float)searchController:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateSeparatorInsetForCell:(id)arg1 inSearchResultsTableView:(id)arg2;
- (int)numberOfRowsInSearchControllerSection:(int)arg1;
- (int)searchController:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (void)finishedTypingSearchField:(id)arg1;
- (void)transactionDidProcessMessages:(id)arg1;
- (void)setNeedsRemoveInvalidSearchResultsIfNeeded;
- (void)chatStorageDidDeleteMessagesInChatSession:(id)arg1;
- (void)transactionDidDeleteChatSession:(id)arg1;
- (void)didInsertOrDeleteRows;
- (void)didChangeContent;
- (void)updateUnreadBadgeInTabBar;
@property(readonly, nonatomic) int numberOfUnreadChatSessions;
- (id)predicateForFetchRequest;
- (id)viewControllerForChatPreviewInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)showChatViewControllerForMessage:(id)arg1;
- (void)dismissViewControllerAndStartChatWithContact:(id)arg1;
- (void)startNewChatAnimated:(BOOL)arg1;
- (void)emptyChatListViewDidRequestStartMessaging:(id)arg1;
- (void)emptyChatListViewDidRequestInviteContacts:(id)arg1;
- (void)multiSendMediaPickerControllerDidRequestRetakePhoto:(id)arg1;
- (void)multiSendMediaPickerControllerDidCancel:(id)arg1;
- (void)multiSendMediaPickerController:(id)arg1 didSelectItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)multiShotCameraController:(id)arg1 didRequestPresentPhotoLibraryWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)multiShotCameraController:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)multiShotCameraController:(id)arg1 didCaptureItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)pushForwardControllerTo:(id)arg1 items:(id)arg2 pickerStatistics:(id)arg3;
- (void)sendMediaItems:(id)arg1 toContacts:(id)arg2 postAsStatus:(BOOL)arg3 pickerStatistics:(id)arg4;
- (void)reallyPresentSingleShotCameraInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reallyPresentMultiShotCameraAnimated:(BOOL)arg1 fromView:(id)arg2 offsetBy:(struct CGPoint)arg3 inViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentMultiShotCameraAnimated:(BOOL)arg1 fromView:(id)arg2 offsetBy:(struct CGPoint)arg3 inViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)inviteContacts;
- (void)showBroadcastLists;
- (void)startGroupChat;
- (void)startNewChat:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)showTooltipIfNeeded;
- (id)backButtonItemTitleForViewController:(id)arg1;
- (void)formatTitle;
- (void)updateNetworkStatusLabel;
- (void)visibleConnectionStatusDidChange;
@property(readonly, nonatomic) WAChatListNavigationController *chatListNavigationController;
- (BOOL)shouldShowNoContentView;
- (void)setUpNoContentView:(id)arg1;
- (id)separatorColor;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateInterfaceWithAnimation:(BOOL)arg1;
- (void)updateAllChatsArchivedView;
- (void)wa_viewLayoutMarginsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)chatListHeader;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

