//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACroppedCircleView.h"

@class UIImageView, UIView;

@interface WACallOverlayUserView : WACroppedCircleView
{
    _Bool _videoVisible;
    UIImageView *_photoView;
    UIView *_videoView;
}

@property(nonatomic, getter=isVideoVisible) _Bool videoVisible; // @synthesize videoVisible=_videoVisible;
@property(readonly, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) UIImageView *photoView; // @synthesize photoView=_photoView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

