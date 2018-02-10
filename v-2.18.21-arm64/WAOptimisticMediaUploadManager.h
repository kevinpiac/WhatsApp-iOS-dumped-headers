//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAMediaUploader;

@interface WAOptimisticMediaUploadManager : NSObject
{
    WAMediaUploader *_mediaUploader;
    NSMutableDictionary *_optimisticMediaUploadItemForIdentifier;
    NSMutableDictionary *_optimisticMediaUploadItemForMessageIdentifier;
}

+ (_Bool)optimisticUploadsAvailable;
- (void).cxx_destruct;
- (void)submitFieldstatsForItem:(id)arg1 endState:(long long)arg2;
- (void)clearForItem:(id)arg1;
- (void)finishForItem:(id)arg1 message:(id)arg2 resultUsed:(_Bool)arg3 uploadEvent:(id)arg4;
- (void)finishForMessage:(id)arg1 resultUsed:(_Bool)arg2 uploadEvent:(id)arg3;
- (void)finishForMessage:(id)arg1 resultUsed:(_Bool)arg2;
- (void)stopAllOptimisticUploads;
- (void)stopPendingOptimisticUploads;
- (void)stopOptimisticUploadForMessage:(id)arg1;
- (id)operationForMessage:(id)arg1;
- (id)resultForMessage:(id)arg1;
- (void)uploadFailedForItemWithIdentifier:(id)arg1 error:(id)arg2 uploadEvent:(id)arg3;
- (void)uploadSucceededForItemWithIdentifier:(id)arg1 withResult:(id)arg2 uploadEvent:(id)arg3;
- (void)associateOptimisticMediaUploadItemWithIdentifier:(id)arg1 withMessage:(id)arg2;
- (void)stopOptimisticMediaUploadForItemWithIdentifier:(id)arg1;
- (void)startOptimisticMediaUploadAfterDelayForItem:(id)arg1;
- (void)startOptimisticMediaUploadForItem:(id)arg1;
- (void)stopMonitoringMediaItem:(id)arg1;
- (void)mediaItemDidUpdatePaintCanvasContent:(id)arg1;
- (void)mediaItemDidUpdatePreviewContent:(id)arg1;
- (void)stopOptimisticMediaUploadForMediaItem:(id)arg1 reason:(unsigned long long)arg2;
- (void)startOptimisticMediaUploadForMediaItem:(id)arg1 quality:(id)arg2 mediaPickerOrigin:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithMediaUploader:(id)arg1;

@end

