//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WAMediaPickerAlbumViewController, WAMediaPickerAsset, WAMediaPickerLibraryController, WAQuickMediaPreviewViewController;

@protocol WAMediaPickerDataSource <NSObject>
- (void)albumViewController:(WAMediaPickerAlbumViewController *)arg1 longPressOnAsset:(WAMediaPickerAsset *)arg2;
- (_Bool)canHandleLongPress;
- (NSArray *)livePhotoAsGifIdentifiers;
- (void)clearSelection;
- (void)showMaximumSelectionCountExceededError;
- (_Bool)commitPreviewForQuickPreviewViewController:(WAQuickMediaPreviewViewController *)arg1;
- (WAQuickMediaPreviewViewController *)quickMediaViewControllerForPreviewOfAsset:(WAMediaPickerAsset *)arg1 albumControllerToReload:(WAMediaPickerAlbumViewController *)arg2;
- (void)toggleSelectionOfMediaPickerAsset:(WAMediaPickerAsset *)arg1;
- (_Bool)canAddMoreMediaPickerAssets;
- (_Bool)canSelectMediaPickerAsset:(WAMediaPickerAsset *)arg1;
- (NSArray *)selectedAssetIdentifiers;
- (_Bool)allowsMultipleSelection;
- (WAMediaPickerLibraryController *)libraryController;
@end

