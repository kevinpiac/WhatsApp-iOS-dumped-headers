//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, EAGLContext, GLKView, WASampleBufferRenderer;
@protocol WACameraPreviewViewDelegate;

@interface WACameraPreviewView : UIView
{
    EAGLContext *_eaglContext;
    CADisplayLink *_displayLink;
    struct opaqueCMBufferQueue *_bufferQueue;
    struct CGSize _imageSize;
    int _pauseCounter;
    // Error parsing type: AB, name: _mediaServicesUnavailable
    WASampleBufferRenderer *_sampleBufferRenderer;
    int _sampleBufferPositionLock;
    int _lastSampleBufferPosition;
    int _dropSampleBuffersCounter;
    struct os_unfair_lock_s _enterBackgroundUnfairLock;
    int _enterBackgroundSpinLock;
    BOOL _willFinishGLCommandsAsynchronouslyFromMainThread;
    BOOL _stopSubmittingGLCommandsOnGLThread;
    BOOL _acceptingSampleBuffers;
    GLKView *_eaglView;
    id <WACameraPreviewViewDelegate> _delegate;
    struct CGSize _displayedImageSize;
}

@property(nonatomic, getter=isAcceptingSampleBuffers) BOOL acceptingSampleBuffers; // @synthesize acceptingSampleBuffers=_acceptingSampleBuffers;
@property(nonatomic) __weak id <WACameraPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGSize displayedImageSize; // @synthesize displayedImageSize=_displayedImageSize;
@property(readonly, nonatomic) GLKView *eaglView; // @synthesize eaglView=_eaglView;
- (void).cxx_destruct;
- (void)preventGLCrashLockUnlock;
- (BOOL)preventGLCrashLockTryLock;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1 mirrored:(BOOL)arg2;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1 mirrored:(BOOL)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)endPausingUpdate;
- (void)beginPausingUpdate;
@property(readonly, nonatomic, getter=isPaused) BOOL paused;
- (void)didMoveToWindow;
- (void)displaySampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)redraw:(id)arg1;
- (void)clear;
- (void)mediaServicesWereReset:(id)arg1;
- (void)mediaServicesWereLost:(id)arg1;
- (void)dropSampleBuffersUntilDevicePositionChangesToPosition:(int)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (void)dispatchToMainQueueSynchronouslyFromHighPriorityThread:(CDUnknownBlockType)arg1;
- (void)performBlockOnHighPriorityThreadIfPossible:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

