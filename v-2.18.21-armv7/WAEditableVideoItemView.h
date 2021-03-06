//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAEditableItemView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAAutoPlayVideoPlayerPlaybackDelegate-Protocol.h"
#import "WAGIFToggleViewDelegate-Protocol.h"
#import "WAMediaPlayerDelegate-Protocol.h"
#import "WAVideoScrubberDelegate-Protocol.h"

@class NSString, UITapGestureRecognizer, WAGIFToggleView, WAMultiSendEditableVideo, WAVideoScrubber, WAVideoScrubberContainerView;

@interface WAEditableVideoItemView : WAEditableItemView <UIGestureRecognizerDelegate, WAAutoPlayVideoPlayerPlaybackDelegate, WAGIFToggleViewDelegate, WAMediaPlayerDelegate, WAVideoScrubberDelegate>
{
    WAVideoScrubberContainerView *_videoScrubberContainerView;
    WAGIFToggleView *_GIFToggleView;
    WAVideoScrubber *_videoScrubber;
    BOOL _needsUpdateThumbnailOnTimeChange;
    CDStruct_1b6d18a9 _sourceTimeToSeekOnPlayerLoad;
    UITapGestureRecognizer *_tapGesture;
    BOOL _needsRegenerateThumbnails;
    NSString *_originalFilterName;
    NSString *_originalMediaUUID;
    BOOL _mediaPlaybackPaused;
}

+ (BOOL)isAccessibilityElementWhenNotCroppingOrFiltering;
@property(nonatomic, getter=isMediaPlaybackPaused) BOOL mediaPlaybackPaused; // @synthesize mediaPlaybackPaused=_mediaPlaybackPaused;
- (void).cxx_destruct;
- (void)showDetailsAfterTransitionScreenShot;
- (void)hideDetailsForTransitionScreenShot;
- (void)editableImageScrollViewDidReceiveSingleTap:(id)arg1;
- (void)GIFToggleViewDidChangeState:(id)arg1;
- (void)toggleGIF;
- (void)updateGIFButtonAnimated:(BOOL)arg1;
- (BOOL)isGIFSupported;
- (struct CGSize)videoScrubberThumbnailAspectRatio:(id)arg1;
- (void)videoScrubber:(id)arg1 videoFramesAtTimes:(id)arg2 size:(struct CGSize)arg3 tolerance:(CDStruct_1b6d18a9)arg4 block:(CDUnknownBlockType)arg5;
- (void)videoScrubberDidEndScrubbing:(id)arg1;
- (void)videoScrubberDidChangeCurrentTime:(id)arg1;
- (void)videoScrubberDidBeginScrubbing:(id)arg1 pausePlayback:(BOOL)arg2;
- (void)videoScrubberDidChangeSlowMotionTimeRange:(id)arg1;
- (void)videoScrubberDidChangeTrimmedTimeRange:(id)arg1;
- (void)autoPlayVideoPlayerDidUpdateContentSize:(id)arg1;
- (void)autoPlayVideoPlayerDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerDidEndScrubbing:(id)arg1;
- (void)mediaPlayerDidBeginScrubbing:(id)arg1;
- (void)mediaPlayerDidFinishLoading:(id)arg1;
- (void)mediaPlayerDidPlayToEndTime:(id)arg1;
- (void)mediaPlayerDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerStatusDidChange:(id)arg1;
- (void)mediaPlayerDidChangeLikelyToKeepUp:(id)arg1;
- (void)mediaPlayerDidRequestPlaybackStart:(id)arg1;
- (CDStruct_1b6d18a9)clampTimeToValidRange:(CDStruct_1b6d18a9)arg1;
- (void)updateAutoPlayDisabledState;
- (void)updatePreviewInterfaceLayout;
- (void)regenerateThumbnailsIfNeeded;
- (void)setNeedsRegenerateThumbnails;
- (void)didChangeMediaItemCrop;
- (void)setCurrentAutoPlayTime:(CDStruct_1b6d18a9)arg1;
- (void)setFiltering:(BOOL)arg1;
- (void)setCropping:(BOOL)arg1;
- (void)updateCurrentTimeForSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)stopPresentation;
- (void)didScroll;
- (void)setScrolling:(BOOL)arg1;
- (void)setKeyboardHidden:(BOOL)arg1;
- (void)updateMediaPlayerPlaybackTimeRange;
- (void)updateThumb;
- (void)didEndEditingTextItem;
- (void)willBeginEditingTextItem;
- (void)configureWithItem:(id)arg1;
- (void)destroyPlayerElements;
- (void)createPlayerElementsIfNeeded;
- (void)updateMediaPlayerSuppressPlayButtonState;
- (BOOL)isDurationTrimable:(CDStruct_1b6d18a9)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)viewTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMultiSendEditableVideo *currentMediaItem; // @dynamic currentMediaItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

