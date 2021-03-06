//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

@class NSMutableArray, UISwitch, WAActivityLabel, WAPrivacyPolicy, WATableRow;

@interface WAPrivacySettingsViewController : WAStaticTableViewController
{
    WATableRow *_lastSeenRow;
    WATableRow *_profilePicRow;
    WATableRow *_statusV2Row;
    WATableRow *_statusV3Row;
    WATableRow *_liveLocationRow;
    WATableRow *_blockedRow;
    WATableRow *_readReceiptsRow;
    UISwitch *_readReceiptsSwitch;
    WAActivityLabel *_activityLabel;
    double _activityStartTime;
    BOOL _needPrivacyRefresh;
    NSMutableArray *_chatSessionsSharingLiveLocation;
    WAPrivacyPolicy *_privacyPolicy;
}

- (void).cxx_destruct;
- (void)privacyPolicyDidChange:(id)arg1;
- (void)liveLocationSharingEndDateDidChange:(id)arg1;
- (void)blockedContactsListUpdated:(id)arg1;
- (void)wa_applicationWillEnterForeground;
- (BOOL)isSafeToUnload;
- (void)switchReadReceiptsAction:(id)arg1;
- (void)updateBlockedContactsCountDisplay;
- (void)updateLiveLocationCurrentlySharingDisplay;
- (void)showLiveLocationController;
- (void)showBlacklistController;
- (void)updatePrivacyValues;
- (void)setupTableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

@end

