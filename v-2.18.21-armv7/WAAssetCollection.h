//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"

@class ALAssetsGroup, NSArray, NSString, PHAssetCollection, PHFetchResult, UIImage;

@interface WAAssetCollection : NSObject <UICollectionViewDataSource>
{
    unsigned int _mediaTypes;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_fetchResult;
    ALAssetsGroup *_assetsGroup;
    BOOL _useReverseOrderForCollectionView;
    NSArray *_assets;
}

+ (id)sortedAssetCollectionsWithCollections:(id)arg1;
+ (void)fetchAllCollectionsForMediaTypes:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchUserLibraryCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)fetchAllAssetsFromAssetsGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL useReverseOrderForCollectionView; // @synthesize useReverseOrderForCollectionView=_useReverseOrderForCollectionView;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (int)indexOfCollectionViewMediaPickerAsset:(id)arg1;
- (id)collectionViewMediaPickerAssetAtIndex:(int)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfVideos;
- (int)numberOfPhotos;
- (BOOL)canQueryCountOfMediaType;
- (void)storeCountOfVideosInCameraRoll:(int)arg1;
- (void)storeCountOfPhotosInCameraRoll:(int)arg1;
- (void)storePhotoLibraryStatsIfNeeded;
- (void)stopCachingThumbnailsOfPixelSize:(struct CGSize)arg1 inRange:(struct _NSRange)arg2;
- (void)startCachingThumbnailsOfPixelSize:(struct CGSize)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)updateWithChangeInstance:(id)arg1;
- (id)phAssetAtIndex:(int)arg1;
- (void)fetchAssetsFromPhotosFrameworkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAssetsFromAssetsLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIImage *posterImage;
@property(readonly, nonatomic) id localIdentifier;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, nonatomic) int assetCount;
@property(readonly, nonatomic) int estimatedAssetCount;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (id)fetchResultsForAssetsWithMediaTypes:(unsigned int)arg1 inCollection:(id)arg2;
@property(readonly, nonatomic) PHFetchResult *fetchResult;
- (id)initWithAssetsGroup:(id)arg1 mediaTypes:(unsigned int)arg2;
- (id)initWithAssetCollection:(id)arg1 mediaTypes:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

