//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAChatSessionPersistentNotificationContentViewLayoutDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIButton, WAChatSessionPersistentNotificationContentView;
@protocol WAChatSessionPersistentNotificationViewDelegate;

@interface WAChatSessionPersistentNotificationView : UIView <WAChatSessionPersistentNotificationContentViewLayoutDelegate>
{
    NSLayoutConstraint *_leadingInset;
    NSLayoutConstraint *_trailingInset;
    NSLayoutConstraint *_textToButtonConstraint;
    id <WAChatSessionPersistentNotificationViewDelegate> _delegate;
    UIButton *_dismissButton;
    NSLayoutConstraint *_dismissButtonHeightConstraint;
    WAChatSessionPersistentNotificationContentView *_contentView;
}

@property(retain, nonatomic) WAChatSessionPersistentNotificationContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSLayoutConstraint *dismissButtonHeightConstraint; // @synthesize dismissButtonHeightConstraint=_dismissButtonHeightConstraint;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak id <WAChatSessionPersistentNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parentViewControllerWillBeginInteraction;
- (void)parentViewControllerDidDisappear;
- (void)dismiss:(id)arg1;
- (void)viewWasTapped:(id)arg1;
- (void)persistentNotificationContentViewNeedsUpdatedHeight:(id)arg1;
- (void)persistentNotificationContentViewDidUpdatePreferredDismissButtonHeight:(id)arg1;
- (void)setText:(id)arg1 expandable:(_Bool)arg2;
- (void)updateTextForStaticContentView:(id)arg1;
- (void)updateTextForExpandableContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)maxContentWidthForSuperviewWidth:(double)arg1;
- (void)updateInsets;
- (void)updateDismissButtonHeight;
- (void)addNewDismissButton;
- (void)addNewBorderView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

