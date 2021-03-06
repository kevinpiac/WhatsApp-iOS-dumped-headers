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
    unsigned long long _mediaTypes;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_fetchResult;
    ALAssetsGroup *_assetsGroup;
    _Bool _useReverseOrderForCollectionView;
    NSArray *_assets;
}

+ (id)sortedAssetCollectionsWithCollections:(id)arg1;
+ (void)fetchAllCollectionsForMediaTypes:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchUserLibraryCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)fetchAllAssetsFromAssetsGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool useReverseOrderForCollectionView; // @synthesize useReverseOrderForCollectionView=_useReverseOrderForCollectionView;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (long long)indexOfCollectionViewMediaPickerAsset:(id)arg1;
- (id)collectionViewMediaPickerAssetAtIndex:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfVideos;
- (long long)numberOfPhotos;
- (_Bool)canQueryCountOfMediaType;
- (void)storeCountOfVideosInCameraRoll:(long long)arg1;
- (void)storeCountOfPhotosInCameraRoll:(long long)arg1;
- (void)storePhotoLibraryStatsIfNeeded;
- (void)stopCachingThumbnailsOfPixelSize:(struct CGSize)arg1 inRange:(struct _NSRange)arg2;
- (void)startCachingThumbnailsOfPixelSize:(struct CGSize)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)updateWithChangeInstance:(id)arg1;
- (id)phAssetAtIndex:(long long)arg1;
- (void)fetchAssetsFromPhotosFrameworkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAssetsFromAssetsLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIImage *posterImage;
@property(readonly, nonatomic) id localIdentifier;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, nonatomic) long long assetCount;
@property(readonly, nonatomic) long long estimatedAssetCount;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (id)fetchResultsForAssetsWithMediaTypes:(unsigned long long)arg1 inCollection:(id)arg2;
@property(readonly, nonatomic) PHFetchResult *fetchResult;
- (id)initWithAssetsGroup:(id)arg1 mediaTypes:(unsigned long long)arg2;
- (id)initWithAssetCollection:(id)arg1 mediaTypes:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

