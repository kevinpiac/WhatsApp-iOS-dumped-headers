//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController, WAPageableItemView, WAPaintBrushContent, WAPaintCanvasAnimatableSample, WAPaintPositionSample;

@protocol WAPageableItemViewDelegate <NSObject>
- (WAPaintCanvasAnimatableSample *)pageableItemView:(WAPageableItemView *)arg1 replaceContentStamp:(WAPaintBrushContent *)arg2 sample:(WAPaintPositionSample *)arg3 newContent:(WAPaintBrushContent *)arg4;
- (BOOL)pageableItemViewDidRequestEnterFilterMode:(WAPageableItemView *)arg1;
- (BOOL)canApplyFilterToItemInPageableItemView:(WAPageableItemView *)arg1;
- (void)pageableItemViewDidEndEditingText:(WAPageableItemView *)arg1;
- (void)pageableItemViewWillBeginEditingText:(WAPageableItemView *)arg1;
- (void)pageableItemView:(WAPageableItemView *)arg1 didDeleteItemAtLocation:(struct CGPoint)arg2;
- (void)pageableItemView:(WAPageableItemView *)arg1 shouldEnterPendingDeletionState:(BOOL)arg2;
- (BOOL)pageableItemView:(WAPageableItemView *)arg1 shouldDeleteItemAtLocation:(struct CGPoint)arg2;
- (UIViewController *)pageableItemViewContainingViewController:(WAPageableItemView *)arg1;
- (void)pageableItemViewDidRequestSend:(WAPageableItemView *)arg1;
- (void)pageableItemViewDidRequestEndCropping:(WAPageableItemView *)arg1;
- (void)pageableItemViewDidUpdateThumbnail:(WAPageableItemView *)arg1;
- (void)pageableItemViewDidEndFocusedTask:(WAPageableItemView *)arg1;
- (void)pageableItemViewWillBeginFocusedTask:(WAPageableItemView *)arg1;
@end

