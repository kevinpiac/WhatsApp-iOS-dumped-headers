//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WAMediaTransferProgressArcView;
@protocol WAMediaTransferProgressViewDelegate;

@interface WAMediaTransferProgressView : UIView
{
    UIView *_containerView;
    UIView *_backgroundView;
    WAMediaTransferProgressArcView *_indefiniteArc;
    WAMediaTransferProgressArcView *_definiteArcTrack;
    WAMediaTransferProgressArcView *_definiteArcProgress;
    UIImageView *_downloadIconImageView;
    UILabel *_fileSizeLabel;
    UIImageView *_stopImageView;
    int _animationCounter;
    float _iconAlpha;
    BOOL _allowsCancel;
    BOOL _transferring;
    BOOL _showsIndeterminateProgressOnly;
    BOOL _userInteractionEnabledWhenTransferring;
    BOOL _userInteractionEnabledWhenNotTransferring;
    unsigned int _style;
    unsigned int _iconStyle;
    id <WAMediaTransferProgressViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WAMediaTransferProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isUserInteractionEnabledWhenNotTransferring) BOOL userInteractionEnabledWhenNotTransferring; // @synthesize userInteractionEnabledWhenNotTransferring=_userInteractionEnabledWhenNotTransferring;
@property(nonatomic, getter=isUserInteractionEnabledWhenTransferring) BOOL userInteractionEnabledWhenTransferring; // @synthesize userInteractionEnabledWhenTransferring=_userInteractionEnabledWhenTransferring;
@property(nonatomic) unsigned int iconStyle; // @synthesize iconStyle=_iconStyle;
@property(nonatomic) BOOL showsIndeterminateProgressOnly; // @synthesize showsIndeterminateProgressOnly=_showsIndeterminateProgressOnly;
@property(nonatomic, getter=isTransferring) BOOL transferring; // @synthesize transferring=_transferring;
@property(nonatomic) BOOL allowsCancel; // @synthesize allowsCancel=_allowsCancel;
@property(readonly, nonatomic) unsigned int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)handleSingleTap:(id)arg1;
- (void)updateUserInteractionEnabled;
- (void)setHidden:(BOOL)arg1;
- (void)setTransferring:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)setProgress:(float)arg1;
@property(readonly, nonatomic) float progress;
@property(copy, nonatomic) NSString *fileSizeText;
- (void)layoutSubviewsForURLDownloadStyle;
- (void)layoutSubviews;
- (void)updateCancelButtonVisibility;
- (id)initWithStyle:(unsigned int)arg1;

@end
