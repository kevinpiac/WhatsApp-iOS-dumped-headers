//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageInfoViewController.h"

@class WANavigationBarTitleView, WAPaymentTransaction;
@protocol NSObject;

@interface WATransactionDetailsViewController : WAMessageInfoViewController
{
    WAPaymentTransaction *_transaction;
    WANavigationBarTitleView *_titleView;
    id <NSObject> _debugFieldsObserver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)presentPaymentInfoForMessage:(id)arg1;
- (void)updateDetailsTable;
- (void)handlePaymentAccountChangeNotification:(id)arg1;
- (BOOL)wa_prefersMinimalBackButton;
- (void)viewDidLoad;
- (void)updateNavigationBarSubtitle;
- (id)initWithTransaction:(id)arg1;

@end

