//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, WAShapeView, _WAPieView;
@protocol OS_dispatch_group;

@interface WAPieProgressView : UIView
{
    _WAPieView *_pieView;
    WAShapeView *_outerView;
    unsigned int _state;
    NSObject<OS_dispatch_group> *_animationDispatchGroup;
    struct CGRect _prevFrame;
    unsigned int _counter;
    float _progress;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)outerViewPathExpanded:(BOOL)arg1 scale:(float)arg2;
- (id)tweenableRectInRect:(struct CGRect)arg1 rounded:(BOOL)arg2;
- (id)baseOutlineInRect:(struct CGRect)arg1;
- (void)performFinishedAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performAppearAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performCancelAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)transitionToState:(unsigned int)arg1 forced:(BOOL)arg2;
- (void)transitionToState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

