//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAVideoScrubberPrecisionRangeSlider;

@protocol WAVideoScrubberPrecisionRangeSliderDelegate <NSObject>
- (void)videoScrubberPrecisionRangeSlider:(WAVideoScrubberPrecisionRangeSlider *)arg1 willPresentRangeFrom:(float)arg2 to:(float)arg3 around:(float)arg4 animationDuration:(double)arg5;
- (void)videoScrubberPrecisionRangeSlider:(WAVideoScrubberPrecisionRangeSlider *)arg1 mayPresentRangeFrom:(float)arg2 to:(float)arg3;
- (void)videoScrubberPrecisionRangeSliderDidEndDraggingHandle:(WAVideoScrubberPrecisionRangeSlider *)arg1;
- (void)videoScrubberPrecisionRangeSliderDidDragHandle:(WAVideoScrubberPrecisionRangeSlider *)arg1;
- (void)videoScrubberPrecisionRangeSliderDidBeginDraggingHandle:(WAVideoScrubberPrecisionRangeSlider *)arg1;
@end

