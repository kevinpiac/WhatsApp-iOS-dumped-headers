//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WAMediaPickerStats, WAMultiSendPreviewViewController;

@protocol WAMultiSendPreviewViewControllerDelegate <NSObject>
- (void)multiSendPreviewViewControllerDidRequestRetakePhoto:(WAMultiSendPreviewViewController *)arg1;
- (void)multiSendPreviewViewControllerDidCancel:(WAMultiSendPreviewViewController *)arg1;
- (void)multiSendPreviewViewController:(WAMultiSendPreviewViewController *)arg1 didConfirmItems:(NSArray *)arg2 pickerStatistics:(WAMediaPickerStats *)arg3;

@optional
- (void)multiSendPreviewViewControllerGIFDidFailBecauseOfNetworkError:(WAMultiSendPreviewViewController *)arg1;
@end

