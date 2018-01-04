//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class UIImage, UIImageView, UIView, WAAutoPlayVideoPlayerView, WACircularProgressView, WAMediaPickerAsset, WAMultiSendMediaItem;

@interface WAQuickMediaPreviewViewController : WAViewController
{
    BOOL _viewLoaded;
    WACircularProgressView *_progressView;
    UIView *_progressBackgroundView;
    BOOL _selectedItemNeedsUpdate;
    WAMediaPickerAsset *_originalAsset;
    WAMultiSendMediaItem *_selectedItem;
    UIImage *_thumbnailImage;
    id _userInfo;
    UIImageView *_imageView;
    WAAutoPlayVideoPlayerView *_playerView;
}

@property(nonatomic) __weak WAAutoPlayVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) WAMultiSendMediaItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) WAMediaPickerAsset *originalAsset; // @synthesize originalAsset=_originalAsset;
- (void).cxx_destruct;
- (void)multiSendMediaItemDidUpdateContent:(id)arg1;
- (void)multiSendGIFDidUpdateProgress:(id)arg1;
- (id)previewActionItems;
- (void)viewDidLayoutSubviews;
- (void)updateSelectedItem;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end

