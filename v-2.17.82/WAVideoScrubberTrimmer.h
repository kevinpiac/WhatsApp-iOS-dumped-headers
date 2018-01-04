//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAVideoScrubberPrecisionRangeSlider.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UIPanGestureRecognizer, UIView;
@protocol WAVideoScrubberTrimmerDelegate;

@interface WAVideoScrubberTrimmer : WAVideoScrubberPrecisionRangeSlider <UIGestureRecognizerDelegate>
{
    UIImageView *_leftHandleView;
    UIImageView *_rightHandleView;
    UIImageView *_middleFillView;
    UIView *_coverContainerView;
    UIView *_leftCover;
    UIView *_rightCover;
    UIImageView *_scrubberThumb;
    float _thumbValueBeforeDragging;
    UIPanGestureRecognizer *_panGesture;
    float _thumbValue;
}

+ (float)preferredHeight;
@property(nonatomic) float thumbValue; // @synthesize thumbValue=_thumbValue;
- (void).cxx_destruct;
- (void)handleThumbPan:(id)arg1;
- (void)didEndDragging;
- (void)didBeginDragging;
- (BOOL)shouldBeginDraggingWithTouch:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)rightHandleView;
- (id)leftHandleView;
- (void)didChangeRange;
@property(readonly, nonatomic) struct CGRect frameForThumbnailBar;
- (float)minimumRangeWidth;
- (void)setThumbHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)getFramesForLeftHandle:(struct CGRect *)arg1 atPosition:(float)arg2 rightHandle:(struct CGRect *)arg3 atPosition:(float)arg4 leftMostVisiblePosition:(float)arg5 rightMostVisiblePosition:(float)arg6;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAVideoScrubberTrimmerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
