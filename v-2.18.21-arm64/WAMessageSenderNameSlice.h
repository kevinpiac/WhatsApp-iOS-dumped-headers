//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class WAMessageSenderNameSliceRenderer;

@interface WAMessageSenderNameSlice : WAMessageContainerSlice
{
    WAMessageSenderNameSliceRenderer *_renderer;
    _Bool _hasBubbleBackground;
}

+ (Class)viewClass;
@property(readonly, nonatomic) _Bool hasBubbleBackground; // @synthesize hasBubbleBackground=_hasBubbleBackground;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets bubbleBackgroundInsets;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(double)arg1;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2;

@end

