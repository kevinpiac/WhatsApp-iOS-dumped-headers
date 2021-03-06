//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WAHelperScreenPresenting-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface WAExpiredBuildNotificationViewController : WAViewController <WAHelperScreenPresenting>
{
    int _daysToExpiration;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UIButton *_appStoreButton;
    UIButton *_dismissButton;
    UILabel *_footerLabel;
    UIView *_bottomSpacer;
}

+ (BOOL)canPresentBuildExpirationReminderReturningNumberOfDaysToExpiration:(out int *)arg1;
+ (id)buildExpiration;
@property(retain, nonatomic) UIView *bottomSpacer; // @synthesize bottomSpacer=_bottomSpacer;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIButton *appStoreButton; // @synthesize appStoreButton=_appStoreButton;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) int daysToExpiration; // @synthesize daysToExpiration=_daysToExpiration;
- (void).cxx_destruct;
- (void)dismiss:(id)arg1;
- (void)openAppStore:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

