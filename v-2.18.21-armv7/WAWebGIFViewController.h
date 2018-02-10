//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"

@class NSIndexPath, NSLayoutConstraint, NSMutableSet, NSString, UIActivityIndicatorView, UIButton, UICollectionView, UICollectionViewFlowLayout, UILabel, UINavigationController, UISearchBar, UISegmentedControl, UIView, WAGIFAsset, WAGIFAssetCollection, WAGIFSearch, WASadKittiesView;
@protocol WAWebGIFViewControllerDelegate;

@interface WAWebGIFViewController : UIViewController <WANavigationControllerPopToAnimating, WAImageToImageTransitioning, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>
{
    WAGIFAssetCollection *_searchResults;
    WAGIFAssetCollection *_starredAssets;
    UISegmentedControl *_searchControl;
    BOOL _currentTaskWaiting;
    BOOL _searchFirstResponder;
    BOOL _showSearchForLayoutSubviews;
    BOOL _rotating;
    unsigned int _state;
    BOOL _automaticallyRetry;
    int _currentRowStart;
    struct CGPoint _searchContentOffset;
    struct CGPoint _starredContentOffset;
    UINavigationController *_navController;
    UIView *_noStarredMessagesView;
    BOOL _playBottom;
    BOOL _playStarredBottom;
    float _oldContentOffset;
    float _oldStarredContentOffset;
    NSMutableSet *_playingCells;
    WASadKittiesView *_sadKittiesNoStarredGIFs;
    WASadKittiesView *_sadKittesNoSearchResults;
    WAGIFSearch *_search;
    NSIndexPath *_selectedIndexPath;
    WAGIFAsset *_selectedGIF;
    BOOL _showSearch;
    id <WAWebGIFViewControllerDelegate> _delegate;
    UISearchBar *_searchBar;
    UICollectionView *_collectionView;
    UIActivityIndicatorView *_loadingView;
    UILabel *_networkErrorLabel;
    UILabel *_noResultsLabel;
    UIButton *_reloadButton;
    UIView *_networkErrorContainer;
    UIView *_noResultsContainer;
    UIView *_searchSuperview;
    NSLayoutConstraint *_searchBarTopConstraint;
}

@property(nonatomic) BOOL showSearch; // @synthesize showSearch=_showSearch;
@property(nonatomic) __weak NSLayoutConstraint *searchBarTopConstraint; // @synthesize searchBarTopConstraint=_searchBarTopConstraint;
@property(nonatomic) __weak UIView *searchSuperview; // @synthesize searchSuperview=_searchSuperview;
@property(nonatomic) __weak UIView *noResultsContainer; // @synthesize noResultsContainer=_noResultsContainer;
@property(nonatomic) __weak UIView *networkErrorContainer; // @synthesize networkErrorContainer=_networkErrorContainer;
@property(nonatomic) __weak UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(nonatomic) __weak UILabel *noResultsLabel; // @synthesize noResultsLabel=_noResultsLabel;
@property(nonatomic) __weak UILabel *networkErrorLabel; // @synthesize networkErrorLabel=_networkErrorLabel;
@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <WAWebGIFViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (BOOL)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)networkStatusDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (float)cellSpacing;
- (float)cellHeight;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)shouldLoadNextBatchWhenDisplayingIndex:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)tryAgain:(id)arg1;
- (void)cancel:(id)arg1;
- (void)searchToggled:(id)arg1;
- (void)updateStarredGIFsBatch:(id)arg1;
- (void)addNoMessagesView;
- (id)searchText;
- (void)updateGIFsForResult:(id)arg1 hasError:(BOOL)arg2;
- (void)updateGIFsForCurrentText:(BOOL)arg1;
- (void)handleSearchResultWithResult:(id)arg1 error:(id)arg2 loadImmediately:(BOOL)arg3;
- (void)clearSearchResultsAndEngine;
- (void)updateActivityIndicatorFooter;
- (void)updateGIFsForCurrentText:(BOOL)arg1 batch:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updatePlayingCellsWithNewCell:(id)arg1;
- (void)updatePlayingCells;
- (void)updateGIFArray:(id)arg1 hasError:(BOOL)arg2 newGIFs:(id)arg3 shouldUpdateUI:(BOOL)arg4 nextBatchToken:(id)arg5;
- (void)loadNextBatch;
- (id)GIFs;
@property(readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
- (void)updateSearchBarConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)setNoResultsHidden:(BOOL)arg1;
- (void)updateErrorVisibility;
- (void)setState:(unsigned int)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

