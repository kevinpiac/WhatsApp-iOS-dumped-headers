//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAAssetManagerDelegate-Protocol.h"
#import "WAUpgradeCallback-Protocol.h"

@class NSArray, NSCache, NSString, WAAssetManager;

@interface WAWallpaperLibrary : NSObject <WAUpgradeCallback, WAAssetManagerDelegate>
{
    NSArray *_imagePaths;
    NSCache *_fullsizeImages;
    NSCache *_thumbnails;
    WAAssetManager *_assetManager;
    NSArray *_solidColors;
}

+ (void)uploadLogsForWallpaperReset;
+ (id)migrateFilename:(id)arg1;
+ (void)migrateExistingWallpaperWithFilename:(id)arg1;
+ (void)migrateWallpaper;
+ (void)upgradeWallpaperSettingsOnNewInstall:(BOOL)arg1;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (id)chatBackgroundColor;
+ (void)setSolidChatBackgroundColor:(id)arg1;
+ (BOOL)setCustomWallpaperImage:(id)arg1;
+ (BOOL)setCurrentWallpaperImage:(id)arg1;
+ (void)deleteChatBackgroundImageWithFilename:(id)arg1;
+ (id)chatWallpaperImage;
+ (id)defaultStockWallpaper;
+ (id)fullPathToCurrentWallpaperImage;
+ (struct CGSize)preferredDisplaySizeInPixelsForImageSize:(struct CGSize)arg1 inPortraitOrientation:(BOOL)arg2;
+ (struct CGSize)thumbnailSizeLandscape;
+ (struct CGSize)thumbnailSizePortrait;
+ (float)thumbnailSpacing;
+ (float)thumbnailSideMargin;
+ (id)sharedLibrary;
@property(readonly, nonatomic) NSArray *solidColors; // @synthesize solidColors=_solidColors;
- (void).cxx_destruct;
- (BOOL)assetManager:(id)arg1 shouldRetryFailedDownloadForAssetIdentifier:(id)arg2 error:(id)arg3 attemptCount:(unsigned int)arg4;
- (void)fetchFullsizeImageAtIndex:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchFullsizeCachedImageWithImagePath:(id)arg1;
- (void)fetchThumbnailForImageAtIndex:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)numberOfItems;
- (BOOL)setStockWallpaperWithIndex:(unsigned int)arg1;
- (BOOL)restoreDefaultWallpaper;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

