//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAPaymentTransaction;

@interface WAPaymentDetailsTableDelegate : NSObject
{
    WAPaymentTransaction *_transaction;
    NSString *_accountIcon;
    NSString *_accountDisplayName;
}

- (void).cxx_destruct;
- (unsigned int)cellTypeForRow:(int)arg1;
- (id)tableView:(id)arg1 paymentDetailsCellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (unsigned int)numberOfRows;
- (BOOL)shouldShowSection;
- (BOOL)hasValidBankAccount;
- (BOOL)isValidPaymentMessage;
- (void)updatePaymentTransaction:(id)arg1;
- (id)initWithTransaction:(id)arg1;

@end

