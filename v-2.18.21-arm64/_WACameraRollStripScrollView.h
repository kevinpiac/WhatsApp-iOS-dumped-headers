//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, NSArray, NSMutableSet, NSString, UIPanGestureRecognizer, UIView, WAGrabHandleView;
@protocol _WACameraRollStripScrollViewDelegate;

@interface _WACameraRollStripScrollView : UIScrollView <UIGestureRecognizerDelegate, CAAnimationDelegate>
{
    WAGrabHandleView *_grabBarView;
    double _grabBarHeight;
    double _visibleHeightBeforeDragging;
    double _initialVisibleHeight;
    double _lastVisibleHeight;
    NSMutableSet *_visibleViews;
    NSMutableSet *_recycledViews;
    UIPanGestureRecognizer *_panGesture;
    long long _panGestureCounter;
    long long _panGestureCounterOnTouchDown;
    double _panGestureOffset;
    long long _itemCount;
    long long _initialHighlightedIndex;
    _Bool _isHighlightingCell;
    UIView *_backgroundView;
    CADisplayLink *_displayLink;
    double _animationToValue;
    double _animationFromValue;
    double _animationStartTime;
    double _animationDuration;
    double _swipeStartTime;
    _Bool _horizontallyFlipped;
    double _visibleHeight;
    UIView *_forceTouchSourceView;
    unsigned long long _presentationState;
    double _thumbnailAlpha;
    struct CGSize _maximumThumbnailSizeInPixels;
}

+ (double)preferredThumbnailWidth;
+ (double)preferredHeight;
@property(nonatomic) double thumbnailAlpha; // @synthesize thumbnailAlpha=_thumbnailAlpha;
@property(nonatomic, getter=isHorizontallyFlipped) _Bool horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property(readonly, nonatomic) struct CGSize maximumThumbnailSizeInPixels; // @synthesize maximumThumbnailSizeInPixels=_maximumThumbnailSizeInPixels;
@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
@property(readonly, nonatomic) UIView *forceTouchSourceView; // @synthesize forceTouchSourceView=_forceTouchSourceView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;
- (void).cxx_destruct;
- (long long)indexForLocationPoint:(struct CGPoint)arg1;
- (void)reloadData;
@property(readonly, nonatomic) NSArray *visibleCells;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setGrabBarState:(double)arg1 animated:(_Bool)arg2;
- (void)setGrabBarStateWithAnimation:(_Bool)arg1;
- (double)targetVisibleHeightForCurrentHeight:(double)arg1 velocity:(struct CGPoint)arg2;
- (void)handleSecondaryPanGesture:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (struct _NSRange)visibleRange;
- (double)thumbnailWidthForVisibleHeight:(double)arg1;
- (double)currentThumbnailWidth;
- (struct CGRect)centerAndSizeForItemAtIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)updateAnimation:(id)arg1;
- (void)animateFromVisibleHeight:(double)arg1 to:(double)arg2 duration:(double)arg3;
- (void)setVisibleHeight:(double)arg1 animated:(_Bool)arg2;
- (void)setPresentationState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)contractIfPossible;
- (void)expandIfPossible;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <_WACameraRollStripScrollViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

