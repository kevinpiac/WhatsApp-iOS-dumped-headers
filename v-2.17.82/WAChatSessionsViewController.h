//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WAChatSessionCellDelegate-Protocol.h"

@class NSFetchedResultsController, NSIndexPath, NSMutableSet, NSString, UITableView, UIView, _WAArchiveUndoManager, _WATapMaskView;
@protocol UIViewControllerPreviewing;

@interface WAChatSessionsViewController : WATableViewController <NSFetchedResultsControllerDelegate, UIViewControllerPreviewingDelegate, WAChatSessionCellDelegate>
{
    BOOL _editingSingleRow;
    BOOL _isUpdatingTable;
    BOOL _isDeferringTableUpdate;
    BOOL _didReceiveMoveChangeEvent;
    BOOL _didInsertOrDeleteRows;
    BOOL _needsReloadData;
    BOOL _shouldIgnoreCellUpdateNotification;
    BOOL _isChatDatabaseLoaded;
    UIView *_noContentView;
    _WATapMaskView *_tapMaskView;
    _WAArchiveUndoManager *_archiveUndoManager;
    NSIndexPath *_indexPathToScrollToAndHighlightOnLayout;
    UITableView *_tableViewForIndexPathToScrollToAndHighlightOnLayout;
    SEL _editButtonItemAction;
    NSMutableSet *_validatedChatSessionObjectIDs;
    BOOL _animateRowChanges;
    NSFetchedResultsController *_fetchedResultsController;
    id <UIViewControllerPreviewing> _viewControllerPreviewing;
}

+ (BOOL)showPinButton;
+ (unsigned int)editButtonPlacement;
@property(retain, nonatomic) id <UIViewControllerPreviewing> viewControllerPreviewing; // @synthesize viewControllerPreviewing=_viewControllerPreviewing;
@property(readonly, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(nonatomic) BOOL animateRowChanges; // @synthesize animateRowChanges=_animateRowChanges;
- (void).cxx_destruct;
- (void)exportChatHistoryInChatSession:(id)arg1 withMedia:(BOOL)arg2;
- (void)checkTableViewForConsistency;
- (void)didInsertOrDeleteRows;
- (void)didChangeContent;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)chatStorageDidMergeContext:(id)arg1;
- (void)chatStorageWillMergeContext:(id)arg1;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned int)arg3 forChangeType:(unsigned int)arg4;
- (void)controllerWillChangeContent:(id)arg1;
@property(readonly, nonatomic) unsigned int fetchedResultsCount;
- (void)repairChatSessionIfNeeded:(id)arg1;
- (void)setUpFetchRequest;
- (id)predicateForFetchRequest;
- (unsigned int)fetchedResultsSectionIndexFromTableSectionIndex:(unsigned int)arg1;
- (unsigned int)tableSectionIndexFromFetchedResultsSectionIndex:(unsigned int)arg1;
- (id)fetchedResultsIndexPathFromTableIndexPath:(id)arg1;
- (id)tableIndexPathFromFetchedResultsIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)chatSessionForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)configureCell:(id)arg1 forChatSession:(id)arg2 message:(id)arg3;
- (id)tableViewCellForChatSession:(id)arg1 message:(id)arg2 inTableView:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)presentSaveToContactsScreenForChatSession:(id)arg1;
- (void)addMuteOrUnmuteOptionForChatSession:(id)arg1 toActionSheet:(id)arg2;
- (void)showUnknownContactOptionsForChatSession:(id)arg1;
- (void)showKnownContactOptionsForChatSession:(id)arg1;
- (void)showGroupOptionsForChatSession:(id)arg1;
- (void)promptForConfirmationToClearChatSession:(id)arg1;
- (void)muteChatSessionWithJID:(id)arg1 until:(id)arg2;
- (void)reportArchiveAction;
- (void)markChatSession:(id)arg1 archived:(BOOL)arg2;
- (void)markChatSessionWithID:(id)arg1 archived:(BOOL)arg2;
- (void)archiveChatSessionWithID:(id)arg1;
- (void)unarchiveChatSessionWithID:(id)arg1;
- (void)handleShakeMotion:(id)arg1;
- (void)reportDeleteChatAction;
- (void)requestConfirmationToDeleteChatSession:(id)arg1;
- (void)performDeleteActionForChatSession:(id)arg1;
- (void)chatSessionCellMarkAsReadOrUnread:(id)arg1;
- (void)markChatSessionAsReadOrUnread:(id)arg1;
- (void)chatSessionCellMarkAsPinOrUnpin:(id)arg1;
- (BOOL)archiveActionRemovesCell:(id)arg1;
- (void)chatSessionCellPerformArchiveAction:(id)arg1;
- (void)chatSessionCellShowMoreOptions:(id)arg1;
- (void)showMoreOptionsForChatSession:(id)arg1;
- (void)chatSessionCellDidEndChangingSideButtons:(id)arg1 buttonsVisible:(BOOL)arg2;
- (void)chatSessionCellDidStartChangingSideButtons:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)hideSideButtonsInAllCellsExceptForCell:(id)arg1 inTableView:(id)arg2 animated:(BOOL)arg3;
- (void)removeTapMaskView;
- (id)previewActionItemsForChatSession:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)viewControllerForChatPreviewInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)tableViewForChatSessionCell:(id)arg1;
- (BOOL)didTapChatSession:(id)arg1;
- (void)accessibilityVoiceOverStatusChanged;
- (void)handleSignificantTimeChange:(id)arg1;
- (void)handleCurrentLocaleChange:(id)arg1;
- (void)contactsVisualRepresentationDidChange:(id)arg1;
- (BOOL)shouldAutorotate;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)updateInterfaceWithAnimation:(BOOL)arg1;
- (void)updateInterfaceWithAnimationIfNeeded:(BOOL)arg1;
- (BOOL)shouldShowNoContentView;
- (id)separatorColor;
- (void)layoutViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setUpNoContentView:(id)arg1;
- (void)preloadProfilePicturesForVisibleRows;
- (void)wa_viewLayoutMarginsDidChange;
- (void)viewDidLoad;
- (void)setBackButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)wa_fontSizeDidChange;
- (void)wa_applicationDidEnterBackground;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
