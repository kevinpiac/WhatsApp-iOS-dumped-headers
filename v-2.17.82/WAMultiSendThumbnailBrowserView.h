//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WAMultiSendThumbnailBrowserItemViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView;
@protocol WAMultiSendThumbnailBrowserViewDelegate;

@interface WAMultiSendThumbnailBrowserView : UIView <WAMultiSendThumbnailBrowserItemViewDelegate, UIScrollViewDelegate>
{
    NSMutableArray *_itemViews;
    UIButton *_viewBlocker;
    BOOL _draggingInProgress;
    BOOL _editingModeBeforeRotationAnimation;
    UIScrollView *_scrollView;
    UILabel *_recipientLabel;
    UIImageView *_recipientChevronView;
    float _recipientPadding;
    BOOL _editing;
    BOOL _minimized;
    id <WAMultiSendThumbnailBrowserViewDelegate> _delegate;
    int _currentIndex;
    int _maximumNumberOfItems;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic, getter=isMinimized) BOOL minimized; // @synthesize minimized=_minimized;
@property(nonatomic) int maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <WAMultiSendThumbnailBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)multiSendThumbnailBrowserItemViewWasTapped:(id)arg1;
- (void)changeIndexOfItemView:(id)arg1 to:(int)arg2;
- (void)nudgeScrollViewWhenMovingItemIfNeeded:(id)arg1;
- (void)multiSendThumbnailBrowserItemViewCenterDidChange:(id)arg1;
- (void)multiSendThumbnailBrowserItemViewDidEndDragging:(id)arg1;
- (void)multiSendThumbnailBrowserItemViewDidBeginDragging:(id)arg1;
- (void)multiSendThumbnailBrowserItemViewWantsToEnterEditMode:(id)arg1;
- (void)sortItemViewsByIndex;
- (void)windowBlockerTouched:(id)arg1;
- (void)layoutViewBlocker;
- (void)removeViewBlocker;
- (void)addViewBlocker;
- (void)didMoveToWindow;
- (void)reloadThumbnailAtIndex:(int)arg1;
- (void)removeItemAtIndex:(int)arg1;
- (void)reload;
- (void)setCurrentIndex:(int)arg1 animated:(BOOL)arg2;
- (void)ensureSelectedItemVisibleWithAnimation:(BOOL)arg1;
- (void)send:(id)arg1;
- (int)bestIndexForItemViewWithCenter:(struct CGPoint)arg1;
- (struct CGPoint)centerForItemViewAtIndex:(int)arg1;
- (void)relayoutWithAnimation:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutRecipientViews;
- (void)layoutSubviews;
- (void)updateScrollView;
@property(copy, nonatomic) NSString *recipientName;
@property(readonly, nonatomic) float preferredHeight;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

