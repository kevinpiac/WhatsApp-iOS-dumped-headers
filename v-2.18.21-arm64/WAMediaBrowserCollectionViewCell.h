//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSNumber, NSString, UIImageView, UITapGestureRecognizer, UIView, WAMessage;
@protocol WAMediaBrowserCollectionViewCellDelegate;

@interface WAMediaBrowserCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    _Bool _isInitialLayoutPass;
    UIImageView *_blurredImageView;
    UITapGestureRecognizer *_doubleTapGesture;
    _Bool _displaying;
    _Bool _ignoresLayoutSubviews;
    _Bool _scrubbing;
    _Bool _needsUpdateLayoutInsets;
    id <WAMediaBrowserCollectionViewCellDelegate> _delegate;
    WAMessage *_message;
    double _parallaxOffset;
    NSString *_accessibilityLabelForContent;
    NSNumber *_startedTappingOnImageTime;
}

+ (_Bool)supportsDoubleTapGesture;
@property(readonly, nonatomic) _Bool needsUpdateLayoutInsets; // @synthesize needsUpdateLayoutInsets=_needsUpdateLayoutInsets;
@property(retain, nonatomic) NSNumber *startedTappingOnImageTime; // @synthesize startedTappingOnImageTime=_startedTappingOnImageTime;
@property(copy, nonatomic) NSString *accessibilityLabelForContent; // @synthesize accessibilityLabelForContent=_accessibilityLabelForContent;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(readonly, nonatomic) double parallaxOffset; // @synthesize parallaxOffset=_parallaxOffset;
@property(nonatomic) _Bool ignoresLayoutSubviews; // @synthesize ignoresLayoutSubviews=_ignoresLayoutSubviews;
@property(nonatomic, getter=isDisplaying) _Bool displaying; // @synthesize displaying=_displaying;
@property(retain, nonatomic) WAMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak id <WAMediaBrowserCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldConsiderTouchForTaps:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didUpdateParallaxOffset;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviewsInCell;
- (_Bool)shouldBypassTwoStageLoading;
- (void)didChangeMessageAtStage:(long long)arg1;
- (void)didChangeMessage;
- (void)willChangeMessageToMessage:(id)arg1;
- (void)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)prepareForReuse;
- (void)didMoveToWindow;
- (void)didLayoutSubviews;
- (void)layoutSubviews;
- (void)setNeedsUpdateLayoutInsets;
@property(readonly, nonatomic) _Bool canPopFromCurrentState;
@property(readonly, nonatomic) UIView *visibleContentView;
@property(nonatomic) long long presentationState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)supportsFullScreenPresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
