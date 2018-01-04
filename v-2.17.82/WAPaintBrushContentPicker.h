//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSIndexPath, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, UIImageView, UILabel, UITextField, UIVisualEffectView, WAEmojiSearchEngine, WAPaintBrushContentDataSource, WAWeakTimer;
@protocol WAPaintBrushStampContentDelegate;

@interface WAPaintBrushContentPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UITextFieldDelegate>
{
    UIVisualEffectView *_blurView;
    UIButton *_cancelButton;
    UIButton *_clearButton;
    UICollectionView *_collectionView;
    UIImageView *_containerView;
    NSString *_currentQuery;
    WAPaintBrushContentDataSource *_dataSource;
    WAPaintBrushContentDataSource *_defaultDataSource;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_gradientView;
    BOOL _hideNoResultsView;
    struct CGPoint _nearestToolButtonPosition;
    UIView *_noResultsView;
    UILabel *_noResultsTextLabel;
    UIImageView *_noResultsEmoji;
    UIView *_overlayView;
    UITextField *_searchBar;
    UIVisualEffectView *_searchBarBlur;
    WAEmojiSearchEngine *_searchEngine;
    UIImageView *_searchIcon;
    struct CGRect _searchBarInactiveFrame;
    struct CGRect _searchBarActiveFrame;
    UIView *_searchBarLeadingContainer;
    NSIndexPath *_targetIndexPath;
    WAWeakTimer *_timer;
    struct CGSize _lastLayoutSize;
    id <WAPaintBrushStampContentDelegate> _delegate;
}

+ (id)inactiveOverlayColor;
+ (id)activeOverlayColor;
+ (id)cancelButtonPressedTextColor;
+ (id)placeholderTextColor;
+ (id)inactivePlaceholderColor;
+ (id)activePlaceholderColor;
@property(nonatomic) __weak id <WAPaintBrushStampContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)compareCell:(id)arg1 toCell:(id)arg2;
- (void)updateTargetIndexPath;
- (void)updateGradientViewAlpha;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)recentStampLimit;
- (void)updateCollectionViewNoResultsView;
- (void)resetContentPicker;
- (void)loadEmojiSearchResults:(id)arg1;
- (void)loadDefaultEmojiCategories;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)gestureHandler:(id)arg1;
- (void)reloadRecentAndContentSections;
- (void)clearTextField;
- (void)cancelSearch;
- (void)updateToolButtonPositionNearestToSearchBar:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)initializeNoResultsView;
- (void)initializeSearchBar;
- (struct UIEdgeInsets)rootViewSafeAreaInsets;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
