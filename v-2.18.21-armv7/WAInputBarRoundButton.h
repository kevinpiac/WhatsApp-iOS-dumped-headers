//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, UIColor, WACircleView;

@interface WAInputBarRoundButton : UIButton
{
    WACircleView *_circleView;
    WACircleView *_strokeCircleView;
    NSMutableDictionary *_circleColors;
}

+ (id)button;
- (void).cxx_destruct;
- (void)updateCircleColor;
- (void)setCircleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
@property(retain, nonatomic) UIColor *outerStrokeColor;
- (void)layoutSubviews;
@property(nonatomic) float circleDiameter;
- (id)initWithFrame:(struct CGRect)arg1;

@end

