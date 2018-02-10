//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAPaintCanvasViewTransformProviding-Protocol.h"

@class NSString, UIImage, UIImageView, WAAutoPlayVideoPlayerView, WAMediaPlayer, WAPaintCanvas, WAPaintCanvasView;

@interface WAEditableImageCompositeView : UIView <WAPaintCanvasViewTransformProviding>
{
    UIImageView *_imageView;
    UIImageView *_overlayImageView;
    WAMediaPlayer *_mediaPlayer;
    WAAutoPlayVideoPlayerView *_autoPlayView;
    WAPaintCanvas *_paintCanvas;
    WAPaintCanvasView *_paintCanvasView;
}

@property(readonly, nonatomic) WAPaintCanvasView *paintCanvasView; // @synthesize paintCanvasView=_paintCanvasView;
@property(retain, nonatomic) WAPaintCanvas *paintCanvas; // @synthesize paintCanvas=_paintCanvas;
- (void).cxx_destruct;
- (void)destroyMediaPlayerElements;
@property(nonatomic, getter=isAutoPlayViewHidden) _Bool autoPlayViewHidden;
@property(readonly, nonatomic) WAAutoPlayVideoPlayerView *autoPlayView;
@property(readonly, nonatomic) WAMediaPlayer *mediaPlayer;
@property(readonly, nonatomic) UIImage *snapshotImage;
- (void)clearPaintCanvasView;
@property(retain, nonatomic) UIImage *overlayImage;
@property(retain, nonatomic) UIImage *image;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

