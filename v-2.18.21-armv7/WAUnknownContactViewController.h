//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "ABDisabledControllerDelegate-Protocol.h"
#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"
#import "WAContactEditViewControllerDelegate-Protocol.h"

@class NSString;

@interface WAUnknownContactViewController : WAStaticTableViewController <ABDisabledControllerDelegate, ABPeoplePickerNavigationControllerDelegate, CNContactPickerDelegate, WAContactEditViewControllerDelegate>
{
    NSString *_visibleText;
    int _dataType;
    id _data;
    NSString *_jid;
}

@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSString *visibleText; // @synthesize visibleText=_visibleText;
- (void).cxx_destruct;
- (void)abDisabledViewControllerDidCancel:(id)arg1;
- (void)presentDisabledAddressBookViewController;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)addUnknownContactDataToExistingContact;
- (void)saveUnknownContactDataAsNewContact;
- (void)presentEditingScreenForContact:(id)arg1;
- (void)contactEditControllerDidCancel:(id)arg1;
- (void)contactEditControllerDidSave:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)dismiss;
- (id)tableView:(id)arg1 actionCellForIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setupTableView;
- (id)initWithStyle:(int)arg1;
- (id)initWithRawData:(id)arg1 dataType:(int)arg2;
- (id)initWithJID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

