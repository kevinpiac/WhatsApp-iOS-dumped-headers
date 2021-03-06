//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WAMediaPickerAlbumTableViewCell, WAMediaPickerAsset, WAQuickMediaPreviewViewController;
@protocol UIViewControllerPreviewing;

@protocol WAMediaPickerAlbumTableViewCellDelegate <NSObject>
- (void)unregisterForPreviewingWithContext:(id <UIViewControllerPreviewing>)arg1;
- (id <UIViewControllerPreviewing>)registerPreviewingForAlbumCell:(WAMediaPickerAlbumTableViewCell *)arg1 sourceView:(UIView *)arg2;
- (void)previewingContext:(id <UIViewControllerPreviewing>)arg1 inTableViewCell:(WAMediaPickerAlbumTableViewCell *)arg2 commitViewController:(WAQuickMediaPreviewViewController *)arg3;
- (WAQuickMediaPreviewViewController *)previewingContext:(id <UIViewControllerPreviewing>)arg1 viewControllerForAsset:(WAMediaPickerAsset *)arg2 inTableViewCell:(WAMediaPickerAlbumTableViewCell *)arg3;
- (BOOL)mediaPickerAlbumTableViewCell:(WAMediaPickerAlbumTableViewCell *)arg1 didReceiveLongPressAtIndex:(int)arg2;
- (BOOL)mediaPickerAlbumTableViewCell:(WAMediaPickerAlbumTableViewCell *)arg1 didReceiveTapAtIndex:(int)arg2;
@end

