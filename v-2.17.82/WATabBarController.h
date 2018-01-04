//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "UITabBarControllerDelegate-Protocol.h"
#import "WACallOverlayControllerDelegate-Protocol.h"
#import "WARestorable-Protocol.h"

@class NSString, StatusV3NavigationController, UITabBarItem, UIViewController, WACallLogger, WACallOverlayController, WAChatListViewController, WAChatStorage, WACloudBackupManager, WANavigationController, WASettingsViewController, WAStatusListViewController, WAStatusSessionManager, WATabBarCameraButton;

@interface WATabBarController : UITabBarController <WACallOverlayControllerDelegate, UITabBarControllerDelegate, WARestorable>
{
    WACallOverlayController *_callOverlayController;
    BOOL _didAppearAlready;
    UIViewController *_dummyCameraViewController;
    UITabBarItem *_callHistoryTabBarItem;
    WATabBarCameraButton *_cameraButton;
    WANavigationController *_callHistoryNavController;
    StatusV3NavigationController *_statusNavigationController;
    WASettingsViewController *_settingsViewController;
    BOOL _callOverlayViewHidden;
    WACallLogger *_callLogger;
    WAChatStorage *_chatStorage;
    WACloudBackupManager *_cloudBackupManager;
    WAStatusSessionManager *_statusSessionManager;
    WAChatListViewController *_chatListViewController;
    WAStatusListViewController *_statusListViewController;
}

+ (id)tabBarControllerWithCallLogger:(id)arg1 chatStorage:(id)arg2 cloudBackupManager:(id)arg3 statusSessionManager:(id)arg4;
@property(readonly, nonatomic) WAStatusListViewController *statusListViewController; // @synthesize statusListViewController=_statusListViewController;
@property(readonly, nonatomic) WAChatListViewController *chatListViewController; // @synthesize chatListViewController=_chatListViewController;
@property(readonly, nonatomic) WAStatusSessionManager *statusSessionManager; // @synthesize statusSessionManager=_statusSessionManager;
@property(readonly, nonatomic) WACloudBackupManager *cloudBackupManager; // @synthesize cloudBackupManager=_cloudBackupManager;
@property(readonly, nonatomic) WAChatStorage *chatStorage; // @synthesize chatStorage=_chatStorage;
@property(readonly, nonatomic) WACallLogger *callLogger; // @synthesize callLogger=_callLogger;
@property(nonatomic, getter=isCallOverlayViewHidden) BOOL callOverlayViewHidden; // @synthesize callOverlayViewHidden=_callOverlayViewHidden;
- (void).cxx_destruct;
- (void)showTwoFactorNagControllerIfNeeded;
- (void)encodeWARestorableStateWithCoder:(id)arg1;
- (void)didRestoreWithCoder:(id)arg1 children:(id)arg2;
- (void)videoCallOverlay:(id)arg1 didChangeVisible:(BOOL)arg2;
- (void)videoCallOverlayUserDidDrag:(id)arg1;
- (void)videoCallOverlayDidRequestFullScreen:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)cameraButtonTapped:(id)arg1;
- (void)applicationWillDismissCallWindow:(id)arg1;
- (void)applicationWillPresentCallWindow:(id)arg1;
- (void)callLoggerDidChangeMissedCallCount:(id)arg1;
- (void)updateMissedCallCount;
- (void)updateStatusTabBadge;
- (void)chatStorageDidUpdateStatusBadge:(id)arg1;
- (void)markTopMostChatSessionActive;
- (void)processSendURL:(id)arg1;
- (void)forwardFileAtURL:(id)arg1;
- (void)selectViewController:(id)arg1 popToRoot:(BOOL)arg2 animated:(BOOL)arg3 actionBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showCallHistoryTab;
- (void)processStarredMessagesApplicationShortcut;
- (void)processCameraApplicationShortcut;
- (void)processNewChatApplicationShortcut;
- (void)processSearchApplicationShortcut;
- (void)performApplicationShortcutFor:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)setTabBarVisible:(BOOL)arg1 animationDuration:(double)arg2;
@property(nonatomic) struct WACallOverlayAnchorsWithOffset callOverlayViewAnchors;
@property(nonatomic) int callOverlayViewLayout;
- (void)setLargePreviewViewInCallOverlayView:(BOOL)arg1;
- (void)layoutCameraButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)updateSettingsCount:(id)arg1;
- (void)mediaRestoreStatusUpdated:(id)arg1;
- (void)backupErrorBadgeUpdated:(id)arg1;
- (void)dealloc;
- (void)prepareAfterLoadingFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
