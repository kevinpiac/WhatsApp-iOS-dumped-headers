//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary, NSSet;

@interface WAMediaGalleryFlowLayout : UICollectionViewFlowLayout
{
    NSDictionary *_layoutAttributesForDeletedItems;
    NSSet *_deleteIndexPaths;
    NSSet *_insertIndexPaths;
}

+ (Class)layoutAttributesClass;
@property(copy, nonatomic) NSSet *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(copy, nonatomic) NSSet *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(copy, nonatomic) NSDictionary *layoutAttributesForDeletedItems; // @synthesize layoutAttributesForDeletedItems=_layoutAttributesForDeletedItems;
- (void).cxx_destruct;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end

