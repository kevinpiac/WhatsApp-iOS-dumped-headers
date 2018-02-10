//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "SinglePersonPickerDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableViewCell;

@interface WABlacklistViewController : WATableViewController <SinglePersonPickerDelegate>
{
    NSMutableArray *_blockedContacts;
    UITableViewCell *_addNewCell;
    BOOL _ignoreBlockedContactListNotifications;
}

+ (id)controller;
- (void).cxx_destruct;
- (id)excludedJIDsForSinglePersonPicker:(id)arg1;
- (void)singlePersonPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)singlePersonPickerDidCancel:(id)arg1;
- (void)addPerson;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)blockedContactsListUpdated:(id)arg1;
- (void)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)showUnableToMakeChangesError;
- (BOOL)canMakeChanges;
- (void)updateInterface;
- (void)reloadBlacklistItems;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)wa_tintColorDidChange;
- (void)wa_fontSizeDidChange;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

