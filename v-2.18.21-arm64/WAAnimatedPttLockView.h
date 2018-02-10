//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CASpringAnimation, UIColor, UIImageView, WATooltipView;

@interface WAAnimatedPttLockView : UIView
{
    _Bool _hasLockAnimationBegan;
    _Bool _isToolTipOnScreen;
    _Bool _subviewsHaveSpringAnimation;
    CASpringAnimation *_arrowsSpringAnimation;
    CASpringAnimation *_lockBodySpringAnimation;
    CASpringAnimation *_lockShackleSpringAnimation;
    double _originalHeight;
    double _originalWidth;
    double _yPosnAtToolTipTrigger;
    UIColor *_backgroundColor;
    UIColor *_blueColor;
    UIColor *_greyColor;
    UIImageView *_lockBody;
    UIImageView *_lockBodyMask;
    UIImageView *_lockShackle;
    UIImageView *_slideArrow;
    WATooltipView *_ttv;
    double _stopPosition;
}

@property(nonatomic) double stopPosition; // @synthesize stopPosition=_stopPosition;
- (void).cxx_destruct;
- (void)stopAnimatingLockView;
- (void)performLockingAnimation;
- (void)performSlidingUpAnimationAtShiftPosition:(double)arg1;
- (void)startAnimatingLockViewAppearing;
- (void)doNotShowToolTip;
- (void)showToolTip;
- (void)prepareForLockingAnimations;
- (void)prepareForStartingAnimations;
- (void)removeSpringAnimationsFromSubviews;
- (void)addSpringAnimationsToSubViews;
- (id)createSpringAnimationFrom:(double)arg1 To:(double)arg2;
- (void)adjustViewForShiftPosition:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 stopPosition:(double)arg2;

@end

