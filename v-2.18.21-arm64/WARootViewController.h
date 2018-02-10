//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "RestoreBackupViewControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"
#import "VerificationControllerDelegate-Protocol.h"
#import "WAChatDatabaseMigrationViewControllerDelegate-Protocol.h"
#import "WAGroupInviteJoinControllerDelegate-Protocol.h"
#import "WARepairDatabaseControllerDelegate-Protocol.h"
#import "WATOSMainViewControllerDelegate-Protocol.h"
#import "WAWindowController-Protocol.h"

@class NSString, NSTimer, UILabel, UIView, WACallLogger, WAChatManager, WAChatStorage, WACloudBackupManager, WAContactsStorage, WAGroupInviteJoinController, WASQLBackupManager, WASignalManager, WAStatusSessionManager, WATabBarController, WATimelockViewController, WAWindow;
@protocol WARootViewControllerDelegate;

@interface WARootViewController : WAViewController <RestoreBackupViewControllerDelegate, UITabBarControllerDelegate, VerificationControllerDelegate, WAChatDatabaseMigrationViewControllerDelegate, WAGroupInviteJoinControllerDelegate, WARepairDatabaseControllerDelegate, WATOSMainViewControllerDelegate, WAWindowController>
{
    CDUnknownBlockType _deferredAction;
    _Bool _deferredActionWillOpenChat;
    _Bool _needsPerformHelperTasks;
    _Bool _hasPerformedHelperTasksAtLeastOnce;
    _Bool _hasPresentedHelperScreens;
    _Bool _needsShowVerifyErrorOnRegistrationScreen;
    _Bool _isHandlingShowViewController;
    _Bool _shouldAttemptLoadDatabase;
    _Bool _applicationDidFinishLaunching;
    unsigned long long _nextState;
    WAGroupInviteJoinController *_groupInviteJoinController;
    UIView *_fakeStatusBarView;
    UILabel *_inCallStatusBarLabel;
    NSTimer *_inCallStatusBarUpdateTimer;
    _Bool _buildExpired;
    _Bool _callStatusBarHidden;
    WAWindow *_parentWindow;
    unsigned long long _currentState;
    WAChatManager *_chatManager;
    WACallLogger *_callLogger;
    WAChatStorage *_chatStorage;
    WAContactsStorage *_contactsStorage;
    WACloudBackupManager *_cloudBackupManager;
    WASignalManager *_signalManager;
    WASQLBackupManager *_sqlBackupManager;
    WAStatusSessionManager *_statusSessionManager;
    id <WARootViewControllerDelegate> _delegate;
    WATabBarController *_tabBarController;
}

