//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIViewController;
@protocol WAWindowController;

@interface WAWindow : UIWindow
{
}

@property(readonly, nonatomic, getter=isCallStatusBarHidden) BOOL callStatusBarHidden;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
@property(retain, nonatomic) UIViewController<WAWindowController> *rootViewController; // @dynamic rootViewController;
- (void)tintColorDidChange;

@end

