//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WAMessageBubbleAlertButtonAccessibilityDelegate-Protocol.h"
#import "WAMessageContainerViewDelegate-Protocol.h"
#import "WAScrollTracking-Protocol.h"
#import "WATableViewCellPreviewing-Protocol.h"

@class NSArray, NSSet, NSString, UIButton, UIPanGestureRecognizer, UIView, UIViewController, WAChatCellData, WAMessageBubbleAlertButton, WAMessageBubbleForwardButton, WAMessageContainerView;
@protocol WABlurredBackgroundProviding, WAMessageBubbleTableViewCellDelegate, WATableViewCellPreviewingDelegate;

@interface WAMessageBubbleTableViewCell : UITableViewCell <WAMessageContainerViewDelegate, WAMessageBubbleAlertButtonAccessibilityDelegate, UIViewControllerPreviewingDelegate, WAScrollTracking, WATableViewCellPreviewing>
{
    WAMessageContainerView *_containerView;
    float _topMargin;
    WAMessageBubbleAlertButton *_alertButton;
    WAMessageBubbleForwardButton *_forwardButton;
    UIView *_forwardButtonBackground;
    UIPanGestureRecognizer *_swipeGestureRecognizer;
    NSArray *_accessibilityElements;
    BOOL _needsUpdateAccessibilityElements;
    id <WAMessageBubbleTableViewCellDelegate> _delegate;
    WAChatCellData *_cellData;
    id <WABlurredBackgroundProviding> _blurredBackgroundProvider;
    unsigned int _currentPasteboardContentType;
    UIViewController<WATableViewCellPreviewingDelegate> *_previewingDelegate;
    NSSet *_previewingContexts;
}

@property(copy, nonatomic) NSSet *previewingContexts; // @synthesize previewingContexts=_previewingContexts;
@property(nonatomic) __weak UIViewController<WATableViewCellPreviewingDelegate> *previewingDelegate; // @synthesize previewingDelegate=_previewingDelegate;
@property(readonly, nonatomic) unsigned int currentPasteboardContentType; // @synthesize currentPasteboardContentType=_currentPasteboardContentType;
@property(nonatomic) __weak id <WABlurredBackgroundProviding> blurredBackgroundProvider; // @synthesize blurredBackgroundProvider=_blurredBackgroundProvider;
@property(readonly, nonatomic) WAMessageContainerView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) WAChatCellData *cellData; // @synthesize cellData=_cellData;
@property(readonly, nonatomic) __weak id <WAMessageBubbleTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)updateAccessibilityElementsIfNeeded;
- (void)setNeedsUpdateAccessibilityElements;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)unregisterForPreviewing;
- (void)registerForPreviewingUsingViewController:(id)arg1;
- (BOOL)message_showID:(id)arg1;
- (BOOL)message_admin_reply:(id)arg1;
- (BOOL)message_reply:(id)arg1;
- (BOOL)message_unstar:(id)arg1;
- (BOOL)message_star:(id)arg1;
- (BOOL)message_pauseSpeaking:(id)arg1;
- (BOOL)message_startSpeaking:(id)arg1;
- (BOOL)message_sendMessage:(id)arg1;
- (BOOL)message_addToContacts:(id)arg1;
- (BOOL)message_forwardAll:(id)arg1;
- (BOOL)message_forward:(id)arg1;
- (BOOL)message_showInfo:(id)arg1;
- (BOOL)message_deleteAll:(id)arg1;
- (BOOL)message_delete:(id)arg1;
- (BOOL)message_saveAllMedia:(id)arg1;
- (BOOL)message_saveMedia:(id)arg1;
- (BOOL)message_copy:(id)arg1;
- (struct CGRect)targetRectForMenuController;
- (id)referenceViewForMenuController;
- (void)showMenuControllerFromSliceView:(id)arg1;
- (BOOL)shouldAllowShowMessageInfoFromMessageContainerView:(id)arg1;
- (BOOL)shouldAllowMessageAdminReplyToMessageFromMessageContainerView:(id)arg1;
- (BOOL)shouldAllowReplyToMessageFromMessageContainerView:(id)arg1;
- (void)messageContainerViewDidAcceptPayment:(id)arg1;
- (void)messageContainerView:(id)arg1 didRequestScrollToQuotedMessage:(id)arg2;
- (void)messageContainerViewStopLocationSharing:(id)arg1;
- (void)messageContainerViewDidRequestViewLiveLocation;
- (unsigned int)presentationContextForMessageContainerView:(id)arg1;
- (void)messageContainerViewDidRequestStopNetworkTransfer:(id)arg1;
- (void)messageContainerViewDidRequestStartNetworkTransfer:(id)arg1;
- (void)messageContainerViewDidRequestStopPlayback:(id)arg1;
- (void)messageContainerViewDidRequestStartPlayback:(id)arg1;
- (void)messageContainerView:(id)arg1 didRequestShowAllContacts:(id)arg2;
- (void)messageContainerView:(id)arg1 didRequestMessageContact:(id)arg2;
- (void)messageContainerView:(id)arg1 didRequestInviteContact:(id)arg2;
- (void)messageContainerView:(id)arg1 didRequestSaveContact:(id)arg2;
- (void)messageContainerViewDidInvalidateLayout:(id)arg1;
- (void)messageContainerView:(id)arg1 didRequestShowOptionsForLink:(id)arg2;
- (void)messageContainerView:(id)arg1 didRequestHandleLink:(id)arg2;
- (void)messageContainerView:(id)arg1 didReceiveLongPressAtPoint:(struct CGPoint)arg2;
- (void)messageContainerView:(id)arg1 didReceiveDoubleTapAtPoint:(struct CGPoint)arg2;
- (void)messageContainerView:(id)arg1 didReceiveSingleTapAtPoint:(struct CGPoint)arg2;
- (id)transitionCoordinatorForMessageContainerView:(id)arg1;
- (void)ancestorScrollViewDidScroll:(id)arg1;
- (void)forwardButtonTapped:(id)arg1;
- (void)setForwardButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isForwardButtonHidden) BOOL forwardButtonHidden;
- (BOOL)shouldShowForwardButton;
- (void)updateForwardButtonVisibilityWithAnimation:(BOOL)arg1;
- (void)alertButtonTapped:(id)arg1;
- (void)setAlertButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isAlertButtonHidden) BOOL alertButtonHidden;
- (BOOL)shouldShowAlertButton;
- (void)updateAlertButtonVisibilityWithAnimation:(BOOL)arg1;
- (id)accessibilityLabelForAlertButton:(id)arg1;
- (id)sliceViewForLongPressGestureAtPoint:(struct CGPoint)arg1;
- (void)prepareForSideSwipeTransition;
- (void)performSelectionRefusedAnimation;
- (id)viewForTransitionWithMessage:(id)arg1 returningContentSize:(struct CGSize *)arg2;
- (void)highlightTemporarily;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)updateForwardButtonBlurredBackground;
- (void)layoutForwardButtonWithContainerOnLeftEdge:(BOOL)arg1;
- (void)layoutSubviews;
- (id)parentTableView;
@property(readonly, nonatomic) UIButton *forwardButton;
- (void)addGestureRecognizerIfNeccesary;
- (void)didEndDisplay;
- (void)willBeginDisplayWithDelegate:(id)arg1;
- (void)setCellData:(id)arg1 orientation:(unsigned int)arg2;
- (void)reloadIfNeeded;
- (void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleSwipeGesture:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

