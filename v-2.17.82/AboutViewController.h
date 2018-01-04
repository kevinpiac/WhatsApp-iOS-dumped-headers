//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "ABDisabledControllerDelegate-Protocol.h"
#import "WALinkLabelDelegate-Protocol.h"
#import "WARestorable-Protocol.h"

@class NSString, UIImageView, UILabel, UITableView, UITableViewCell, UIView, WALinkLabel, WANavigationBarTitleView, WASupportEmailComposer;

@interface AboutViewController : WAViewController <ABDisabledControllerDelegate, WALinkLabelDelegate, WARestorable>
{
    WASupportEmailComposer *_emailComposer;
    UITableViewCell *_cellHelpFAQ;
    UITableViewCell *_cellContactUs;
    UITableViewCell *_cellTOS;
    UITableViewCell *_cellShareLogs;
    UITableViewCell *_cellLicenses;
    WALinkLabel *_deprecationLabel;
    WANavigationBarTitleView *_titleView;
    UITableView *_tableViewButtons;
    UIView *_viewDivider;
    UIView *_viewLogoContainer;
    UIImageView *_imageLogo;
    UIImageView *_imageWP;
    UILabel *_labelTitlePortrait;
    UILabel *_labelVersionPortrait;
    UIView *_viewTableHeader;
    UILabel *_labelTitleLandscape;
    UILabel *_labelVersionLandscape;
    UIView *_footerView;
    UILabel *_labelCopyright;
}

@property(retain, nonatomic) UILabel *labelCopyright; // @synthesize labelCopyright=_labelCopyright;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *labelVersionLandscape; // @synthesize labelVersionLandscape=_labelVersionLandscape;
@property(retain, nonatomic) UILabel *labelTitleLandscape; // @synthesize labelTitleLandscape=_labelTitleLandscape;
@property(retain, nonatomic) UIView *viewTableHeader; // @synthesize viewTableHeader=_viewTableHeader;
@property(retain, nonatomic) UILabel *labelVersionPortrait; // @synthesize labelVersionPortrait=_labelVersionPortrait;
@property(retain, nonatomic) UILabel *labelTitlePortrait; // @synthesize labelTitlePortrait=_labelTitlePortrait;
@property(retain, nonatomic) UIImageView *imageWP; // @synthesize imageWP=_imageWP;
@property(retain, nonatomic) UIImageView *imageLogo; // @synthesize imageLogo=_imageLogo;
@property(retain, nonatomic) UIView *viewLogoContainer; // @synthesize viewLogoContainer=_viewLogoContainer;
@property(retain, nonatomic) UIView *viewDivider; // @synthesize viewDivider=_viewDivider;
@property(retain, nonatomic) UITableView *tableViewButtons; // @synthesize tableViewButtons=_tableViewButtons;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (id)helperTextForABDisabledViewController:(id)arg1;
- (id)helperTitleForABDisabledViewController:(id)arg1;
- (void)abDisabledViewControllerDidCancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)shareLogs;
- (void)viewLicenses;
- (void)viewTermsOfService;
- (void)openFAQAction;
- (void)contactUsAction;
- (void)setContactUsCellEnabled:(BOOL)arg1;
- (void)updateLayoutToOrientation:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
