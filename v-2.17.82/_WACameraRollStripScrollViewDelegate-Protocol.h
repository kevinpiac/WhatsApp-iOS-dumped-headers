//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class WAPhotoLibraryCollectionViewCell, _WACameraRollStripScrollView;

@protocol _WACameraRollStripScrollViewDelegate <UIScrollViewDelegate>
- (void)cameraRollStripScrollView:(_WACameraRollStripScrollView *)arg1 didLongPressItemAtIndex:(int)arg2;
- (void)cameraRollStripScrollViewDidReceiveTouch:(_WACameraRollStripScrollView *)arg1;
- (void)cameraRollStripScrollView:(_WACameraRollStripScrollView *)arg1 didDeselectItemAtIndex:(int)arg2;
- (void)cameraRollStripScrollView:(_WACameraRollStripScrollView *)arg1 didSelectItemAtIndex:(int)arg2;
- (void)cameraRollStripScrollView:(_WACameraRollStripScrollView *)arg1 didUnhighlightItemAtIndex:(int)arg2;
- (void)cameraRollStripScrollView:(_WACameraRollStripScrollView *)arg1 didHighlightItemAtIndex:(int)arg2;
- (void)cameraRollStripScrollView:(_WACameraRollStripScrollView *)arg1 willDisplayCell:(WAPhotoLibraryCollectionViewCell *)arg2 atIndex:(int)arg3;
- (int)numberOfItemsInCameraRollStripScrollView:(_WACameraRollStripScrollView *)arg1;
@end
