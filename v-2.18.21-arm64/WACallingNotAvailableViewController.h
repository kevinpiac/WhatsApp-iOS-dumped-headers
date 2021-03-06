//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface WACallingNotAvailableViewController : WAViewController
{
    NSString *_peerName;
    long long _errorCode;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_bottomButton;
    UIButton *_closeButton;
    NSLayoutConstraint *_topSpacerConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *topSpacerConstraint; // @synthesize topSpacerConstraint=_topSpacerConstraint;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(nonatomic) __weak UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *peerName; // @synthesize peerName=_peerName;
- (void).cxx_destruct;
- (void)closeButtonTapped:(id)arg1;
- (void)bottomButtonTapped:(id)arg1;
- (void)wa_applicationDidEnterBackground;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;

@end

