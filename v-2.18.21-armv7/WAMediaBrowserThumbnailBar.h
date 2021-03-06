//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WAMediaBrowserThumbnailCollectionViewCellDelegate-Protocol.h"
#import "WAMediaBrowserThumbnailFlowLayoutDelegate-Protocol.h"

@class NSIndexPath, NSString, UICollectionView, WAMediaBrowserThumbnailFlowLayout, WAMediaManager;
@protocol WAMediaBrowserThumbnailBarDelegate;

@interface WAMediaBrowserThumbnailBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WAMediaBrowserThumbnailFlowLayoutDelegate, WAMediaBrowserThumbnailCollectionViewCellDelegate>
{
    UICollectionView *_collectionView;
    WAMediaBrowserThumbnailFlowLayout *_collectionViewLayout;
    WAMediaManager *_mediaManager;
    struct CGRect _previousPreheatRect;
    BOOL _needsScrollToHighlightedIndexPathOnLayout;
    struct CGSize _previousSize;
    struct CGPoint _lastContentOffsetForSpeedCalculation;
    double _timeOfLastContentOffsetForSpeedCalculation;
    float _lastScrollVelocity;
    BOOL _suppressDelegateNotificationOnScroll;
    BOOL _needsUpdateHighlightedIndexPath;
    BOOL _isCollectionViewLoaded;
    int _updatingCounter;
    NSIndexPath *_indexPathToScrollToAfterUpdating;
    BOOL _scrubbing;
    id <WAMediaBrowserThumbnailBarDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) __weak id <WAMediaBrowserThumbnailBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WAMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)updateThumbnailCache;
- (void)mediaManagerDidChangeContent:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)imageForMediaThumbnailThumbnailCollectionViewCell:(id)arg1 atIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)resetScrollVelocity;
@property(readonly, nonatomic) float scrollVelocity;
- (float)layout:(id)arg1 expandedAspectRatioForItemAtIndexPath:(id)arg2;
- (void)scrollToIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)setHighlightedIndexPath:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) NSIndexPath *highlightedIndexPath;
- (id)highlightedIndexPathForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mediaManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

