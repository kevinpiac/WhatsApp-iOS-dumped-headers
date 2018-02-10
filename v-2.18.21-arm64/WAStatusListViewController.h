//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "WACircleMovePresentationControllerDelegate-Protocol.h"
#import "WAMultiSendMediaPickerControllerDelegate-Protocol.h"
#import "WAMultiShotCameraControllerDelegate-Protocol.h"
#import "WAOutgoingStatusChatSessionCellDelegate-Protocol.h"
#import "WAStatusListNUXCellDelegate-Protocol.h"
#import "WAStatusTextComposerViewControllerDelegate-Protocol.h"
#import "WAStatusViewerViewControllerDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSString, StatusV3NavigationController, WAOutgoingStatusChatSessionCell, WAStatusListNUXCell, WAWeakTimer;

@interface WAStatusListViewController : WATableViewController <WAMultiSendMediaPickerControllerDelegate, WAMultiShotCameraControllerDelegate, WAOutgoingStatusChatSessionCellDelegate, WAStatusListNUXCellDelegate, WAStatusTextComposerViewControllerDelegate, WAStatusViewerViewControllerDelegate, WACircleMovePresentationControllerDelegate, NSFetchedResultsControllerDelegate>
{
    _Bool _isUpdatingTable;
    _Bool _didReceiveMoveChangeEvent;
    _Bool _needsReloadData;
    _Bool _needsHideExpiredMessagesOnForeground;
    _Bool _muteUnmuteInProgress;
    _Bool _showNUX;
    double _rowHeight;
    NSArray *_sectionInfos;
    WAWeakTimer *_timeLabelTimer;
    WAStatusListNUXCell *_nuxCell;
    WAOutgoingStatusChatSessionCell *_myStatusCell;
}

- (void).cxx_destruct;
- (id)destinationViewForCircleMovePresentationControllerDelegate:(id)arg1;
- (void)dismissViewController:(id)arg1 withGesture:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkTableViewForConsistency;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)updateFetchRequest;
- (void)setUpFetchRequests;
- (id)createFetchedResultsControllerWithPredicate:(id)arg1;
- (id)predicateForSection:(unsigned long long)arg1;
- (void)queryStatusMessageCounts;
- (void)invalidateMessageCountFor:(id)arg1;
- (void)hideExpiredMessages;
- (void)chatStorageDidChangeNextExpirationDate:(id)arg1;
- (void)presentStatusPrivacySettingsPicker;
- (void)presentChatSession:(id)arg1 inChatSessions:(id)arg2 autoAdvanceChatSession:(_Bool)arg3 animated:(_Bool)arg4 fromOrigin:(unsigned long long)arg5;
- (unsigned long long)indexOfController:(id)arg1;
- (id)indexPathFrom:(id)arg1 inController:(id)arg2;
- (id)chatSessionForIndexPath:(id)arg1;
- (id)cellForVisibleChatSession:(id)arg1;
- (void)multiSendMediaPickerControllerDidRequestRetakePhoto:(id)arg1;
- (void)multiSendMediaPickerControllerDidCancel:(id)arg1;
- (void)multiSendMediaPickerController:(id)arg1 didSelectItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)multiShotCameraController:(id)arg1 didRequestPresentPhotoLibraryWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)multiShotCameraController:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)multiShotCameraController:(id)arg1 didCaptureItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)sendMediaItems:(id)arg1 pickerStatistics:(id)arg2;
- (void)statusTextComposerViewController:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)callDidEnd:(id)arg1;
- (void)callDidStart:(id)arg1;
- (void)outgoingStatusCellDidTapTextButton:(id)arg1;
- (void)outgoingStatusCellDidTapCameraButton:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)reallyMuteOrUnmuteChatSession:(id)arg1;
- (void)muteOrUnmuteChatSession:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 withChatSession:(id)arg3;
- (id)tableViewCellForNoStatus:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldShowNUX;
- (void)dismissNUX;
- (void)statusListNUXCellDidRequestDismiss:(id)arg1;
- (void)statusListNUXCellDidRequestPresentPrivacyScreen:(id)arg1;
- (void)pushDetailControllerAnimated:(_Bool)arg1;
- (void)updateStatusTimestampInVisibleCells;
- (void)scheduleTimeLabelTimer;
@property(readonly, nonatomic) _Bool hasUnwatchedStatusUpdates;
@property(readonly, nonatomic) _Bool hasAnyStatusUpdates;
- (id)titleForSection:(unsigned long long)arg1;
- (id)headerViewForSection:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;
- (void)wa_applicationDidEnterBackground;
- (void)wa_applicationWillEnterForeground;
- (id)allIncomingChatSessions;
- (id)allIncomingControllers;
@property(readonly, nonatomic) NSFetchedResultsController *recentResultsController;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) StatusV3NavigationController *navigationController; // @dynamic navigationController;
@property(readonly) Class superclass;

@end

