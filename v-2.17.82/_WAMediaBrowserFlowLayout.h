//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet, WAMediaBrowserCollectionViewCell;

@interface _WAMediaBrowserFlowLayout : UICollectionViewFlowLayout
{
    NSMutableSet *_indexPathsToDelete;
    NSMutableSet *_indexPathsToInsert;
    WAMediaBrowserCollectionViewCell *_visibleCell;
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (id)init;

@end

