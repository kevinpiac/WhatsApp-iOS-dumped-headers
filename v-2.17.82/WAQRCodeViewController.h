//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class UIImage, UIImageView;

@interface WAQRCodeViewController : WAViewController
{
    UIImage *_image;
    UIImageView *_imageView;
}

+ (void)presentShareControllerForImage:(id)arg1 text:(id)arg2 caption:(id)arg3 fromController:(id)arg4;
+ (id)controllerWithImage:(id)arg1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)shareCodeAction:(id)arg1;
- (void)viewDidLoad;

@end

