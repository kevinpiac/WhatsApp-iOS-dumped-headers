//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSString, NSURL, NSURLSessionDownloadTask, PHAsset, UIImage, WACloudMediaDownloadManager;

@interface WACloudMediaDownloadRequest : NSObject
{
    UIImage *_highResolutionImage;
    int _imageRequestID;
    NSURL *_cachedBaseFileURL;
    NSURL *_localFileURL;
    id _assetContent;
    BOOL _isMediaForStatus;
    NSURL *_fileURL;
    NSError *_error;
    float _progress;
    id _info;
    WACloudMediaDownloadManager *_manager;
    PHAsset *_phAsset;
    NSURLSessionDownloadTask *_downloadTask;
    NSURL *_remoteURL;
    NSData *_resumeData;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    unsigned int _requestState;
}

@property(nonatomic) BOOL isMediaForStatus; // @synthesize isMediaForStatus=_isMediaForStatus;
@property(nonatomic) unsigned int requestState; // @synthesize requestState=_requestState;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;
@property(readonly, copy, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(readonly, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(nonatomic) __weak WACloudMediaDownloadManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) id info; // @synthesize info=_info;
@property(readonly, nonatomic) UIImage *highResolutionImage; // @synthesize highResolutionImage=_highResolutionImage;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)didDownloadRemoteURLTo:(id)arg1 preferredExtension:(id)arg2;
- (void)didFinishDownloadWithError:(id)arg1;
- (void)didFinishRequest;
- (void)cancel;
- (void)resume;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, nonatomic) BOOL isAssetCloudPlaceholder;
@property(readonly, copy, nonatomic) NSString *identifier;
- (int)reallyRequestAssetFromPhotosLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestAssetFromPhotosLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unload;
- (void)resetState;
@property(readonly, nonatomic, getter=isContentAvailable) BOOL contentAvailable;
@property(readonly, nonatomic) NSData *GIFData;
@property(readonly, nonatomic) UIImage *image;
- (id)existingCachedFileURLWithBaseURL:(id)arg1;
- (id)initWithPHAsset:(id)arg1;

@end

