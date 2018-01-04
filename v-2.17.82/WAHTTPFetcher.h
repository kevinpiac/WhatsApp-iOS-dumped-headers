//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSData, NSMutableDictionary, NSString, NSURLRequest, NSURLSession, NSURLSessionTask, WACertPinning;

@interface WAHTTPFetcher : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_urlSession;
    NSURLSessionTask *_urlSessionTask;
    BOOL _cancelled;
    BOOL _reportPinnedCertificateFailure;
    BOOL _overrideUserAgent;
    NSURLRequest *_request;
    NSData *_postData;
    WACertPinning *_pinnedCertificate;
    NSMutableDictionary *_additionalHTTPHeaderFields;
    CDUnknownBlockType _completionHandler;
}

+ (id)httpErrorForStatusCode:(int)arg1;
+ (id)fetcherWithURLString:(id)arg1;
+ (id)fetcherWithURL:(id)arg1;
+ (id)fetcherWithRequest:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSMutableDictionary *additionalHTTPHeaderFields; // @synthesize additionalHTTPHeaderFields=_additionalHTTPHeaderFields;
@property(nonatomic) BOOL overrideUserAgent; // @synthesize overrideUserAgent=_overrideUserAgent;
@property(nonatomic) BOOL reportPinnedCertificateFailure; // @synthesize reportPinnedCertificateFailure=_reportPinnedCertificateFailure;
@property(retain, nonatomic) WACertPinning *pinnedCertificate; // @synthesize pinnedCertificate=_pinnedCertificate;
@property(copy) NSData *postData; // @synthesize postData=_postData;
@property(readonly, copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)invokeCompletionHandlerWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopFetching;
- (void)beginFetchOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
