//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WANavigationItemCustomBackButtonTitle-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, UITableView, UIView, WAChatSession;

@interface WAListsViewController : WAViewController <NSFetchedResultsControllerDelegate, WAParticipantPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, WANavigationItemCustomBackButtonTitle>
{
    NSFetchedResultsController *_fetchedResultsController;
    UIView *_emptyListView;
    UITableView *_tableView;
    WAChatSession *_activeList;
    BOOL _isUpdatingTable;
}

- (void).cxx_destruct;
- (void)participantPicker:(id)arg1 didUnblockContact:(id)arg2;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)createNewList:(id)arg1;
- (void)deleteExistingList:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned int)arg3 forChangeType:(unsigned int)arg4;
- (void)controllerWillChangeContent:(id)arg1;
@property(readonly, nonatomic) unsigned int fetchedResultsCount;
- (void)setUpFetchRequest;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)navigateToList:(id)arg1 animated:(BOOL)arg2;
- (void)updateInterfaceWithAnimation:(BOOL)arg1;
- (void)setUpEmptyListView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)wa_fontSizeDidChange;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)uniqueIdentifier;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)backButtonItemTitleForViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

