//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, UIColor;

@interface WAStarRatingControl : UIControl
{
    NSArray *_stars;
    float _margin;
}

+ (struct CGSize)preferredSizeForStarCount:(int)arg1 margin:(float)arg2;
@property(nonatomic) float margin; // @synthesize margin=_margin;
- (void).cxx_destruct;
- (void)updateValueWithTouch:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) int value;
@property(retain, nonatomic) UIColor *color;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithStarCount:(int)arg1;

@end
