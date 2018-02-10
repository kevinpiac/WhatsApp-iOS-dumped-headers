//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStatusDownloadableItemView.h"

#import "WAMediaPlayerDelegate-Protocol.h"

@class NSString, WAInteractiveAnnotationView, WAMediaPlayer;

@interface WAStatusVideoItemView : WAStatusDownloadableItemView <WAMediaPlayerDelegate>
{
    WAMediaPlayer *_mediaPlayer;
    struct CGSize _presentationSize;
    WAInteractiveAnnotationView *_annotationsView;
}

+ (_Bool)pausesTimerDuringInteractiveZoom;
- (void).cxx_destruct;
- (void)mediaPlayerDidEndScrubbing:(id)arg1;
- (void)mediaPlayerDidBeginScrubbing:(id)arg1;
- (void)mediaPlayerDidPlayToEndTime:(id)arg1;
- (_Bool)canTransitionToDownloadStatus:(long long)arg1;
- (void)updateDownloadStatus;
- (void)openAnnotation:(id)arg1;
- (void)addOrUpdateAnnotationsView;
- (void)mediaPlayerDidFinishLoading:(id)arg1;
- (void)mediaPlayerDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerStatusDidChange:(id)arg1;
- (void)mediaPlayerDidChangeLikelyToKeepUp:(id)arg1;
- (void)mediaPlayerDidRequestPlaybackStart:(id)arg1;
- (struct CGSize)zoomableViewSize;
- (id)zoomableView;
- (double)presentationTime;
- (_Bool)isFinishedPresenting;
- (void)stopPlayback;
- (void)setDownloadStatus:(long long)arg1 animated:(_Bool)arg2;
- (void)mediaDownloadDidFail;
- (void)mediaDownloadDidSucceed;
- (void)mediaDownloadProgressDidChange;
- (void)setAudioMuted:(_Bool)arg1;
- (void)setPaused:(_Bool)arg1;
- (void)rewind;
- (void)loadMediaPlayerItemIfNeeded;
- (void)didUpdateMessage;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

