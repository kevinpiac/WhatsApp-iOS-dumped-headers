//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WALinkLabelDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, WALinkLabel;
@protocol WAWelcomeViewControllerDelegate;

@interface WAWelcomeViewController : WAViewController <WALinkLabelDelegate>
{
    id <WAWelcomeViewControllerDelegate> _delegate;
    NSLayoutConstraint *_containerViewTop;
    UILabel *_titleLabel;
    WALinkLabel *_helperTextLabel;
    UIButton *_buttonAccept;
    UIImageView *_imageView;
    NSLayoutConstraint *_containerSidePadding;
    NSLayoutConstraint *_titleLabelSidePadding;
    NSLayoutConstraint *_helperLabelSidePadding;
}

+ (id)controller;
@property(retain, nonatomic) NSLayoutConstraint *helperLabelSidePadding; // @synthesize helperLabelSidePadding=_helperLabelSidePadding;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelSidePadding; // @synthesize titleLabelSidePadding=_titleLabelSidePadding;
@property(retain, nonatomic) NSLayoutConstraint *containerSidePadding; // @synthesize containerSidePadding=_containerSidePadding;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *buttonAccept; // @synthesize buttonAccept=_buttonAccept;
@property(retain, nonatomic) WALinkLabel *helperTextLabel; // @synthesize helperTextLabel=_helperTextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *containerViewTop; // @synthesize containerViewTop=_containerViewTop;
@property(nonatomic) __weak id <WAWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)acceptAction:(id)arg1;
- (void)reloadButtonTitleColors;
- (void)reloadFonts;
- (void)wa_tintColorDidChange;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

