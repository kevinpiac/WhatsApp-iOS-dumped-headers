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
    BOOL _isUpdatingTable;
    BOOL _didReceiveMoveChangeEvent;
    BOOL _needsReloadData;
    NSFetchedResultsController *_resultsController;
    WAWeakTimer *_timeLabelTimer;
    UIBarButtonItem *_barButtonDelete;
    UIBarButtonItem *_barButtonForward;
}

- (void).cxx_destruct;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forwardSelectedItems:(id)arg1;
- (void)reallyDeleteSelectedItems;
- (void)deleteSelectedItems:(id)arg1;
- (id)selectedStatusUpdates;
- (void)updateToolbarItemsOnSelectionChange;
- (id)destinationViewForCircleMovePresentationControllerDelegate:(id)arg1;
- (void)dismissViewController:(id)arg1 withGesture:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)validateSendStateForMessages:(id)arg1;
- (void)forwardMessages:(id)arg1;
- (void)statusDetailCellDidTapForwardButton:(id)arg1;
- (void)statusDetailCellDidTapSeenByButton:(id)arg1;
- (void)statusDetailCellDidTapRetryButton:(id)arg1;
- (id)cellForVisibleMessage:(id)arg1;
- (void)checkTableViewForConsistency;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned int)arg3 forChangeType:(unsigned int)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)presentMessage:(id)arg1 inChatSession:(id)arg2 inChatSessions:(id)arg3 showSeenBy:(BOOL)arg4 animated:(BOOL)arg5;
- (void)multiSendMediaPickerControllerDidRequestRetakePhoto:(id)arg1;
- (void)multiSendMediaPickerControllerDidCancel:(id)arg1;
- (void)multiSendMediaPickerController:(id)arg1 didSelectItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)reallyRevokeStatusMessages:(id)arg1;
- (void)revokeStatusMessage:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)messageForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forMessage:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)refreshCellSeparatorInsets;
- (void)refreshSeparatorInsetForTableViewCell:(id)arg1 inTableView:(id)arg2;
- (void)updateTimeLabel;
- (void)scheduleTimeLabelTimer;
- (BOOL)shouldAutorotate;
- (void)wa_viewLayoutMarginsDidChange;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

