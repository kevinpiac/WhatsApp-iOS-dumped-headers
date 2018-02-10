//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WAGimmickPickerViewConfiguring-Protocol.h"
#import "WAStickerCategoriesFlowLayoutDelegate-Protocol.h"

@class NSArray, NSDictionary, NSFetchedResultsController, NSIndexPath, NSString, UIActivityIndicatorView, UICollectionView, UILabel;
@protocol WAStickerPickerManagerDelegate;

@interface WAStickerPickerManager : NSObject <NSFetchedResultsControllerDelegate, WAGimmickPickerViewConfiguring, UICollectionViewDelegate, UICollectionViewDataSource, WAStickerCategoriesFlowLayoutDelegate>
{
    NSDictionary *_categoryToManagedStickerMap;
    UICollectionView *_contentCollectionView;
    UICollectionView *_categoryCollectionView;
    NSArray *_fixedCategories;
    NSArray *_managedStickerPacks;
    NSIndexPath *_currentCategory;
    _Bool _emotionCategoriesExpanded;
    unsigned long long _emotionCategoriesChangedCount;
    NSFetchedResultsController *_recentStickersFetchedResultsController;
    NSFetchedResultsController *_starredStickersFetchedResultsController;
    id <WAStickerPickerManagerDelegate> _delegate;
    UIActivityIndicatorView *_loadingView;
    UILabel *_placeholderView;
}

@property(retain, nonatomic) UILabel *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <WAStickerPickerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)contentBackgroundViewForCategory:(id)arg1;
- (id)currentStickerWithIndex:(unsigned long long)arg1;
- (id)currentStickers;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)stickerCategoriesFlowLayoutCategoriesCount:(id)arg1;
- (struct CGRect)stickerCategoriesFlowLayoutNonExpandedDecorationFrame:(id)arg1;
- (struct CGRect)stickerCategoriesFlowLayoutExpandedDecorationFrame:(id)arg1;
- (id)stickerCategoriesFlowLayoutTriggeringIndexPath:(id)arg1;
- (void)stickerCategoriesFlowLayoutFinalizedUpdates:(id)arg1;
- (_Bool)stickerCategoriesFlowLayoutShouldAddDecoration:(id)arg1;
- (_Bool)stickerCategoriesFlowLayout:(id)arg1 shouldProcessFinalLayoutWithIndexPath:(id)arg2;
- (_Bool)stickerCategoriesFlowLayout:(id)arg1 shouldProcessInitialLayoutWithIndexPath:(id)arg2;
- (id)currentContentBackgroundView;
- (id)contentCollectionViewLayoutForCollectionView:(id)arg1;
- (id)categoryCollectionViewLayoutForCollectionView:(id)arg1;
- (id)GIFButtonTintColor;
- (id)stickerButtonTintColor;
- (_Bool)shouldShowLeftButton;
- (_Bool)shouldShowRightButton;
- (void)updateEmotionCategoryRow:(unsigned long long)arg1 withEmotion:(unsigned long long)arg2;
- (void)updateStickerPacks;
- (void)didChangeStickerPacksWithNotification:(id)arg1;
- (void)dealloc;
- (void)initializeStickerPack;
- (void)initializeEmotionCategoryStickers;
- (void)initializeStarredStickers;
- (void)initializeRecentStickers;
- (id)initWithContentCollectionView:(id)arg1 categoryCollectionView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

