//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WABubbleTextViewDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UITapGestureRecognizer, WABubbleTextView, WACallIconOverlayView, WAWeakTimer;
@protocol WACallVideoViewDelegate;

@interface WACallVideoView : UIView <WABubbleTextViewDelegate>
{
    _Bool _maximized;
    _Bool _resizeAnimating;
    UIView *_minimizedView;
    UIView *_fullScreenView;
    UIView *_overlayView;
    WACallIconOverlayView *_iconOverlayView;
    WABubbleTextView *_alertBubble;
    _Bool _alertBubbleVisible;
    _Bool _showSelfMutedString;
    WAWeakTimer *_selfMutedAlertTimer;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    _Bool _previewVideoFullScreen;
    _Bool _peerVideoPausedByNetwork;
    _Bool _peerCallInterrupted;
    _Bool _callReconnecting;
    _Bool _selfMuted;
    _Bool _peerMuted;
    _Bool _peerVideoDisplayed;
    _Bool _selfOfferingVideoUpgrade;
    _Bool _peerOfferingVideoUpgrade;
    int _minimizedViewAnchorLocation;
    id <WACallVideoViewDelegate> _delegate;
    UIView *_peerVideoView;
    UIView *_previewVideoView;
    double _minimizedViewBottomOffset;
    double _minimizedViewTopOffset;
    unsigned long long _selfVideoState;
    unsigned long long _peerVideoState;
}

@property(nonatomic) unsigned long long peerVideoState; // @synthesize peerVideoState=_peerVideoState;
@property(nonatomic) unsigned long long selfVideoState; // @synthesize selfVideoState=_selfVideoState;
@property(nonatomic, getter=isPeerOfferingVideoUpgrade) _Bool peerOfferingVideoUpgrade; // @synthesize peerOfferingVideoUpgrade=_peerOfferingVideoUpgrade;
@property(nonatomic, getter=isSelfOfferingVideoUpgrade) _Bool selfOfferingVideoUpgrade; // @synthesize selfOfferingVideoUpgrade=_selfOfferingVideoUpgrade;
@property(nonatomic, getter=isPeerVideoDisplayed) _Bool peerVideoDisplayed; // @synthesize peerVideoDisplayed=_peerVideoDisplayed;
@property(nonatomic, getter=isPeerVideoMuted) _Bool peerMuted; // @synthesize peerMuted=_peerMuted;
@property(nonatomic, getter=isSelfMuted) _Bool selfMuted; // @synthesize selfMuted=_selfMuted;
@property(nonatomic, getter=isCallReconnecting) _Bool callReconnecting; // @synthesize callReconnecting=_callReconnecting;
@property(nonatomic, getter=isPeerCallInterrupted) _Bool peerCallInterrupted; // @synthesize peerCallInterrupted=_peerCallInterrupted;
@property(nonatomic, getter=isPeerVideoPausedByNetwork) _Bool peerVideoPausedByNetwork; // @synthesize peerVideoPausedByNetwork=_peerVideoPausedByNetwork;
@property(nonatomic) double minimizedViewTopOffset; // @synthesize minimizedViewTopOffset=_minimizedViewTopOffset;
@property(nonatomic) double minimizedViewBottomOffset; // @synthesize minimizedViewBottomOffset=_minimizedViewBottomOffset;
@property(nonatomic, getter=isPreviewVideoFullScreen) _Bool previewVideoFullScreen; // @synthesize previewVideoFullScreen=_previewVideoFullScreen;
@property(nonatomic) int minimizedViewAnchorLocation; // @synthesize minimizedViewAnchorLocation=_minimizedViewAnchorLocation;
@property(readonly, nonatomic) UIView *previewVideoView; // @synthesize previewVideoView=_previewVideoView;
@property(readonly, nonatomic) UIView *peerVideoView; // @synthesize peerVideoView=_peerVideoView;
@property(nonatomic) __weak id <WACallVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bubbleTextViewDidRequestAction:(id)arg1;
- (struct CGPoint)positionOfAnchor:(int)arg1;
- (struct WAFrameAnchors)generateAnchors;
- (int)closestAnchorToPoint:(struct CGPoint)arg1;
- (void)animateMinimizedViewToPosition:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;
- (void)moveMinimizedWindow:(id)arg1;
- (void)switchMinimizedView:(id)arg1;
- (void)resizeVideoViewsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)minimizedFrameSize;
- (void)setPreviewVideoFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setPeerVideoFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)peerOrientationDidChange:(id)arg1;
- (void)maximize;
- (void)minimize;
- (void)updateIconOverlayView;
- (void)rotateViews:(double)arg1;
@property(nonatomic) double overlayAlpha;
- (id)alertString;
- (void)updateAlertBubble;
- (void)setPreviewVideoFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (id)previewVideoSubview;
- (id)peerVideoSubview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
