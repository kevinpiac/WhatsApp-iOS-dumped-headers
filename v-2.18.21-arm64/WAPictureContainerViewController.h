//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWarningViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WANavigationControllerPopFromAnimating-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"
#import "WAProfilePictureParallaxViewDelegate-Protocol.h"
#import "WASinglePhotoPickerControllerDelegate-Protocol.h"
#import "WebImagePickerDelegate-Protocol.h"

@class GroupIconViewController, NSMutableDictionary, NSString, UIBarButtonItem, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, WAChatSession, WAProfilePictureParallaxView;

@interface WAPictureContainerViewController : WAWarningViewController <WAProfilePictureParallaxViewDelegate, WASinglePhotoPickerControllerDelegate, WebImagePickerDelegate, WANavigationControllerPopToAnimating, WANavigationControllerPopFromAnimating, WAImageToImageTransitioning, UIGestureRecognizerDelegate>
{
    WAChatSession *_chatSession;
    UIBarButtonItem *_barButtonSharePicture;
    UIBarButtonItem *_barButtonClose;
    UIImageView *_swipeUpIndicator;
    UITapGestureRecognizer *_imageViewSingleTap;
    _Bool _initialVisibleProfilePictureHeightSet;
    _Bool _pictureChangeRequestInProgress;
    _Bool _allowToNavigateBackInPictureMode;
    NSMutableDictionary *_pictureAnimationContext;
    UIPanGestureRecognizer *_imageViewPanGesture;
    double _pictureTransitionProgress;
    NSString *_jid;
    long long _viewMode;
    WAProfilePictureParallaxView *_profilePictureView;
    long long _containerViewOrientation;
    GroupIconViewController *_profilePictureViewController;
}

@property(retain, nonatomic) GroupIconViewController *profilePictureViewController; // @synthesize profilePictureViewController=_profilePictureViewController;
@property(nonatomic) long long containerViewOrientation; // @synthesize containerViewOrientation=_containerViewOrientation;
@property(readonly, nonatomic) WAProfilePictureParallaxView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)transactionDidReplaceChatSession:(id)arg1;
- (id)previewActionItems;
- (_Bool)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (id)preferredPopFromInteractionController;
- (id)popFromAnimationIdentifier;
- (void)finishTransitionWithContext:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)editPicture:(id)arg1;
- (void)webImagePicker:(id)arg1 didFinishWithImage:(id)arg2;
- (void)singlePhotoPickerControllerDidCancel:(id)arg1;
- (void)singlePhotoPickerController:(id)arg1 didFinishWithImage:(id)arg2;
- (void)showImageSearchController;
- (void)reallyShowImagePickerForSourceType:(long long)arg1;
- (void)showImagePickerForSourceType:(long long)arg1;
- (void)deleteGroupPicture:(_Bool)arg1;
- (void)startGroupPictureSetRequestWithImage:(id)arg1;
- (void)presentIconChangeInternetConnectionAlert;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleImageViewPanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeProfilePictureViewController;
- (void)addProfilePictureViewController;
- (void)switchToPictureOnlyViewModeWithAnimationDuration:(double)arg1;
- (void)switchToDefaultViewModeWithAnimationDuration:(double)arg1;
- (void)handleSingleTapOnProfilePicture:(id)arg1;
- (void)updateInteractivePictureTransition;
- (void)finishOrCancelInteractivePictureTransition;
- (void)finishPictureTransitionWithAnimationDuration:(double)arg1;
- (void)cancelPictureTransitionWithAnimationDuration:(double)arg1;
- (void)cleanUpAfterPictureTransition;
- (void)setPictureTransitionProgress:(double)arg1;
- (void)prepareToPictureCloseTransitionInteractive:(_Bool)arg1;
- (void)prepareToPictureOpenTransition;
- (void)finishInteractivePictureOpenTransitionIfNecessary;
- (void)cancelInteractivePictureOpenTransitionIfNecessary;
- (void)updateOpenPictureTransitionProgressOnTableScroll;
- (void)startInteractivePictureOpenTransitionIfNecessary;
- (double)pictureOpenTransitionProgressFromTableView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)interactiveTransitionInProgress;
- (void)profilePictureViewImageChanged:(id)arg1;
- (void)updateViewLayoutToSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)closeAction:(id)arg1;
- (void)updateNavigationBar;
- (void)shareGroupPictureAction:(id)arg1;
- (void)showDropdownAlertMessage:(id)arg1;
@property(readonly, nonatomic) WAChatSession *chatSession;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)uniqueIdentifier;
- (void)dealloc;
- (id)initWithChatSession:(id)arg1 forJID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

