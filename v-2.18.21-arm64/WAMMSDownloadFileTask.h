//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSBaseTask.h"

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSError, NSObject, NSString, WAMMSDownloadFileTaskMetrics;
@protocol OS_dispatch_queue;

@interface WAMMSDownloadFileTask : WAMMSBaseTask <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSString *_destinationFilePath;
    NSObject<OS_dispatch_queue> *_internalQueue;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _progressHandler;
    _Bool _cellularAllowed;
    long long _entityLength;
    long long _downloadedSize;
    struct __sFILE *_fileOutputStream;
    NSError *_error;
    WAMMSDownloadFileTaskMetrics *_downloadMetrics;
    double _firstDataDelegateCallbackTime;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (_Bool)shouldCancel;
- (id)createURLSessionTaskWithBaseRequest:(id)arg1 MMSSession:(id)arg2;
- (void)failedToStartWithError:(id)arg1;
- (void)finishWithResponse:(id)arg1 error:(id)arg2;
- (id)initWithSession:(id)arg1 taskDescription:(id)arg2 cellularAllowed:(_Bool)arg3 destinationFilePath:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

