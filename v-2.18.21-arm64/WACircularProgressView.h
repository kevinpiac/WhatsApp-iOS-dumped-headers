//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WACircularProgressView : UIView
{
    double _barWidth;
    UIColor *_progressColor;
    UIColor *_trackColor;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIColor *trackColor; // @synthesize trackColor=_trackColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)barColor;
- (void)setProgress:(float)arg1 withAnimationDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
@property(nonatomic) float progress;
- (float)presentationValueForProgress;
- (id)initWithFrame:(struct CGRect)arg1;

@end
