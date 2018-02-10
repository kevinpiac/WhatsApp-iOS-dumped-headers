//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLKView, WASampleBufferRenderer;
@protocol WASampleBufferDisplayViewDelegate;

@interface WASampleBufferDisplayViewRenderer : NSObject
{
    GLKView *_view;
    WASampleBufferRenderer *_sampleBufferRenderer;
    struct opaqueCMBufferQueue *_bufferQueue;
    CDStruct_1b6d18a9 _lastFramePresentationTimeStamp;
    struct OpaqueCMTimebase *_timebase;
    id <WASampleBufferDisplayViewDelegate> _sampleBufferDisplayViewDelegate;
}

@property(nonatomic) __weak id <WASampleBufferDisplayViewDelegate> sampleBufferDisplayViewDelegate; // @synthesize sampleBufferDisplayViewDelegate=_sampleBufferDisplayViewDelegate;
- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)copyLatestSampleBufferToUseAtTime:(CDStruct_1b6d18a9)arg1;
- (void)redraw:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 queue:(struct opaqueCMBufferQueue *)arg2 timebase:(struct OpaqueCMTimebase *)arg3;

@end
