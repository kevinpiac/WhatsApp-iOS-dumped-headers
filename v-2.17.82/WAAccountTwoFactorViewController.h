//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

@class WATableRow, WATableSection, WATwoFactorManager, _WAAccountTwoFactorHeaderView;

@interface WAAccountTwoFactorViewController : WAStaticTableViewController
{
    WATableSection *_twoFactorSection;
    WATableRow *_enableDisableRow;
    WATableRow *_changePasscodeRow;
    WATableRow *_changeEmailRow;
    WATwoFactorManager *_manager;
    _WAAccountTwoFactorHeaderView *_headerView;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)wa_fontSizeDidChange;
- (void)adjustHeaderViewInsets;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)changeTwoFactorEmail;
- (void)changeTwoFactorPasscode;
- (void)enableDisableTwoFactor;
- (void)updateTableView;
- (void)setupTableView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

@end

