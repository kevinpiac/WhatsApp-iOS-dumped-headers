//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WADefaultPreviewActionItemsProviding-Protocol.h"
#import "WAViewControllerExtensions-Protocol.h"
#import "WAViewControllerPrivateExtensions-Protocol.h"

@class NSArray, NSString, WAChatNavigationController, WASearchController, _WAViewControllerHelper;

@interface WAViewController : UIViewController <WAViewControllerPrivateExtensions, WAViewControllerExtensions, WADefaultPreviewActionItemsProviding>
{
    _WAViewControllerHelper *_wa_helper;
    WASearchController *_searchController;
}

- (void).cxx_destruct;
- (_Bool)wa_prefersStatusBarHidden;
- (_Bool)prefersStatusBarHidden;
- (void)wa_setSearchInactiveWithAnimation:(_Bool)arg1;
@property(readonly, nonatomic) _Bool wa_hasSearchController;
@property(readonly, nonatomic) _Bool wa_isSearchActive;
@property(readonly, nonatomic) WASearchController *wa_searchController;
- (id)wa_newSearchControllerWithSearchBar:(id)arg1;
@property(readonly, nonatomic) WAChatNavigationController *chatNavigationController;
@property(readonly, nonatomic) UIViewController *wa_topMostPresentedViewController;
- (_Bool)wa_shouldDeferAlertNotification;
- (_Bool)wa_defersNotificationsWhenPresented;
- (_Bool)wa_prefersMinimalBackButton;
- (_Bool)wa_shouldAnimateTableViewRowChanges;
@property(copy, nonatomic) NSArray *defaultPreviewActionItems;
- (_Bool)wa_is3DTouchAvailable;
- (_Bool)wa_isBeingPreviewed;
- (void)visibleConnectionStatusDidChange;
@property(readonly, nonatomic) unsigned long long visibleConnectionStatus;
- (void)performAfterTransitionEnds:(CDUnknownBlockType)arg1;
- (void)wa_applicationDidBecomeActive;
- (void)wa_applicationWillResignActive;
- (void)wa_applicationDidEnterBackground;
- (void)wa_applicationWillEnterForeground;
- (void)wa_tintColorDidChange;
- (void)wa_fontSizeDidChange;
- (void)dismissAllDropDownAlertViewsWithAnimation:(_Bool)arg1;
- (void)dismissDropDownAlertView:(id)arg1 animated:(_Bool)arg2;
- (void)showDropDownAlertView:(id)arg1 animated:(_Bool)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)wa_viewLayoutMarginsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)uniqueIdentifier;
@property(readonly, nonatomic) _WAViewControllerHelper *wa_helper;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
