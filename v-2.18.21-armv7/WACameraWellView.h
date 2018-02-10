//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage, UIImageView, WAGradientView;

@interface WACameraWellView : UIView
{
    UIView *_wellContainer;
    WAGradientView *_gradientView;
    UIImageView *_imageView;
    NSMutableArray *_stackedViews;
    UIView *_topSlice;
    float _stackViewHeight;
    float _stackViewSeparation;
    int _currentValue;
    int _maximumValue;
}

@property(nonatomic) int maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) int currentValue; // @synthesize currentValue=_currentValue;
- (void).cxx_destruct;
- (void)reset;
- (id)newStackView;
- (void)animateInImageInWell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addImage:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIImage *image;
- (void)adjustImageViewToFit:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
