//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseMessageDetailsTableDelegate.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAMessageDetailsTableUpdateDelegate-Protocol.h"

@class NSString, WAPaymentTransaction;

@interface WAPaymentDetailsTableDelegate : WABaseMessageDetailsTableDelegate <UITableViewDelegate, UITableViewDataSource, WAMessageDetailsTableUpdateDelegate>
{
    WAPaymentTransaction *_transaction;
    NSString *_accountIcon;
    NSString *_accountDisplayName;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 messageUpdated:(id)arg2;
- (unsigned long long)transactionCellTypeForRow:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 supportCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 transactionCellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)headerTitleForSection:(long long)arg1;
- (_Bool)hasValidBankAccount;
- (_Bool)isValidPaymentMessage;
- (void)updatePaymentTransaction:(id)arg1;
- (void)stopOperations;
- (void)reloadFonts;
- (id)initWithTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

