//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageTextWithImageSliceView.h"

@class UIImageView, WAMediaPlayerPlayButtonView, WAMessageYoutubeSlice;

@interface WAMessageYoutubeSliceView : WAMessageTextWithImageSliceView
{
    WAMediaPlayerPlayButtonView *_playButtonView;
    UIImageView *_watermarkView;
    UIImageView *_videoThumbView;
}

+ (_Bool)pairsWithQuickForwardButton;
+ (_Bool)supportsPreviewing;
@property(readonly, nonatomic) UIImageView *videoThumbView; // @synthesize videoThumbView=_videoThumbView;
- (void).cxx_destruct;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (void)fetchImageWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageYoutubeSlice *slice; // @dynamic slice;

@end

