//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WAVideoScrubberThumbnailBar;

@protocol WAVideoScrubberThumbnailBarDataSource <NSObject>
- (struct CGSize)videoScrubberThumbnailBarThumbnailAspectRatio:(WAVideoScrubberThumbnailBar *)arg1;
- (void)videoScrubberThumbnailBar:(WAVideoScrubberThumbnailBar *)arg1 videoFramesAtTimes:(NSArray *)arg2 size:(struct CGSize)arg3 tolerance:(CDStruct_1b6d18a9)arg4 block:(void (^)(struct, UIImage *))arg5;
@end

