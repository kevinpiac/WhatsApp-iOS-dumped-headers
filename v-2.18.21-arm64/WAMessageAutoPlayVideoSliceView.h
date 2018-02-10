//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageMediaSliceView.h"

#import "WALoopingVideoPlayerViewDelegate-Protocol.h"

@class NSString, UIImageView, WAGIFOverlayView, WALoopingVideoPlayerView;

@interface WAMessageAutoPlayVideoSliceView : WAMessageMediaSliceView <WALoopingVideoPlayerViewDelegate>
{
    WALoopingVideoPlayerView *_player;
    _Bool _isDisplayed;
    _Bool _betweenParentDidAppearAndWillDisappear;
    _Bool _active;
    _Bool _activateAfterDownload;
    WAGIFOverlayView *_gifOverlay;
    double _timeToPause;
    long long _loopsLeft;
    CDStruct_1b6d18a9 _previousTime;
    UIImageView *_attribution;
    _Bool _wasUndownloaded;
    _Bool _parentViewDisappearing;
    _Bool _hidingProgressView;
}

+ (void)enableAutoPlayForMessage:(id)arg1;
- (void).cxx_destruct;
- (void)loopingVideoPlayerView:(id)arg1 didChangeCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)updateProgressViewIfNeededForChangeType:(unsigned long long)arg1;
- (void)updateDisabledStateWithDelay:(_Bool)arg1;
- (void)updateDisabledState;
- (_Bool)shouldBeDisabled;
- (void)didCompleteHidingProgressViewWithAnimation:(_Bool)arg1;
- (void)didHideProgressViewWithAnimation:(_Bool)arg1;
- (void)parentDidEndDisplay:(id)arg1;
- (void)parentWillBeginDisplay:(id)arg1;
- (void)parentViewDidDisappear:(id)arg1;
- (void)parentViewWillDisappear:(id)arg1;
- (void)parentViewDidAppear:(id)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (void)activate;
- (_Bool)isActive;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
