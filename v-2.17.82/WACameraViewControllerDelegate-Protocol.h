//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIPanGestureRecognizer, WACameraViewController, WAMediaPickerAsset, WAMediaPickerItem;

@protocol WACameraViewControllerDelegate <NSObject>
- (void)cameraViewControllerDidRequestPresentPhotoLibrary:(WACameraViewController *)arg1;
- (void)cameraViewController:(WACameraViewController *)arg1 didSelectMediaPickerItem:(WAMediaPickerItem *)arg2 completionHandler:(void (^)(void))arg3 cancelSelectionHandler:(void (^)(BOOL))arg4;
- (void)cameraViewController:(WACameraViewController *)arg1 didUnSelectMediaPickerAsset:(WAMediaPickerAsset *)arg2;
- (void)cameraViewController:(WACameraViewController *)arg1 didSelectMediaPickerAsset:(WAMediaPickerAsset *)arg2 cancelSelectionHandler:(void (^)(BOOL))arg3;
- (void)cameraViewController:(WACameraViewController *)arg1 didFinishWithMediaItems:(NSArray *)arg2 gestureRecognizer:(UIPanGestureRecognizer *)arg3;
- (void)cameraViewController:(WACameraViewController *)arg1 didCancelWithGestureRecognizer:(UIPanGestureRecognizer *)arg2;
@end
