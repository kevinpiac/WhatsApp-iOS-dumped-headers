//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

@class NSDate, NSString, WAActivityLabel, WAPrivacyPolicy, WATableRow;
@protocol WADeviceDate;

@interface WAPrivacySettingsPicker : WAStaticTableViewController
{
    WATableRow *_nooneRow;
    WATableRow *_contactsRow;
    WATableRow *_allUsersRow;
    WAActivityLabel *_activityLabel;
    NSDate<WADeviceDate> *_activityStartTime;
    WAPrivacyPolicy *_privacyPolicy;
    unsigned int _privacyCategory;
    NSString *_titleString;
}

- (void).cxx_destruct;
- (void)privacyPolicyDidChange:(id)arg1;
- (void)hideActivity;
- (void)showActivity;
- (void)selectValue:(unsigned int)arg1;
- (void)updateCheckMarks;
- (void)setupTableView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initForCategory:(unsigned int)arg1 title:(id)arg2;

@end

