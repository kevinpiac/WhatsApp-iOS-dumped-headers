//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WAWallpaperImageViewDelegate-Protocol.h"

@class NSArray, NSString, UIImageView, UIScrollView, UIView;

@interface WAWallpaperPickerViewController : WAViewController <WAWallpaperImageViewDelegate>
{
    UIScrollView *_scrollView;
    NSArray *_imageViews;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    struct CGPoint _contentOffsetAtStartOfRotation;
    _Bool _disableImageRelayout;
    long long _pickerMode;
}

@property(nonatomic) long long pickerMode; // @synthesize pickerMode=_pickerMode;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)snapshot;
- (void)selectImage:(id)arg1;
- (void)userDidSelectWallpaperImageView:(id)arg1;
- (void)loadAllColors;
- (void)loadAllImages;
- (void)layoutAllPreviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

