//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCapturePhotoCaptureDelegate-Protocol.h"

@class NSString, WACameraController;
@protocol OS_dispatch_group;

@interface WACameraStillPhotoRequest : NSObject <AVCapturePhotoCaptureDelegate>
{
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSString *_pathToFullImage;
    BOOL _isExecuting;
    BOOL _isMediaConsumed;
    int _videoOrientation;
    BOOL _isMirrored;
    int _flashMode;
    WACameraController *_cameraController;
    CDUnknownBlockType _shutterFiredBlock;
}

+ (BOOL)resetPendingPhotoCaptureRequests;
+ (BOOL)hasPendingPhotoCaptureRequests;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)fetchResponseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didFinishPhotoCaptureWithPathToFullImage:(id)arg1;
- (void)processPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)legacyCapturePhotoFromOutput:(id)arg1;
- (void)capturePhotoFromOutput:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)executeWithShutterFiredBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCameraController:(id)arg1 videoOrientation:(int)arg2 mirrored:(BOOL)arg3 flashMode:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

