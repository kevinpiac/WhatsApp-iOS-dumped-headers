//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAAssetManager, WAPersistentKeyValueStore, WAStickerMediaDownloadManager;
@protocol OS_dispatch_queue;

@interface WAStickerAssetManager : NSObject
{
    WAAssetManager *_assetManager;
    WAPersistentKeyValueStore *_keyValueStore;
    NSObject<OS_dispatch_queue> *_stickerQueue;
    WAStickerMediaDownloadManager *_downloadManager;
}

+ (id)stickerPackIdFromStickerImageFileWithPath:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)deleteLocalStickerStore;
- (id)stickerForFileHash:(id)arg1 stickerPackId:(id)arg2;
- (_Bool)setStickerFileHashAndPackId:(id)arg1 forEmotionKey:(id)arg2;
- (id)stickerFileHashAndStickerPackIdForEmotionKey:(id)arg1;
- (void)downloadStickerImageDataForSticker:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchStickers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchStickerImage:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertSticker:(id)arg1 forEmotionKey:(id)arg2;
- (void)insertSticker:(id)arg1 intoEmotionCategory:(unsigned long long)arg2;
- (id)managedStickersForEmotion:(unsigned long long)arg1;
- (void)fixWebPFileIfNeededWithPath:(id)arg1 forStickerPackId:(id)arg2;
- (_Bool)removeStickerPackFromMyStickerPacks:(id)arg1;
- (void)setMyStickerPacks:(id)arg1;
- (id)myStickerPacks;
- (id)addThirdPartyStickerPack:(id)arg1;
- (void)downloadFirstPartyStickerPack:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addStickerPackToMyStickerPacks:(id)arg1 stickers:(id)arg2 trayImageFilePath:(id)arg3 previewImageFilePath:(id)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchStickersForStickerPack:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)previewImageForId:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)previewImageForFilePath:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadHardCodedStickerPack:(id)arg1 stickers:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadStickerPack:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAllStickerPacksCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPreviewImageForStickerPack:(id)arg1 index:(unsigned long long)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchPreviewMainImageForStickerPack:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

