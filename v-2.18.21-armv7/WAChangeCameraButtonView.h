//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView;
@protocol WAChangeCameraButtonViewDelegate;

@interface WAChangeCameraButtonView : UIView <CAAnimationDelegate, UIGestureRecognizerDelegate>
{
    BOOL _frontFacing;
    UIImageView *_outerImageView;
    UIImageView *_innerImageView;
    int _animationCounter;
    id <WAChangeCameraButtonViewDelegate> _delegate;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) __weak id <WAChangeCameraButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setFrontFacing:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isFrontFacing) BOOL frontFacing;
- (void)handleTap:(id)arg1;
- (void)animationDidEnd;
- (void)animationWillBegin;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

