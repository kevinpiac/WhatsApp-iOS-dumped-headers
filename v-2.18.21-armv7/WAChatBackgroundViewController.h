//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WABlurredBackgroundProviding-Protocol.h"

@class NSString, UIImage, UIImageView, WAChatBackgroundImageView;

@interface WAChatBackgroundViewController : WAViewController <WABlurredBackgroundProviding>
{
    WAChatBackgroundImageView *_wallpaperImageView;
}

+ (BOOL)needsWallpaperImageView;
@property(readonly, nonatomic) UIImageView *wallpaperImageView; // @synthesize wallpaperImageView=_wallpaperImageView;
- (void).cxx_destruct;
- (void)relayoutWallpaper;
- (id)imageForBlurredBackgroundEffect;
- (id)referenceImageViewForBlurredBackgroundEffect;
@property(readonly, nonatomic) UIImage *blurredWallpaperImage;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

