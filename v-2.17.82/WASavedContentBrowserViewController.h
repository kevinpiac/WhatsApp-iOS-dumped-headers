//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WAImageToImageTransitioning-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"
#import "WANavigationItemCustomBackButtonTitle-Protocol.h"

@class NSArray, NSString, UISegmentedControl, UIViewController, WADocumentsBrowserViewController, WAMediaGalleryViewController, WAWebLinksBrowserViewController;

@interface WASavedContentBrowserViewController : WAViewController <WAImageToImageTransitioning, WANavigationControllerPopToAnimating, WANavigationItemCustomBackButtonTitle>
{
    WADocumentsBrowserViewController *_docsViewController;
    WAWebLinksBrowserViewController *_webLinksViewController;
    NSArray *_childViewControllers;
    UISegmentedControl *_segmentedControl;
    WAMediaGalleryViewController *_mediaGalleryViewController;
    int _selectedIndex;
}

@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) WAMediaGalleryViewController *mediaGalleryViewController; // @synthesize mediaGalleryViewController=_mediaGalleryViewController;
- (void).cxx_destruct;
- (id)backButtonItemTitleForViewController:(id)arg1;
- (BOOL)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (BOOL)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
@property(readonly, nonatomic) UIViewController *currentViewController;
- (void)segmentedControlDidChange:(id)arg1;
- (void)viewDidLoad;
- (BOOL)wa_prefersMinimalBackButton;
- (id)initWithMediaManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
