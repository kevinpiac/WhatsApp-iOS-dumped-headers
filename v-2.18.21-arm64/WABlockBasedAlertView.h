//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@class NSMutableDictionary;

@interface WABlockBasedAlertView : UIAlertView
{
    NSMutableDictionary *_actionMap;
    _Bool _dismissesAutomaticallyOnBackground;
    _Bool _shouldLog;
    id _userInfo;
}

+ (void)showErrorMessage:(id)arg1;
+ (void)showErrorInAlertView:(id)arg1;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2;
@property(readonly, nonatomic) _Bool shouldLog; // @synthesize shouldLog=_shouldLog;
@property(nonatomic) _Bool dismissesAutomaticallyOnBackground; // @synthesize dismissesAutomaticallyOnBackground=_dismissesAutomaticallyOnBackground;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)show;
- (void)cancelAlertViewWithAnimation:(_Bool)arg1;
- (void)addCancelButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didPresentAlertView:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 shouldLogContent:(_Bool)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end