+ (void)initialize;
@property(nonatomic, getter=isCallStatusBarHidden) _Bool callStatusBarHidden; // @synthesize callStatusBarHidden=_callStatusBarHidden;
@property(readonly, nonatomic) WATabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(readonly, nonatomic, getter=isBuildExpired) _Bool buildExpired; // @synthesize buildExpired=_buildExpired;
@property(nonatomic) __weak id <WARootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WAStatusSessionManager *statusSessionManager; // @synthesize statusSessionManager=_statusSessionManager;
@property(readonly, nonatomic) WASQLBackupManager *sqlBackupManager; // @synthesize sqlBackupManager=_sqlBackupManager;
@property(readonly, nonatomic) WASignalManager *signalManager; // @synthesize signalManager=_signalManager;
@property(readonly, nonatomic) WACloudBackupManager *cloudBackupManager; // @synthesize cloudBackupManager=_cloudBackupManager;
@property(readonly, nonatomic) WAContactsStorage *contactsStorage; // @synthesize contactsStorage=_contactsStorage;
@property(readonly, nonatomic) WAChatStorage *chatStorage; // @synthesize chatStorage=_chatStorage;
@property(readonly, nonatomic) WACallLogger *callLogger; // @synthesize callLogger=_callLogger;
@property(readonly, nonatomic) WAChatManager *chatManager; // @synthesize chatManager=_chatManager;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak WAWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
- (void)presentHelperScreen;
- (void)presentAppReviewPrompt;
- (_Bool)presentAppReviewPromptIfNecessary;
- (void)performHelperTasksIfNeeded;
- (void)setNeedsPerformHelperTasks;
- (void)callDidEnd:(id)arg1;
- (_Bool)isCallStatusBarHiddenForWindow:(id)arg1;
- (void)window:(id)arg1 didAddSubview:(id)arg2;
- (void)statusBarTapped:(id)arg1;
- (void)updateInCallStatusBarTimer:(id)arg1;
- (void)startAnimatingCallStatusBar;
- (void)adjustApplicationWindowForCallStatusBar;
- (void)updateStatusBarBackgroundViewSize;
- (void)didReceiveNotificationRequiringCallStatusBarUpdate:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarStyle;
- (void)performInitialChecks;
- (id)loadAndDiscardRestorableState;
- (void)clearStateRestorationData;
- (void)accessibilityDarkerSystemColorsStatusDidChange:(id)arg1;
- (void)chatManagerDidChangeTimelockState:(id)arg1;
- (void)tosParametersDidChange:(id)arg1;
- (void)tosMainViewControllerDidAccept:(id)arg1;
- (void)tosMainViewControllerDidDismiss:(id)arg1;
- (void)verificationControllerDidDismissWelcomeScreen:(id)arg1;
- (void)verificationControllerDidCompleteRegistration:(id)arg1;
- (void)verificationControllerDidCancel:(id)arg1;
- (void)verificationControllerDidSucceed:(id)arg1;
- (void)expireBuild;
- (void)reauthenticate;
- (void)processApplicationShortcutAction:(id)arg1;
- (void)groupInviteJoinControllerDidFinish:(id)arg1;
- (void)processGroupInviteURL:(id)arg1;
- (void)setNeedsPresentWebClientSettings;
- (void)setNeedsProcessGroupInviteURL:(id)arg1;
- (void)setNeedsProcessSendURL:(id)arg1;
- (void)setNeedsForwardFileAtURL:(id)arg1;
- (void)setNeedsPerformApplicationShortcutAction:(id)arg1;
- (void)setNeedsOpenChatWithBlock:(CDUnknownBlockType)arg1;
- (void)setNeedsShowCallHistoryTab;
- (void)setDeferredAction:(CDUnknownBlockType)arg1 runIfActive:(_Bool)arg2;
- (void)runDeferredActionIfPossible;
- (_Bool)hasDeferredAction;
- (void)restoreBackupViewControllerDidFinish:(id)arg1;
- (void)restoreBackupViewControllerDidRestore:(id)arg1;
- (void)startRestoreAfterRepair;
- (_Bool)presentRestoreHistoryAlert;
- (void)repairDatabaseViewControllerDidFinish:(id)arg1;
- (void)migrationViewControllerDidFinish:(id)arg1;
- (void)loadDatabaseIfNeeded;
- (void)processRegistrationURL:(id)arg1;
- (_Bool)isUserRegistered;
- (void)presentViewControllerModally:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) WATimelockViewController *timelockViewController;
- (void)showViewController:(id)arg1 usingTransition:(id)arg2 blockAfterPresent:(CDUnknownBlockType)arg3 blockAfterCompletion:(CDUnknownBlockType)arg4;
- (void)showTerminalErrorWithAlertMessage:(id)arg1;
- (void)transitionToTerminalErrorStateWithAlertMessage:(id)arg1;
- (void)transitionToNextStateViaUserInteraction;
- (void)transitionToNextState;
- (unsigned long long)nextState;
- (void)setNextState:(unsigned long long)arg1;
- (void)didEndTransitionFromState:(unsigned long long)arg1;
- (void)didBeginTransitionFromState:(unsigned long long)arg1;
- (id)viewControllerForState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (_Bool)transitionToState:(unsigned long long)arg1;
- (id)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (_Bool)doesStateAllowApplicationShortcuts:(unsigned long long)arg1;
- (_Bool)isStateSticky:(unsigned long long)arg1;
- (_Bool)isStateTerminal:(unsigned long long)arg1;
- (void)reset;
- (void)loadView;
- (id)topMostVisibleViewController;
- (void)wa_applicationDidBecomeActive;
- (void)wa_applicationWillEnterForeground;
- (void)saveRestorableState;
- (void)unloadInterfaceIfPossible;
- (void)applicationWillSuspend:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)wa_applicationDidEnterBackground;
- (void)performAfterFirstUnlockWithCallLogger:(id)arg1 chatStorage:(id)arg2 contactsStorage:(id)arg3 chatManager:(id)arg4 cloudBackupManager:(id)arg5 signalManager:(id)arg6 sqlBackupManager:(id)arg7 statusSessionManager:(id)arg8 afterUpgrading:(_Bool)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

