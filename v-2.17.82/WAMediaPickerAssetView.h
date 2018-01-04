//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WAMediaPickerAsset, WAMediaPickerVideoAssetOverlayView, WAPieProgressView;

@interface WAMediaPickerAssetView : UIView
{
    UIImageView *_checkmarkImageView;
    UIView *_dimmingView;
    BOOL _isHighlighted;
    WAMediaPickerVideoAssetOverlayView *_videoOverlayView;
    WAPieProgressView *_progressView;
    BOOL _showsCheckmarkWhenSelected;
    BOOL _selected;
    BOOL _imageDimmed;
    UIImageView *_imageView;
    WAMediaPickerAsset *_mediaPickerAsset;
}

@property(nonatomic, getter=isImageDimmed) BOOL imageDimmed; // @synthesize imageDimmed=_imageDimmed;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) WAMediaPickerAsset *mediaPickerAsset; // @synthesize mediaPickerAsset=_mediaPickerAsset;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) BOOL showsCheckmarkWhenSelected; // @synthesize showsCheckmarkWhenSelected=_showsCheckmarkWhenSelected;
- (void).cxx_destruct;
- (void)mediaPickerAssetDidUpdateDownloadProgress:(id)arg1;
- (void)performSelectionRefusedAnimation;
- (id)accessibilityLabel;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)configureWithPHAsset:(id)arg1;
- (void)installProgressViewIfNeeded;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

