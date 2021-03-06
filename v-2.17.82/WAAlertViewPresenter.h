//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAAlertViewPresenter : NSObject
{
}

+ (void)showAlertForError:(id)arg1 fromViewController:(id)arg2;
+ (void)showAlertText:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showAlertText:(id)arg1 fromViewController:(id)arg2;
+ (BOOL)presentIfNecessaryJailbrokenDeviceNotSupportedAlertFromViewController:(id)arg1;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addDestructiveButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addCancelButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dismissByCancellingWithAnimation:(BOOL)arg1;
- (void)presentFromViewController:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (void)applicationWillResetUserInterface:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

