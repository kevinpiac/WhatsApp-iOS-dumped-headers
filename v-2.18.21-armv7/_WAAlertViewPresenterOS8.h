//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAlertViewPresenter.h"

@class UIAlertController;

@interface _WAAlertViewPresenterOS8 : WAAlertViewPresenter
{
    UIAlertController *_alertController;
    UIAlertController *_retainedControllerBeforePresentation;
    CDUnknownBlockType _cancelActionHandler;
}

- (void).cxx_destruct;
- (void)addDestructiveButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addCancelButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dismissByCancellingWithAnimation:(BOOL)arg1;
- (void)presentFromViewController:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end

