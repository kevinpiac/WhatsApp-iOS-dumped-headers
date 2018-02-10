//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "WACircleMovePresentationControllerDelegate-Protocol.h"
#import "WAMultiSendMediaPickerControllerDelegate-Protocol.h"
#import "WAStatusDetailCellDelegate-Protocol.h"
#import "WAStatusViewerViewControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, UIBarButtonItem, WAWeakTimer;

@interface WAStatusDetailViewController : WATableViewController <WAMultiSendMediaPickerControllerDelegate, NSFetchedResultsControllerDelegate, WAStatusDetailCellDelegate, WAStatusViewerViewControllerDelegate, WACircleMovePresentationControllerDelegate>
{
    _Bool _isUpdatingTable;
    _Bool _didReceiveMoveChangeEvent;
    _Bool _needsReloadData;
    NSFetchedResultsController *_resultsController;
    WAWeakTimer *_timeLabelTimer;
    UIBarButtonItem *_barButtonDelete;
    UIBarButtonItem *_barButtonForward;
}

- (void).cxx_destruct;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)forwardSelectedItems:(id)arg1;
- (void)reallyDeleteSelectedItems;
- (void)deleteSelectedItems:(id)arg1;
- (id)selectedStatusUpdates;
- (void)updateToolbarItemsOnSelectionChange;
- (id)destinationViewForCircleMovePresentationControllerDelegate:(id)arg1;
- (void)dismissViewController:(id)arg1 withGesture:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)validateSendStateForMessages:(id)arg1;
- (void)forwardMessages:(id)arg1;
- (void)statusDetailCellDidTapForwardButton:(id)arg1;
- (void)statusDetailCellDidTapSeenByButton:(id)arg1;
- (void)statusDetailCellDidTapRetryButton:(id)arg1;
- (id)cellForVisibleMessage:(id)arg1;
- (void)checkTableViewForConsistency;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)presentMessage:(id)arg1 inChatSession:(id)arg2 inChatSessions:(id)arg3 showSeenBy:(_Bool)arg4 animated:(_Bool)arg5;
- (void)multiSendMediaPickerControllerDidRequestRetakePhoto:(id)arg1;
- (void)multiSendMediaPickerControllerDidCancel:(id)arg1;
- (void)multiSendMediaPickerController:(id)arg1 didSelectItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)reallyRevokeStatusMessages:(id)arg1;
- (void)revokeStatusMessage:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)messageForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forMessage:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateTimeLabel;
- (void)scheduleTimeLabelTimer;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

