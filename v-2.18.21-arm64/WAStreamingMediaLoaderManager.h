//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "WAStreamingMediaLoaderDelegate-Protocol.h"

@class NSMapTable, NSMutableSet, NSString, NSURLSession;
@protocol WAStreamingMediaLoaderManagerDownloadDelegate;

@interface WAStreamingMediaLoaderManager : NSObject <NSURLSessionDelegate, WAStreamingMediaLoaderDelegate>
{
    NSMapTable *_loaders;
    NSMapTable *_delegates;
    NSMutableSet *_pending;
    id <WAStreamingMediaLoaderManagerDownloadDelegate> _downloadDelegate;
    NSURLSession *_urlSession;
}

+ (id)assetURLForMessage:(id)arg1;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) __weak id <WAStreamingMediaLoaderManagerDownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
- (void).cxx_destruct;
- (void)didUpdateDownloadProgressOfStreamingMediaLoader:(id)arg1;
- (void)didFailToLoadInStreamingMediaLoader:(id)arg1 error:(id)arg2;
- (void)didFinishLoadingInStreamingMediaLoader:(id)arg1;
- (void)streamingMediaLoaderDidRequestRemove:(id)arg1;
- (void)streamingMediaLoaderDidRequestAdd:(id)arg1;
- (void)streamingMediaLoader:(id)arg1 didRequestSetDataDelegate:(id)arg2 forTask:(id)arg3;
- (id)streamingMediaLoader:(id)arg1 dataTaskForRequest:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prefetchStreamingMediaInMessage:(id)arg1;
- (void)autoDownloadStreamingMediaInMessage:(id)arg1;
- (void)userDownloadStreamingMediaInMessage:(id)arg1;
- (void)setDataDelegate:(id)arg1 forTask:(id)arg2;
- (void)cancelDownloadForMessageWithKey:(id)arg1;
- (float)progressOfMessageDownloadWithKey:(id)arg1;
- (_Bool)isDownloadingMessageWithKey:(id)arg1;
- (id)existingLoaderForMessageKey:(id)arg1;
- (id)downloadProgressForMessage:(id)arg1;
- (id)thumbnailForMessageInfo:(id)arg1;
- (void)submitAndroidVideoStreamEventOfMessageUniqueKey:(id)arg1 forFirstPlayWithBufferingTime:(double)arg2;
- (id)assetForMessage:(id)arg1 options:(id)arg2;
- (id)newOrExistingLoaderForMessageInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
