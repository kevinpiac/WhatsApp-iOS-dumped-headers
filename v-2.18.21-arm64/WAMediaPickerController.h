//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WANavigationController.h"

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UIDocumentMenuDelegate-Protocol.h"
#import "UIDocumentPickerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIToolbarDelegate-Protocol.h"
#import "WAMediaPickerDataSource-Protocol.h"
#import "WAWebGIFViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, NSTimer, UILabel, UIToolbar, UIView, WAMediaPickerAsset, WAMediaPickerLibraryController, WAMediaPickerLibraryViewController, WAMultiSendMediaItemQuality;
@protocol WAMediaPickerControllerDelegate><UINavigationControllerDelegate;

@interface WAMediaPickerController : WANavigationController <PHPhotoLibraryChangeObserver, UINavigationControllerDelegate, UIDocumentPickerDelegate, UIDocumentMenuDelegate, UIToolbarDelegate, WAMediaPickerDataSource, WAWebGIFViewControllerDelegate>
{
    long long _originalStatusBarStyle;
    NSMutableSet *_initiallySelectedAssetIdentifiers;
    NSMutableArray *_selectedAssetIdentifiers;
    NSMutableArray *_livePhotoSelectedAsGifIdentifiers;
    NSTimer *_updateNavigationBarTimer;
    WAMediaPickerLibraryViewController *_libraryViewController;
    _Bool _alreadyNotifiedDelegateOfFirstApperarance;
    UIView *_alertToolbarContainerView;
    UIToolbar *_alertToolbar;
    UILabel *_alertLabel;
    NSMutableArray *_newlySelectedAssets;
    NSMutableSet *_assetsToUnload;
    WAMediaPickerAsset *_lastSelectedAsset;
    NSMutableArray *_externalItems;
    NSMutableSet *_modifiedAssets;
    long long _preexistingExternalItemCount;
    _Bool _toolbarWaitForPopCompletion;
    WAMediaPickerLibraryController *_libraryController;
    WAMultiSendMediaItemQuality *_quality;
    long long _maximumSelectionCount;
    id _lastUsedAssetCollectionIdentifier;
}

+ (id)supportedDocumentTypes;
+ (_Bool)configureMediaPickerItem:(id)arg1 forAsset:(id)arg2;
+ (Class)toolbarClass;
@property(retain, nonatomic) id lastUsedAssetCollectionIdentifier; // @synthesize lastUsedAssetCollectionIdentifier=_lastUsedAssetCollectionIdentifier;
@property(nonatomic) long long maximumSelectionCount; // @synthesize maximumSelectionCount=_maximumSelectionCount;
@property(readonly, nonatomic) WAMultiSendMediaItemQuality *quality; // @synthesize quality=_quality;
@property(nonatomic) _Bool toolbarWaitForPopCompletion; // @synthesize toolbarWaitForPopCompletion=_toolbarWaitForPopCompletion;
@property(retain, nonatomic) WAMediaPickerLibraryController *libraryController; // @synthesize libraryController=_libraryController;
- (void).cxx_destruct;
- (void)webGIFViewControllerDidCancel:(id)arg1;
- (void)webGIFViewController:(id)arg1 didSelectGIFForStarredMessage:(id)arg2;
- (void)webGIFViewController:(id)arg1 didSelectGIFForURL:(id)arg2 cacheURL:(id)arg3 previewURL:(id)arg4 thumbURL:(id)arg5 asset:(id)arg6 isVideoURL:(_Bool)arg7 aspectRatio:(struct CGSize)arg8;
- (void)handleSelectedGIFWebURL:(id)arg1 cacheURL:(id)arg2 previewURL:(id)arg3 thumbURL:(id)arg4 isVideoURL:(_Bool)arg5 asset:(id)arg6 gifProvider:(id)arg7 aspectRatio:(struct CGSize)arg8;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentMenuWasCancelled:(id)arg1;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)selectGIFItem:(id)arg1;
- (void)selectExternalItem:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)showMaximumSelectionCountExceededError;
- (void)recheckSelectedAssetURLsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recheckSelectedAssetIdentifiers;
- (void)setInitiallySelectedAssetIdentifiers:(id)arg1 livePhotoAsGifIdentifiers:(id)arg2 preexistingExternalItemCount:(long long)arg3;
- (id)livePhotoAsGifIdentifiers;
- (id)selectedAssetIdentifiers;
- (_Bool)commitPreviewForQuickPreviewViewController:(id)arg1;
- (id)quickMediaViewControllerForPreviewOfAsset:(id)arg1 albumControllerToReload:(id)arg2;
- (void)albumViewController:(id)arg1 longPressOnAsset:(id)arg2;
- (_Bool)canHandleLongPress;
- (_Bool)assetSelectedAsGIF:(id)arg1;
- (_Bool)assetSelectedAsPhoto:(id)arg1;
- (void)toggleLivePhotoAsVideoSelectionOfMediaPickerAsset:(id)arg1;
- (void)toggleSelectionOfMediaPickerAsset:(id)arg1;
- (_Bool)allowsMultipleSelection;
- (void)deselectAssetIdentifiers:(id)arg1;
- (void)clearSelection;
- (_Bool)canAddMoreMediaPickerAssets;
- (_Bool)canSelectMediaPickerAsset:(id)arg1;
- (void)setDoneButtonSpinnerHidden:(_Bool)arg1;
- (void)showDoneButtonSpinner;
- (id)mediaPickerItemsFromIdentifiers:(id)arg1 assets:(id)arg2;
- (id)modifiedItems;
- (void)dismiss;
- (long long)totalSelectedItemCount;
- (void)cancel:(id)arg1;
- (void)unloadPreviouslySelectedAssets;
- (void)updateNavigationBar;
- (_Bool)showingGIFSearch;
- (void)updateToolbarWithWarningText:(id)arg1;
- (void)updateNavigationBarAndToolbar;
- (id)toolbarItems;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 updateToolbar:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)positionForBar:(id)arg1;
- (void)setUpAlertToolbar;
- (void)setAlertToolbarText:(id)arg1 animated:(_Bool)arg2;
- (void)notifyViewAppearanceCompletion;
- (void)pushLastUsedAssetCollection;
- (void)presentModallyFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assetsLibraryChanged:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithMediaItemQuality:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAMediaPickerControllerDelegate><UINavigationControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
