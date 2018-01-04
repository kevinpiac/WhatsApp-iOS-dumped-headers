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
    BOOL _isInitialLayoutPass;
    UIImageView *_blurredImageView;
    UITapGestureRecognizer *_doubleTapGesture;
    BOOL _displaying;
    BOOL _ignoresLayoutSubviews;
    BOOL _scrubbing;
    BOOL _needsUpdateLayoutInsets;
    id <WAMediaBrowserCollectionViewCellDelegate> _delegate;
    WAMessage *_message;
    float _parallaxOffset;
    NSString *_accessibilityLabelForContent;
    NSNumber *_startedTappingOnImageTime;
}

+ (BOOL)supportsDoubleTapGesture;
@property(readonly, nonatomic) BOOL needsUpdateLayoutInsets; // @synthesize needsUpdateLayoutInsets=_needsUpdateLayoutInsets;
@property(retain, nonatomic) NSNumber *startedTappingOnImageTime; // @synthesize startedTappingOnImageTime=_startedTappingOnImageTime;
@property(copy, nonatomic) NSString *accessibilityLabelForContent; // @synthesize accessibilityLabelForContent=_accessibilityLabelForContent;
@property(nonatomic, getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property(readonly, nonatomic) float parallaxOffset; // @synthesize parallaxOffset=_parallaxOffset;
@property(nonatomic) BOOL ignoresLayoutSubviews; // @synthesize ignoresLayoutSubviews=_ignoresLayoutSubviews;
@property(nonatomic, getter=isDisplaying) BOOL displaying; // @synthesize displaying=_displaying;
@property(retain, nonatomic) WAMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak id <WAMediaBrowserCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)shouldConsiderTouchForTaps:(struct CGPoint)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didUpdateParallaxOffset;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviewsInCell;
- (BOOL)shouldBypassTwoStageLoading;
- (void)didChangeMessageAtStage:(int)arg1;
- (void)didChangeMessage;
- (void)willChangeMessageToMessage:(id)arg1;
- (void)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)prepareForReuse;
- (void)didMoveToWindow;
- (void)didLayoutSubviews;
- (void)layoutSubviews;
- (void)setNeedsUpdateLayoutInsets;
@property(readonly, nonatomic) BOOL canPopFromCurrentState;
@property(readonly, nonatomic) UIView *visibleContentView;
@property(nonatomic) int presentationState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)supportsFullScreenPresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

