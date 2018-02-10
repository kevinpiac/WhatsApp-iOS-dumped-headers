//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WAGimmickPickerViewConfiguring-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSString, UIActivityIndicatorView, UICollectionView, UILabel, WAGIFSearch;
@protocol WAGIFPickerManagerDelegate;

@interface WAGIFPickerManager : NSObject <UICollectionViewDelegateFlowLayout, WAGimmickPickerViewConfiguring, UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_contentCollectionView;
    UICollectionView *_categoryCollectionView;
    NSArray *_localCategories;
    NSArray *_remoteCategories;
    NSIndexPath *_currentCategory;
    WAGIFSearch *_search;
    NSDictionary *_categoryToGIFsMap;
    NSDictionary *_categoryToContentOffsetMap;
    id <WAGIFPickerManagerDelegate> _delegate;
    UIActivityIndicatorView *_loadingView;
    UILabel *_placeholderView;
}

@property(retain, nonatomic) UILabel *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <WAGIFPickerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)currentContentBackgroundView;
- (id)categoryCollectionViewLayoutForCollectionView:(id)arg1;
- (id)contentCollectionViewLayoutForCollectionView:(id)arg1;
- (id)GIFButtonTintColor;
- (id)stickerButtonTintColor;
- (BOOL)shouldShowLeftButton;
- (BOOL)shouldShowRightButton;
- (void)loadNextBatchForCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadNextBatchIfNecessaryForIndexPath:(id)arg1;
- (BOOL)shouldTriggerLoadingNextBatchForIndexPath:(id)arg1;
- (BOOL)indexPathIsCloseToEndOfGIFContent:(id)arg1;
- (BOOL)reachedMaximumNumberOfBatches;
- (struct CGPoint)_contentOffsetForIndexPath:(id)arg1;
- (void)_rememberContentOffset:(struct CGPoint)arg1 forIndexPath:(id)arg2;
- (id)currentGIFCollection;
- (id)contentBackgroundViewForCategory:(id)arg1;
- (void)initializeRemoteGIFsForIndexPath:(id)arg1;
- (void)initializeLocalGIFs;
- (id)initWithContentCollectionView:(id)arg1 categoryCollectionView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

