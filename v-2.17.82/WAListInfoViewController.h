//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSMutableArray, NSString, UITableViewCell, UITapGestureRecognizer, WAChatSession, WAEncStatusTableViewCell, _WAEditListNameTableViewCell;

@interface WAListInfoViewController : WATableViewController <NSFetchedResultsControllerDelegate, WAParticipantPickerViewControllerDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    NSFetchedResultsController *_fetchedResultsController;
    UITableViewCell *_changeRecipientCell;
    _WAEditListNameTableViewCell *_editNameCell;
    NSMutableArray *_groupMembersToUpdate;
    BOOL _animateListChanges;
    UITapGestureRecognizer *_tapGesture;
    WAEncStatusTableViewCell *_encStatusCell;
    float _recipientRowHeight;
    WAChatSession *_list;
}

@property(retain, nonatomic) WAChatSession *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (void)wa_fontSizeDidChange;
- (void)updateGroupMemberInfoForVisibleCells;
- (void)loadStatusMessagesOfGroupMembers:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned int)arg3 forChangeType:(unsigned int)arg4;
- (void)controllerWillChangeContent:(id)arg1;
@property(readonly, nonatomic) unsigned int fetchedResultsCount;
- (void)setUpFetchRequest;
- (void)participantPicker:(id)arg1 didUnblockContact:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)updateRecipientsWithContacts:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)changeRecipients;
- (void)showContactInfoForGroupMember:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)checkListEncryptionState;
- (void)updateInterface;
- (void)tableViewTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)wa_viewLayoutMarginsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

