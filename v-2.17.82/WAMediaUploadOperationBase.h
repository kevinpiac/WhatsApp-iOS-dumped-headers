//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "WAMediaUploadResult-Protocol.h"

@class NSData, NSError, NSMutableArray, NSSet, NSString;
@protocol WAMediaUploadOperationDelegate;

@interface WAMediaUploadOperationBase : NSOperation <WAMediaUploadResult>
{
    unsigned int _backgroundTask;
    double _logReportedTime;
    int _logReportedBytes;
    float _delegateReportedProgress;
    NSString *_logPrefix;
    BOOL _isStatusMedia;
    BOOL _forward;
    BOOL _reuploading;
    BOOL _imageLikeDocument;
    NSMutableArray *_itemsToUpload;
    id <WAMediaUploadOperationDelegate> _delegate;
    NSString *_mediaURL;
    NSString *_uploadPath;
    NSString *_serverHash;
    NSString *_fileHash;
    NSString *_encFileHash;
    NSData *_mediaKey;
    NSData *_streamingSidecar;
    int _mediaType;
    NSSet *_preferredRecipientsJids;
    NSSet *_extraRecipientsJids;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isImageLikeDocument) BOOL imageLikeDocument; // @synthesize imageLikeDocument=_imageLikeDocument;
@property(nonatomic, getter=isReuploading) BOOL reuploading; // @synthesize reuploading=_reuploading;
@property(nonatomic) BOOL forward; // @synthesize forward=_forward;
@property(copy, nonatomic) NSSet *extraRecipientsJids; // @synthesize extraRecipientsJids=_extraRecipientsJids;
@property(copy, nonatomic) NSSet *preferredRecipientsJids; // @synthesize preferredRecipientsJids=_preferredRecipientsJids;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSData *streamingSidecar; // @synthesize streamingSidecar=_streamingSidecar;
@property(copy, nonatomic) NSData *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(copy, nonatomic) NSString *encFileHash; // @synthesize encFileHash=_encFileHash;
@property(copy, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
@property(copy, nonatomic) NSString *serverHash; // @synthesize serverHash=_serverHash;
@property(copy, nonatomic) NSString *uploadPath; // @synthesize uploadPath=_uploadPath;
@property(copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) id <WAMediaUploadOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *itemsToUpload; // @synthesize itemsToUpload=_itemsToUpload;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)reportBytesSent:(long long)arg1;
- (void)didFailWithError:(id)arg1 terminal:(BOOL)arg2;
- (void)didFinish;
- (void)reportUploadProgressIfNeededWithTotalBytesWritten:(int)arg1 expectedSize:(unsigned long long)arg2;
- (void)resetReportedProgressValues;
- (id)logPrefixString;
- (void)logPrefixStringReset;
@property(readonly, copy, nonatomic) NSString *mediaPath;
@property(readonly, nonatomic) BOOL isMMS4;
- (BOOL)cancelUploadForItemWithUniqueID:(id)arg1;
- (void)dealloc;
- (id)initWithUploadOperationDelegate:(id)arg1 uploadable:(id)arg2;
- (id)initWithUploadOperationDelegate:(id)arg1 itemsToUpload:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

