//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaUploadOperationBase.h"

#import "NSStreamDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSData, NSDate, NSInputStream, NSMutableData, NSOutputStream, NSString, NSURLSessionTask, NSURLSessionTaskMetrics, WAMediaCipher, WAMediaEncUploadSessionWrapper;
@protocol WADeviceDate;

@interface WAMediaEncUploadOperation : WAMediaUploadOperationBase <NSStreamDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    BOOL _isExecuting;
    BOOL _isFinished;
    NSString *_uploadIp;
    NSMutableData *_receiveData;
    WAMediaCipher *_mediaCipher;
    NSDate<WADeviceDate> *_startDate;
    int _isTranscoded;
    int _uploadPhase;
    BOOL _newUpload;
    unsigned long long _fileSize;
    BOOL _didSendDataSuccessfully;
    unsigned int _retryCount;
    WAMediaEncUploadSessionWrapper *_sessionWrapper;
    NSURLSessionTaskMetrics *_taskMetrics;
    int _resumeOffset;
    double _networkResumeCheckTime;
    double _uploadURLFetchTime;
    double _uploadStartTime;
    double _lastWriteTime;
    double _responseWait;
    unsigned int _bytesWritten;
    BOOL _shouldHardLinkLocalMedia;
    BOOL _streamHasSpaceAvailable;
    NSURLSessionTask *_uploadTask;
    NSOutputStream *_producerStream;
    NSInputStream *_consumerStream;
    NSData *_currentBuffer;
    unsigned int _bufferOffset;
}

+ (void)promptUserIfNecessaryToTruncateVideoAt:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (BOOL)willTruncateMediaAt:(id)arg1 uploadingOnly:(unsigned long long *)arg2;
+ (id)plaintextHashForPath:(id)arg1;
@property(nonatomic) BOOL streamHasSpaceAvailable; // @synthesize streamHasSpaceAvailable=_streamHasSpaceAvailable;
@property(nonatomic) unsigned int bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(copy, nonatomic) NSData *currentBuffer; // @synthesize currentBuffer=_currentBuffer;
@property(retain, nonatomic) NSInputStream *consumerStream; // @synthesize consumerStream=_consumerStream;
@property(retain, nonatomic) NSOutputStream *producerStream; // @synthesize producerStream=_producerStream;
@property(retain, nonatomic) NSURLSessionTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property BOOL shouldHardLinkLocalMedia; // @synthesize shouldHardLinkLocalMedia=_shouldHardLinkLocalMedia;
- (void).cxx_destruct;
- (id)uploadURL;
- (BOOL)setStateForFallbackRetry;
- (id)plainHash;
- (id)recipientsRefs;
- (id)postBoundary;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)processNextUploadChunk;
- (void)uploadRequestFailedWithError:(id)arg1;
- (void)uploadRequestFinishedWithResult:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)handleUploadTaskCompletedSuccessfully;
- (void)handleUploadTaskFailedWithError:(id)arg1;
- (void)reportFieldStatsWithResult:(int)arg1 error:(id)arg2;
- (id)uploadError;
- (id)suffixData;
- (void)checkIfFileExistsOnServer;
- (void)checkServerPartialFile;
- (BOOL)shouldProceed;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)finish;
- (void)closeStreams;
- (void)startHTTPUploadFrom:(unsigned int)arg1;
- (void)fileIsReadyStartUpload;
- (void)start;
- (void)updateUploadablesWithNewPath:(id)arg1 mimeType:(id)arg2;
- (void)dealloc;
- (id)initWithUploadOperationDelegate:(id)arg1 itemsToUpload:(id)arg2 urlSessionWrapper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

