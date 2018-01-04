//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSMutableSet, NSString, NSURL, NSURLSession, WAWebPageHeaderTask, WAWebPageImageTask, WAWebPageMetadata, WAWebPageTask, WamEventIphoneLinkMetadataFetch;

@interface WAWebPageReader : NSObject <NSURLSessionDataDelegate>
{
    WAWebPageTask *_currentTask;
    WAWebPageHeaderTask *_headerFetchTask;
    WAWebPageImageTask *_imageFetchTask;
    CDUnknownBlockType _handler;
    int _handlerInvocationCount;
    NSURLSession *_session;
    WAWebPageMetadata *_metadata;
    NSMutableSet *_cancelledURLTaskIdentifiers;
    WamEventIphoneLinkMetadataFetch *_fieldStatsEvent;
    BOOL _externalQuery;
    NSURL *_webURL;
    struct CGSize _preferredImageSize;
}

+ (id)responseMIMETypeFromContentType:(id)arg1;
+ (BOOL)imageURLSupported:(id)arg1;
+ (id)bestImageURLWithOldURL:(id)arg1 newURL:(id)arg2;
+ (BOOL)stringEncoding:(out unsigned int *)arg1 fromByteOrderMarkingInData:(id)arg2;
+ (id)stringFromData:(id)arg1 withSuggestedEncodings:(id)arg2 usedEncoding:(out unsigned int *)arg3 failedSuggestedEncodings:(out id *)arg4;
+ (id)URLRequestWithURL:(id)arg1 timeout:(double)arg2 contentRange:(struct _NSRange)arg3;
+ (id)URLRequestWithURL:(id)arg1 timeout:(double)arg2;
+ (void)initialize;
@property BOOL externalQuery; // @synthesize externalQuery=_externalQuery;
@property(nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property(readonly, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
- (void).cxx_destruct;
- (id)webPageTaskFromDataTask:(id)arg1;
- (BOOL)shouldIgnoreResponseForTask:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)recordFieldStatsHeaderFetchErrorCode:(int)arg1;
- (void)recordFieldStatsImageFetchErrorCode:(int)arg1;
- (void)recordFieldStatsImageURLTypeFetched:(BOOL)arg1;
- (void)recordFieldStatsPartialResponseReceivedForWebPageTask:(id)arg1;
- (void)recordFieldStatsImageSizeLimitReached;
- (void)recordFieldStatsUsingNumberOfBytesToEndOfHeader:(unsigned int)arg1;
- (void)cleanUp;
- (void)failWithError:(id)arg1 forTask:(id)arg2;
- (void)cancel;
- (BOOL)shouldCancelImageFetchTaskContentTooLargeForResponse:(id)arg1;
- (BOOL)shouldCancelHeaderFetchTaskWithoutHTMLForResponse:(id)arg1;
- (void)handleNonHTMLResponse:(id)arg1;
- (void)handleErrorDownloadingImage:(id)arg1;
- (void)imageDownloadFinishedWithImage:(id)arg1 forMetadata:(id)arg2;
- (void)doneDownloadingImage;
- (void)handleImageData:(id)arg1;
- (void)fetchImageInMetadata;
- (void)tryNextImageURLIfPossible;
- (void)retryMetadataFetchWithoutContentRange;
- (void)completeReadingWithMetadata:(id)arg1;
- (void)doneDownloadingHtml;
- (void)processFoundImageTypes:(id)arg1;
- (void)parseHTMLData:(id)arg1 requestUrl:(id)arg2 responseUrl:(id)arg3 encoding:(unsigned int)arg4 authoritativeEncoding:(BOOL)arg5;
- (void)handleHtmlData:(id)arg1;
- (void)startMetadataRequestUsingContentRange:(BOOL)arg1;
- (void)loadMetadataWithResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

