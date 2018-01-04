//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAEmbeddedYoutubePlayerDelegate-Protocol.h"
#import "WAPlayerControlsViewDelegate-Protocol.h"
#import "WAPlayerProgressViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UISlider, UITapGestureRecognizer, UIView, WAButtonView, WAEmbeddedPlayerControlsView, WAEmbeddedPlayerProgressView, WAEmbeddedYoutubePlayerView, WAMediaTransferProgressView, WAMessage;

@interface WAEmbeddedPlayerWindow : UIWindow <WAPlayerControlsViewDelegate, WAPlayerProgressViewDelegate, UIGestureRecognizerDelegate, WAEmbeddedYoutubePlayerDelegate>
{
    WAEmbeddedYoutubePlayerView *_embeddedPlayerView;
    UIImageView *_coverFrameView;
    UIImageView *_animatingCoverFrameView;
    UIView *_shadowView;
    WAButtonView *_fullScreenButton;
    WAButtonView *_playPauseButton;
    WAButtonView *_closeButton;
    UIButton *_expandButton;
    UISlider *_progressIndicator;
    WAEmbeddedPlayerControlsView *_fullScreenControlsView;
    WAEmbeddedPlayerProgressView *_fullScreenProgressView;
    WAMediaTransferProgressView *_loadingIndicatorView;
    UIButton *_watermarkButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    BOOL _isPaused;
    BOOL _isSeeking;
    BOOL _controlButtonsShown;
    BOOL _fullScreen;
    BOOL _collapsed;
    BOOL _floatAtBottom;
    float _currentScale;
    double _videoDuration;
    WAMessage *_message;
}

@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)playerProgressRequestPause;
- (void)playerProgressRequestPlay;
- (void)playerProgressEndDragging;
- (void)playerProgressRequestSeekTo:(float)arg1;
- (void)playerProgressStartDragging;
- (void)playerControlsRequestExitFullScreen;
- (void)playerControlsRequestClose;
- (void)player:(id)arg1 stateChangedTo:(unsigned int)arg2;
- (void)player:(id)arg1 videoDurationChanged:(double)arg2;
- (void)player:(id)arg1 playPositionChanged:(float)arg2;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)createGestureRecognizers;
- (void)onWatermark:(id)arg1;
- (void)onExpandButtonPress:(id)arg1;
- (void)onCloseButtonPress:(id)arg1;
- (void)onPlayPauseButtonPress:(id)arg1;
- (void)onFullScreenButtonPress:(id)arg1;
- (void)fullScreen:(BOOL)arg1;
- (void)collapse;
- (void)expand;
- (void)close;
- (void)showControlButtonsScheduleOutAnimation:(BOOL)arg1;
- (void)hideControlButtons;
- (void)updateWatermarkDisplay;
- (void)configurePlayPauseButton;
- (void)positionControlButtons;
- (void)createControlButtons;
- (void)removeProgressView;
- (void)showProgressView;
- (void)updateLayoutForCurrentOrientation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)applicationWillPresentCallScreen:(id)arg1;
- (void)didChangeStatusBarFrame:(id)arg1;
- (id)contentView;
- (void)pauseVideo;
- (void)playVideoFromMessage:(id)arg1 fromPreviewImageView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

