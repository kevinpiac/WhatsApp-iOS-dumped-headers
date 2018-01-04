//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMMSMediaDownloadOperationDelegate-Protocol.h"

@class NSMutableDictionary, WASimpleOperationQueue;

@interface WAStickerMediaDownloadManager : NSObject <WAMMSMediaDownloadOperationDelegate>
{
    WASimpleOperationQueue *_mmsv4ExecutionQueue;
    NSMutableDictionary *_stickerToCompletionMap;
}

- (void).cxx_destruct;
- (void)downloadTask:(id)arg1 didFinishWithAsset:(id)arg2 error:(id)arg3 terminal:(BOOL)arg4;
- (void)downloadTask:(id)arg1 assetForDecryptedFile:(CDUnknownBlockType)arg2;
- (void)downloadTask:(id)arg1 didUpdateProgress:(double)arg2;
- (void)downloadSticker:(id)arg1;
- (id)operationDownloadingStickerIdentifier:(id)arg1;
- (void)downloadMediaForSticker:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

