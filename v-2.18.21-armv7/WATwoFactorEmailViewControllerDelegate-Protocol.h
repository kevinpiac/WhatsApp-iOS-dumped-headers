//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, WATwoFactorEmailViewController;

@protocol WATwoFactorEmailViewControllerDelegate <NSObject>
- (void)emailViewControllerDidCancel:(WATwoFactorEmailViewController *)arg1;
- (BOOL)emailViewController:(WATwoFactorEmailViewController *)arg1 handleOpenUrl:(NSURL *)arg2;
- (void)emailViewController:(WATwoFactorEmailViewController *)arg1 didEnterEmail:(NSString *)arg2;
@end

