//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaPickerBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WAMediaPickerAlbumControllerDelegate-Protocol.h"
#import "WAMediaPickerAlbumTableViewCellDelegate-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"

@class CADisplayLink, NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, UIImageView, UILabel, UIPanGestureRecognizer, UIView, WAMediaPickerAlbumController;

@interface WAMediaPickerAlbumViewController : WAMediaPickerBaseViewController <WAMediaPickerAlbumTableViewCellDelegate, UIGestureRecognizerDelegate, WAMediaPickerAlbumControllerDelegate, WAImageToImageTransitioning, WANavigationControllerPopToAnimating>
{
    unsigned int _assetsCountPerRow;
    UIView *_footerView;
    UILabel *_footerLabel;
    BOOL _albumLoadingInProgress;
    NSNumber *_assetIndexToRestore;
    struct CGPoint _contentOffsetAtStartOfRotation;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    BOOL _rotatingViewWithNoMedia;
    UILabel *_noMediaTitleLabel;
    UILabel *_noMediaBodyTextLabel;
    BOOL _needsScrollToSelectedPhoto;
    struct CGRect _previousPreheatRect;
    BOOL _needsUpdateFooterText;
    UIPanGestureRecognizer *_multiSelectPanGesture;
    BOOL _isInMultiSelectPanStatus;
    BOOL _isInAutoScrollUpProgress;
    BOOL _isInAutoScrollDownProgress;
    int _quickSelectType;
    NSArray *_originalSelectedLocalIdentifiers;
    int _firstQuickSelectIndex;
    int _lastQuickSelectIndex;
    struct CGPoint _autoScrollTouchPointInCollectionView;
    CADisplayLink *_autoScrollDisplayLink;
    float _autoScrollDistancePerFrame;
    NSMutableDictionary *_quickSelectIdAndIndexDict;
    NSMutableSet *_quickSelectLivePhotoAsVideoIdentifiers;
    WAMediaPickerAlbumController *_albumController;
}

@property(readonly, nonatomic) WAMediaPickerAlbumController *albumController; // @synthesize albumController=_albumController;
- (void).cxx_destruct;
- (void)markCellUnselectedForLocalIdentifier:(id)arg1;
- (void)markCellSelectedForLocalIdentifier:(id)arg1;
- (void)addLocalIdentifierIfPossibleWithIndex:(int)arg1 toOrderSet:(id)arg2;
- (id)allLocalIdentifiersFromIndex:(int)arg1 toIndex:(int)arg2 needReverse:(BOOL)arg3;
- (void)unselectMediaIfPossibleFromIndex:(int)arg1 toIndex:(int)arg2;
- (void)selectMediaIfPossibleFromIndex:(int)arg1 toIndex:(int)arg2;
- (void)handleAutoScrollQuickSelectWithTouchDeltaY:(float)arg1;
- (void)startAutoScrollDown;
- (void)stopAutoScrollDown;
- (void)startAutoScrollUp;
- (void)stopAutoScrollUp;
- (void)handleAutoScrollDownWithCurrentContentOffsetY:(float)arg1;
- (void)handleAutoScrollUpWithCurrentContentOffsetY:(float)arg1;
- (void)resetQuickSelectData;
- (void)multiSelectPanGestureDidFinish:(id)arg1;
- (void)calculateAutoScrollDistancePerFrameWithOffset:(float)arg1 total:(float)arg2;
- (int)quickSelectThumbnailIndexAtPoint:(struct CGPoint)arg1;
- (int)thumbnailIndexAtPoint:(struct CGPoint)arg1;
- (void)multiSelectPanGestureDidChange:(id)arg1;
- (void)multiSelectPanGestureDidBegin:(id)arg1;
- (void)handleMultiSelectPanGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (BOOL)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)adjustContentOffsetOfTableViewToNearestValidMultipleOfRowHeight;
- (id)tableViewSnapshot;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (struct _NSRange)rangeOfAssetsInRect:(struct CGRect)arg1;
- (void)updateThumbnailCache;
- (void)scrollViewDidScroll:(id)arg1;
- (void)previewingContext:(id)arg1 inTableViewCell:(id)arg2 commitViewController:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForAsset:(id)arg2 inTableViewCell:(id)arg3;
- (id)registerPreviewingForAlbumCell:(id)arg1 sourceView:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)mediaPickerAlbumTableViewCell:(id)arg1 didReceiveLongPressAtIndex:(int)arg2;
- (BOOL)mediaPickerAlbumTableViewCell:(id)arg1 didReceiveTapAtIndex:(int)arg2;
- (void)reconfigureAllVisibleCells;
- (void)updateFooterText;
- (void)updateFooterTextIfNeeded;
- (BOOL)isFooterVisible;
- (void)updateFooter;
- (int)assetsCountPerRow;
- (void)mediaPickerAlbumController:(id)arg1 didFinishLoadingAlbumWithOutcome:(BOOL)arg2;
- (void)mediaPickerAlbumControllerWillBeginLoadingAlbum:(id)arg1;
- (void)scrollToBottom;
- (struct CGPoint)maximumContentOffset;
- (void)scrollToAssetAtIndex:(int)arg1;
- (int)indexOfAssetAtCenterOfView;
- (BOOL)scrollEnabled;
- (void)reloadTable;
- (void)relayoutNoMediaViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateFonts;
- (void)wa_fontSizeDidChange;
- (id)initWithAlbumController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

