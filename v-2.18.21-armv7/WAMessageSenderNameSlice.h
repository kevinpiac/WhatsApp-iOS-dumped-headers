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
    BOOL _hasBubbleBackground;
}

+ (Class)viewClass;
@property(readonly, nonatomic) BOOL hasBubbleBackground; // @synthesize hasBubbleBackground=_hasBubbleBackground;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets bubbleBackgroundInsets;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(float)arg1;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_c67131ad)arg2;

@end

