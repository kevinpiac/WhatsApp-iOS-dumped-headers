//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAQRCodeScannerViewController;

@protocol WAQRCodeScannerViewControllerDelegate <NSObject>
- (void)qrCodeScannerViewController:(WAQRCodeScannerViewController *)arg1 didFinishWithCode:(NSString *)arg2;
- (void)qrCodeScannerViewControllerDidCancel:(WAQRCodeScannerViewController *)arg1;
- (_Bool)qrCodeScannerViewController:(WAQRCodeScannerViewController *)arg1 shouldAcceptCode:(NSString *)arg2;
@end

