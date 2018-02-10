//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (WhatsAppExtras)
+ (double)systemKeyboardHeightForOrientation:(long long)arg1 includeQuickType:(_Bool)arg2;
+ (void)wa_setStatusBarHidden:(_Bool)arg1;
+ (id)wa_statusBarView;
+ (_Bool)wa_isProductionBuild;
+ (_Bool)wa_blurEffectsEnabled;
+ (id)wa_packageHash;
+ (id)wa_cachesDirectory;
+ (id)wa_mediaDirectory;
+ (id)wa_libraryDirectory;
+ (id)wa_documentsDirectory;
+ (id)wa_applicationDataDirectory;
+ (id)wa_httpUserAgentStringWithAppVersion:(id)arg1;
+ (id)wa_httpUserAgentString;
+ (id)wa_buildNumber;
+ (id)wa_versionString;
- (void)wa_resetKeyboard;
- (id)wa_matchingViewInView:(id)arg1;
- (id)wa_kbView;
- (id)wa_kbViewModern;
- (id)wa_kbViewLegacy;
- (id)wa_viewWithIdentifier:(id)arg1;
- (double)wa_currentStatusBarHeight;
- (_Bool)wa_dismissKeyboard;
- (void)wa_terminate;
- (id)wa_topMostWindow;
- (void)wa_clearNotificationCenterAndApplicationBadge;
- (void)showLocalNotification:(id)arg1 hasAction:(_Bool)arg2 alertAction:(id)arg3 fireDate:(id)arg4;
- (_Bool)isActive;
- (_Bool)isBackgrounded;
@end

