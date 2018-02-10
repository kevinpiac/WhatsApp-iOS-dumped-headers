//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UIImageView, UILabel, UIView;
@protocol WABlurredBackgroundProviding;

@interface WADateBubbleView : UITableViewHeaderFooterView
{
    UILabel *_titleLabel;
    UIView *_backgroundView;
    UIView *_maskView;
    UIImageView *_blurredBackgroundView;
    UIImageView *_highlightsImageView;
    _Bool _useBlurredBackground;
    float _buoyancy;
    id <WABlurredBackgroundProviding> _blurredBackgroundProvider;
    long long _sectionIndex;
    struct CGRect _toFrame;
}

+ (double)preferredHeight;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) float buoyancy; // @synthesize buoyancy=_buoyancy;
@property(nonatomic) __weak id <WABlurredBackgroundProviding> blurredBackgroundProvider; // @synthesize blurredBackgroundProvider=_blurredBackgroundProvider;
- (void).cxx_destruct;
- (void)fadeOutIfNeededWithAnimation:(_Bool)arg1;
- (void)fadeInWithAnimation:(_Bool)arg1;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

