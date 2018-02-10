//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPageableItemView.h"

@class UIImageView, UIView, WAAutoPlayVideoPlayerView, WACircularProgressView, WAMediaTransferProgressView, WAMultiSendPlaceholder;

@interface WAPageablePlaceholderItemView : WAPageableItemView
{
    UIView *_previewView;
    UIImageView *_placeholderImageView;
    WAAutoPlayVideoPlayerView *_videoPlayer;
    WAMultiSendPlaceholder *_currentMediaItem;
    WACircularProgressView *_progressView;
    WAMediaTransferProgressView *_downloadProgressView;
    UIView *_progressBackgroundView;
    BOOL _failed;
}

- (void).cxx_destruct;
- (void)multiSendMediaItemDidUpdateContent:(id)arg1;
- (void)multiSendGIFDidUpdateProgress:(id)arg1;
- (void)pause;
- (void)configureWithItem:(id)arg1;
- (void)prepareForReuse;
- (id)containerView;
- (id)contentView;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (struct CGRect)fittedRectForAspectRatio:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
