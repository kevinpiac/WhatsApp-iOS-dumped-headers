//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAUpgradeCallback-Protocol.h"

@class NSCache, NSMutableSet, NSOperationQueue, NSString, WAChatStorage;
@protocol OS_dispatch_queue;

@interface WAProfilePictureManager : NSObject <WAUpgradeCallback>
{
    NSMutableSet *_pendingGetFullsizeRequests;
    NSMutableSet *_pendingGetThumbnailRequests;
    NSCache *_profilePictureCache;
    NSObject<OS_dispatch_queue> *_profilePictureDispatchQueue;
    NSOperationQueue *_profilePictureOperationQueue;
    WAChatStorage *_chatStorage;
    NSString *_storageDirectory;
}

+ (void)moveAllPicturesFromDirectory:(id)arg1 toDirectory:(id)arg2;
+ (id)thumbnailFromProfilePicture:(id)arg1;
+ (id)fullPathToProfilePictureThumbnailForJID:(id)arg1;
+ (id)thumbnailFilenameForJID:(id)arg1;
+ (id)groupPicturePlaceholder;
+ (id)personalPicturePlaceholder;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (_Bool)isProfilePictureValid:(id)arg1;
+ (id)previewImageFromProfilePicture:(id)arg1;
+ (id)jpegDataForProfilePicturePreview:(id)arg1;
+ (id)jpegDataForProfilePicture:(id)arg1;
+ (void)fireProfilePictureChangedNotificationForJID:(id)arg1;
+ (void)disallowProfilePictureRequests;
+ (_Bool)profilePictureRequestsAllowed;
@property(readonly, copy, nonatomic) NSString *storageDirectory; // @synthesize storageDirectory=_storageDirectory;
@property(readonly, nonatomic) WAChatStorage *chatStorage; // @synthesize chatStorage=_chatStorage;
- (void).cxx_destruct;
- (id)bestAvailablePictureWithRelativeFilePath:(id)arg1 returningFullsizeImageAvailability:(_Bool *)arg2;
- (void)saveProfilePictureThumbnailImageData:(id)arg1 forJid:(id)arg2;
- (void)saveProfilePictureThumbnailPlaceholderForJID:(id)arg1;
- (void)saveProfilePictureThumbnail:(id)arg1 forJID:(id)arg2;
- (id)profilePictureThumbnailForJID:(id)arg1 requestDate:(id)arg2;
- (id)profilePictureThumbnailExtForJID:(id)arg1;
- (void)waitForSubmittedBlocks;
- (id)dispatchAsyncBlock:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (id)fetchOrAddProfilePictureItemForJid:(id)arg1 inChatContext:(id)arg2;
- (id)profilePictureThumbnailImplForJID:(id)arg1;
- (id)bestAvailablePictureForJID:(id)arg1 isFullSized:(_Bool *)arg2;
- (void)asyncProfilePictureThumbnailForJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)syncProfilePictureThumbnailForJID:(id)arg1;
- (id)loadCachedProfilePictureThumbnailForJID:(id)arg1;
- (_Bool)hasCachedNonDefaultProfilePictureForJID:(id)arg1;
- (id)cachedProfilePictureThumbnailForJID:(id)arg1;
- (void)prefetchProfilePictureThumbnailForJIDs:(id)arg1;
- (void)performBackgroundChatContextBlockAndWait:(CDUnknownBlockType)arg1;
- (id)initWithChatStorage:(id)arg1 storageDirectory:(id)arg2;
- (void)fieldstatDownloadEventResult:(id)arg1 error:(id)arg2 elapsedTime:(double)arg3 pictureChanged:(_Bool)arg4 thumbnail:(_Bool)arg5;
- (void)processIncomingPictureNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllProfilePictureItems;
- (void)deleteProfilePictureThumbnailForJID:(id)arg1;
- (void)deleteAllCachedThumbnails;
- (void)markProfilePictureAsNeedingUpdateForJID:(id)arg1;
- (void)resetProfilePictureThumbnailCacheForJID:(id)arg1;
- (void)reuploadMyProfilePictureOnlyIfNeeded:(_Bool)arg1;
- (void)requestMyProfilePictureIfNeeded;
- (void)deleteMyProfilePicture;
- (void)saveMyProfilePicture:(id)arg1;
- (void)saveMyProfilePictureData:(id)arg1 thumbnailData:(id)arg2;
- (id)myProfilePictureThumbnailData;
- (id)myProfilePictureData;
- (id)myProfilePictureThumbnail;
- (id)myProfilePictureReturningFullsizeImageAvailability:(_Bool *)arg1;
- (id)fullpathToMyProfilePicture;
- (void)deleteProfilePictureForJID:(id)arg1;
- (void)deleteProfilePictureForJID:(id)arg1 withOriginalPath:(id)arg2;
- (void)deletePictureOfType:(unsigned long long)arg1 atRelativePath:(id)arg2;
- (id)saveImageData:(id)arg1 forPictureOfType:(unsigned long long)arg2 withFilename:(id)arg3;
- (void)migrateDataForTemporaryProfilePictureFromJID:(id)arg1 toJID:(id)arg2;
- (void)deleteTemporaryGroupPictureForJID:(id)arg1;
- (id)temporaryGroupPictureForJID:(id)arg1;
- (void)storeTemporaryGroupPicture:(id)arg1 forTemporaryGroupJID:(id)arg2;
- (void)requestProfilePictureDeleteForJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestProfilePictureDeleteForJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestProfilePictureSetForJID:(id)arg1 withPictureData:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestProfilePictureSetForJID:(id)arg1 withPictureData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestProfilePictureSetForJID:(id)arg1 picture:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processPictureChangeNotificationForContactWithJID:(id)arg1 pictureIdentifier:(id)arg2 timestamp:(id)arg3;
- (void)processPictureChangeNotificationForGroupWithJID:(id)arg1 pictureIdentifier:(id)arg2 changeAuthorJID:(id)arg3 timestamp:(id)arg4;
- (_Bool)hasPendingGetFullsizeRequestForJID:(id)arg1;
- (id)savePictureData:(id)arg1 pictureType:(unsigned long long)arg2 pictureID:(id)arg3 forJID:(id)arg4;
- (void)requestFullSizedProfilePictureForJIDImpl:(id)arg1 unconditionallyFetchPictureData:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestFullSizedProfilePictureForJID:(id)arg1 unconditionallyFetchPictureData:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestProfilePictureThumbnailImplForJID:(id)arg1 onlyIfNecessary:(_Bool)arg2;
- (void)requestProfilePictureThumbnailForJID:(id)arg1 onlyIfNecessary:(_Bool)arg2;
- (void)performAfterInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

