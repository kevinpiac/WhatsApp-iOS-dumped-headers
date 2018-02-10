//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WASampleBufferDisplayViewDelegate-Protocol.h"

@class AVAsset, AVAssetTrack, AVPlayerItem, NSObject, NSString, NSURL, WAAsynchPlayerBufferLoader, WASampleBufferDisplayView;
@protocol OS_dispatch_queue, WALoopingVideoPlayerViewDelegate;

@interface WALoopingVideoPlayerView : UIView <WASampleBufferDisplayViewDelegate>
{
    BOOL _isApplicationActive;
    BOOL _isDisabled;
    NSObject<OS_dispatch_queue> *_bufferQueue;
    AVAsset *_asset;
    AVAssetTrack *_track;
    WAAsynchPlayerBufferLoader *_loader;
    unsigned int _requestID;
    long long _playID;
    int _loaderLock;
    int _videoViewLock;
    int _playIDLock;
    int _disabledLock;
    WASampleBufferDisplayView *_videoView;
    CDStruct_1b6d18a9 _timeOffsetForCurrentLoop;
    CDStruct_1b6d18a9 _lastPresentationTime;
    CDStruct_1b6d18a9 _lastOutputPresentationTime;
    CDStruct_1b6d18a9 _waitTime;
    CDStruct_1b6d18a9 _newLoaderTime;
    struct CGAffineTransform _transform;
    CDStruct_1b6d18a9 _playbackStartTime;
    CDStruct_1b6d18a9 _playbackFinishTime;
    int _scrubbingCounter;
    BOOL _playing;
    BOOL _isRequestingMedia;
    NSURL *_assetURL;
    AVPlayerItem *_playerItem;
    id <WALoopingVideoPlayerViewDelegate> _delegate;
    struct CGSize _internalItemSize;
}

@property BOOL isRequestingMedia; // @synthesize isRequestingMedia=_isRequestingMedia;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(readonly, nonatomic) struct CGSize internalItemSize; // @synthesize internalItemSize=_internalItemSize;
@property(nonatomic) __weak id <WALoopingVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void).cxx_destruct;
- (void)sampleBufferDisplayViewDidDrawFrameWithSourceTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) BOOL paused;
- (void)endScrubbingAtTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginScrubbing;
- (void)setPlaybackFinishTime:(CDStruct_1b6d18a9)arg1;
- (void)setPlaybackStartTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic, getter=isDisabled) BOOL disabled;
- (void)setAssetURL:(id)arg1 playerItem:(id)arg2;
- (BOOL)isScrubbing;
- (CDStruct_1b6d18a9)lastReadTime;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)seekBackwardToTime:(CDStruct_1b6d18a9)arg1;
- (void)seekForwardToTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 playID:(long long)arg2;
- (CDStruct_1b6d18a9)startTimeForNewLoader;
- (CDStruct_1b6d18a9)playbackStartTime;
- (struct opaqueCMSampleBuffer *)copyNextSampleBufferFromNewLoader;
- (BOOL)shouldUseSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)requestMediaForView:(id)arg1;
- (void)updatePlayerState;
- (void)loadAsset:(id)arg1 requestID:(unsigned int)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

