//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WALinkLabelDelegate-Protocol.h"
#import "WAPasscodeViewDelegate-Protocol.h"

@class NSString, UILabel, UIView, UIWindow, WALinkLabel, WAPasscodeView;

@interface WATwoFactorNagViewController : WAViewController <WALinkLabelDelegate, WAPasscodeViewDelegate>
{
    UIView *_containerCardView;
    UILabel *_titleLabel;
    WAPasscodeView *_passcodeView;
    WALinkLabel *_descriptionLabel;
    UIWindow *_applicationWindow;
    BOOL _animateSlideIn;
    BOOL _wasDismissed;
    float _keyboardHeight;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)passcodeViewDidEnterPasscode:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)applicationDidDismissCallScreen:(id)arg1;
- (void)wa_applicationDidBecomeActive;
- (void)dismissCardAndPopController;
- (void)dealloc;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
