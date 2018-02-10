//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage, UIMotionEffectGroup, UIView;

@interface WAChatBackgroundImageView : UIImageView
{
    UIView *_overlayView;
    UIMotionEffectGroup *_parallaxEffect;
    int _displayMode;
}

@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *blurredWallpaperImage;
- (void)reloadWallpaper;
- (id)initWithFrame:(struct CGRect)arg1;

@end

