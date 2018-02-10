//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABackupInformation.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAUploadedBackup : WABackupInformation
{
    unsigned int _loadingCount;
    BOOL _cloudLoading;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_captureQueue;
}

@property(nonatomic, getter=isCloudLoading) BOOL cloudLoading; // @synthesize cloudLoading=_cloudLoading;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)resetCapturedUploadWithCompletion:(CDUnknownBlockType)arg1;
- (void)captureUploadWithPath:(id)arg1 sizeHint:(id)arg2;
- (void)applyHintIfNeeded:(id)arg1;
- (void)captureUploadWithPath:(id)arg1;
- (void)updateUploadWithPath:(id)arg1 sizeHint:(unsigned long long)arg2;
- (void)copyFromURL:(id)arg1;
- (void)updateCloudLoadingFromManager:(id)arg1;
- (void)cloudAccountLoadOverrideExpired:(id)arg1;
- (void)cloudAccountChanged:(id)arg1;
- (void)didFinishLoading;
- (void)stopLoading;
- (void)startLoading;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (BOOL)load;
- (void)dealloc;
- (id)initWithManager:(id)arg1 path:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

@end

