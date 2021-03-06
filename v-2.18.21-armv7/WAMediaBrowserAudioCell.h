//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaBrowserCollectionViewCell.h"

#import "WAMediaPlayerTransportControlViewDelegate-Protocol.h"

@class NSString, UIImageView, WAMediaPlayerTransportControlView, WAPttPlayer;

@interface WAMediaBrowserAudioCell : WAMediaBrowserCollectionViewCell <WAMediaPlayerTransportControlViewDelegate>
{
    WAMediaPlayerTransportControlView *_playerTransportBar;
    UIImageView *_audioOnlyImageView;
    WAPttPlayer *_player;
    BOOL _ignoreProgressChange;
}

- (void).cxx_destruct;
- (void)setAccessibilityLabelForContent:(id)arg1;
- (void)mediaPlayerTransportControlViewDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerTransportControlViewDidEndScrubbing:(id)arg1;
- (void)mediaPlayerTransportControlViewDidBeginScrubbing:(id)arg1;
- (BOOL)canMediaPlayerTransportControlViewBeginScrubbing:(id)arg1;
@property(nonatomic, getter=isAudioPlayerPaused) BOOL audioPlayerPaused;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setPresentationState:(int)arg1;
- (int)presentationState;
- (void)didChangeMessage;
- (void)layoutSubviewsInCell;
- (void)prepareForReuse;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillPresentCallScreen:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)supportsFullScreenPresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

