//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class NSArray, WALifeCycleWatchdog;

@interface WAApplication : UIApplication
{
    NSArray *_keyboardShortcuts;
    long long _volumeKeyEventCounter;
    _Bool _wantsSpecialEventHandling;
    // Error parsing type: Ai, name: _applicationState
    double _enteredBackgroundTime;
    WALifeCycleWatchdog *_lifeCycleWatchdog;
}

+ (id)wa_delegate;
+ (void)sendVCard:(id)arg1 toContacts:(id)arg2;
+ (unsigned long long)forwardMessages:(id)arg1 toContacts:(id)arg2 toStatus:(_Bool)arg3;
+ (id)transitionForContacts:(id)arg1 andStatus:(_Bool)arg2;
+ (void)transitionToChatSession:(id)arg1;
@property(readonly, nonatomic) WALifeCycleWatchdog *lifeCycleWatchdog; // @synthesize lifeCycleWatchdog=_lifeCycleWatchdog;
- (void).cxx_destruct;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)didDetectVolumeDownButtonUp:(id)arg1;
- (void)didDetectVolumeDownButtonDown:(id)arg1;
- (void)didDetectVolumeUpButtonUp:(id)arg1;
- (void)didDetectVolumeUpButtonDown:(id)arg1;
- (void)setWantsSpecialEventHandling:(_Bool)arg1;
- (void)endDeliveringSpecialEvents;
- (void)beginDeliveringSpecialEvents;
- (_Bool)openURL:(id)arg1;
- (void)handleCommandReturn:(id)arg1;
- (id)keyCommands;
- (void)sendEvent:(id)arg1;
@property(nonatomic) long long forceQuitCounter;
- (void)wa_applicationWillTerminate:(id)arg1;
- (void)wa_applicationWillResignActive:(id)arg1;
- (void)wa_applicationDidBecomeActive:(id)arg1;
- (void)wa_applicationDidEnterBackground:(id)arg1;
- (void)wa_applicationDidFinishLaunching:(id)arg1;
@property(readonly, nonatomic) int wa_applicationState;
- (void)dealloc;
- (id)init;

@end

