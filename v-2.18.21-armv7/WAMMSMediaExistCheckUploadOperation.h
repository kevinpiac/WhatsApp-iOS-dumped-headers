//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, WAMMSBaseTask, WAMMSMediaExistCheckUploadOperationRequest, WAMMSTaskDescription, WAMMSTaskSession, WamEventMediaUpload;
@protocol OS_dispatch_queue, WAMMSMediaExistCheckUploadOperationDelegate;

@interface WAMMSMediaExistCheckUploadOperation : NSObject
{
    WAMMSMediaExistCheckUploadOperationRequest *_request;
    unsigned int _currentRetryCount;
    WAMMSTaskSession *_taskSession;
    id <WAMMSMediaExistCheckUploadOperationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    WAMMSBaseTask *_currentTask;
    NSError *_error;
    BOOL _isTerminalError;
    WAMMSTaskDescription *_commonMMSTaskDescription;
    // Error parsing type: AI, name: _currentPhase
    BOOL _existsOnServer;
    NSString *_downloadURL;
    NSString *_directPath;
    double _startTime;
    WamEventMediaUpload *_uploadEvent;
    NSError *_uploadError;
}

+ (BOOL)generateFromError:(id)arg1 httpResponse:(id)arg2 uploadEventResult:(int *)arg3 finalError:(out id *)arg4 terminal:(char *)arg5;
@property(retain) NSError *uploadError; // @synthesize uploadError=_uploadError;
- (void).cxx_destruct;
- (void)setAndRunCompletionPhaseWithError:(id)arg1 httpResponse:(id)arg2;
- (void)performCompletionPhase;
- (void)performExistCheckPhase;
- (void)runPhase;
@property unsigned int currentPhase;
@property(readonly) WAMMSMediaExistCheckUploadOperationRequest *request;
- (void)cancel;
- (void)resume;
- (id)initWithRequest:(id)arg1 mmsSession:(id)arg2 queue:(id)arg3 delegate:(id)arg4;

@end

