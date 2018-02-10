//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIToolbarDelegate-Protocol.h"
#import "WAVideoScrubberThumbnailBarDataSource-Protocol.h"
#import "WAVideoScrubberTrimmerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIToolbar, WAGradientView, WAVideoScrubberSloMoBar, WAVideoScrubberThumbnailBar, WAVideoScrubberTrimmer;
@protocol WAVideoScrubberDelegate;

@interface WAVideoScrubber : UIView <WAVideoScrubberTrimmerDelegate, WAVideoScrubberThumbnailBarDataSource, UIToolbarDelegate>
{
    WAVideoScrubberTrimmer *_trimmer;
    UIToolbar *_blurView;
    WAGradientView *_bottomShadowView;
    WAVideoScrubberThumbnailBar *_thumbnailBar;
    WAVideoScrubberSloMoBar *_sloMoBar;
    BOOL _slowMotionEnabled;
    BOOL _isTrimmingVideo;
    BOOL _isAdjustingSlowMotion;
    BOOL _thumbnailingEnabled;
    id <WAVideoScrubberDelegate> _delegate;
    CDStruct_1b6d18a9 _maximumDuration;
    CDStruct_1b6d18a9 _assetDuration;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_e83c9415 _trimmedTimeRange;
    CDStruct_e83c9415 _slowMotionTimeRange;
}

+ (float)preferredHeightWithSloMoBar:(BOOL)arg1;
+ (float)preferredHeight;
@property(nonatomic, getter=isThumbnailingEnabled) BOOL thumbnailingEnabled; // @synthesize thumbnailingEnabled=_thumbnailingEnabled;
@property(readonly, nonatomic) BOOL isAdjustingSlowMotion; // @synthesize isAdjustingSlowMotion=_isAdjustingSlowMotion;
@property(readonly, nonatomic) BOOL isTrimmingVideo; // @synthesize isTrimmingVideo=_isTrimmingVideo;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) CDStruct_e83c9415 slowMotionTimeRange; // @synthesize slowMotionTimeRange=_slowMotionTimeRange;
@property(nonatomic) CDStruct_e83c9415 trimmedTimeRange; // @synthesize trimmedTimeRange=_trimmedTimeRange;
@property(nonatomic) BOOL slowMotionEnabled; // @synthesize slowMotionEnabled=_slowMotionEnabled;
@property(readonly, nonatomic) CDStruct_1b6d18a9 assetDuration; // @synthesize assetDuration=_assetDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property(nonatomic) __weak id <WAVideoScrubberDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoScrubberTrimmerDidEndDraggingThumb:(id)arg1;
- (void)videoScrubberTrimmerDidChangeThumbValue:(id)arg1;
- (void)videoScrubberTrimmerDidBeginDraggingThumb:(id)arg1;
- (void)videoScrubberPrecisionRangeSlider:(id)arg1 mayPresentRangeFrom:(float)arg2 to:(float)arg3;
- (void)videoScrubberPrecisionRangeSlider:(id)arg1 willPresentRangeFrom:(float)arg2 to:(float)arg3 around:(float)arg4 animationDuration:(double)arg5;
- (void)videoScrubberPrecisionRangeSliderDidEndDraggingHandle:(id)arg1;
- (void)videoScrubberPrecisionRangeSliderDidDragHandle:(id)arg1;
- (void)videoScrubberPrecisionRangeSliderDidBeginDraggingHandle:(id)arg1;
- (struct CGSize)videoScrubberThumbnailBarThumbnailAspectRatio:(id)arg1;
- (void)videoScrubberThumbnailBar:(id)arg1 videoFramesAtTimes:(id)arg2 size:(struct CGSize)arg3 tolerance:(CDStruct_1b6d18a9)arg4 block:(CDUnknownBlockType)arg5;
@property(nonatomic, getter=isTrimmingEnabled) BOOL trimmingEnabled;
- (void)setTimeRange:(CDStruct_e83c9415)arg1 ofSlider:(id)arg2;
- (void)configureWithAssetDuration:(CDStruct_1b6d18a9)arg1 maximumDuration:(CDStruct_1b6d18a9)arg2;
- (void)setThumbHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isContentHidden) BOOL contentHidden;
@property(readonly, nonatomic) float effectiveHeight;
- (void)setNeedsRegenerateThumbnails;
@property(nonatomic, getter=isBottomShadowHidden) BOOL bottomShadowHidden;
@property(retain, nonatomic) NSMutableDictionary *thumbnailCache;
- (void)layoutSubviews;
- (int)positionForBar:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
