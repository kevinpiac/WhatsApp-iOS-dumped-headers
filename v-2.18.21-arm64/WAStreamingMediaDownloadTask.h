//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSBaseTask.h"

@class NSObject;
@protocol OS_dispatch_queue, WAStreamingMediaDownloadTaskDelegate;

@interface WAStreamingMediaDownloadTask : WAMMSBaseTask
{
    id <WAStreamingMediaDownloadTaskDelegate> _delegate;
    struct _NSRange _requestRange;
    float _priority;
    _Bool _allowsCellularAccess;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _networkDownloadRequestStart;
}

@property(readonly, nonatomic) double networkDownloadRequestStart; // @synthesize networkDownloadRequestStart=_networkDownloadRequestStart;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)shouldCancel;
- (id)createURLSessionTaskWithBaseRequest:(id)arg1 MMSSession:(id)arg2;
- (void)failedToStartWithError:(id)arg1;
- (id)description;
- (void)cancel;
- (void)resume;
- (id)initWithTaskSession:(id)arg1 taskDescription:(id)arg2 requestRange:(struct _NSRange)arg3 priority:(float)arg4 allowsCellularAccess:(_Bool)arg5 delegate:(id)arg6 callbackQueue:(id)arg7;

@end

