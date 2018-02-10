//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "StatusEditControllerDelegate-Protocol.h"
#import "WAStatusListEditViewControllerDelegate-Protocol.h"

@class UIBarButtonItem, UIView;

@interface StatusListViewController : WATableViewController <WAStatusListEditViewControllerDelegate, StatusEditControllerDelegate>
{
    UIBarButtonItem *_editButton;
    UIView *_viewEmptyStatusList;
}

@property(retain, nonatomic) UIView *viewEmptyStatusList; // @synthesize viewEmptyStatusList=_viewEmptyStatusList;
- (void).cxx_destruct;
- (void)statusEditController:(id)arg1 didSaveStatus:(id)arg2;
- (void)statusEditControllerDidCancel:(id)arg1;
- (void)statusListEditViewViewControllerDidFinish:(id)arg1;
- (void)addSpinnerToTableViewCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)leaveEditMode;
- (void)editAction:(id)arg1;
- (void)presentStatusUpdateFailedAlert;
- (void)addStatusAction:(id)arg1;
- (void)wa_applicationDidEnterBackground;
- (void)wa_fontSizeDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)chatManagerDidUpdateStatus:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

