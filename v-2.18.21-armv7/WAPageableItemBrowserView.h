//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAPageableItemViewDelegate-Protocol.h"
#import "WAPagingScrollViewDelegate-Protocol.h"

@class NSMutableSet, NSString, UIColor, UIPanGestureRecognizer, WAPageableItemView, WAPagingScrollView, WAPaintCanvasDevice;
@protocol WAPageableItemBrowserViewDelegate;

@interface WAPageableItemBrowserView : UIView <WAPagingScrollViewDelegate, WAPageableItemViewDelegate>
{
    WAPagingScrollView *_pagingScrollView;
    NSMutableSet *_visiblePages;
    NSMutableSet *_recycledPages;
    BOOL _ignoreScrollViewDidScroll;
    BOOL _disableDelegateCallbacksDuringScrollingAnimation;
    int _scrollDisabledCounter;
    BOOL _isDragging;
    UIView *_dimmingView;
    BOOL _shouldAllowSuperviewPanGesture;
    BOOL _keyboardHidden;
    BOOL _scrolling;
    id <WAPageableItemBrowserViewDelegate> _delegate;
    WAPaintCanvasDevice *_paintCanvasDevice;
    int _currentIndex;
    UIColor *_accentColor;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic, getter=isKeyboardHidden) BOOL keyboardHidden; // @synthesize keyboardHidden=_keyboardHidden;
@property(readonly, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) WAPaintCanvasDevice *paintCanvasDevice; // @synthesize paintCanvasDevice=_paintCanvasDevice;
@property(nonatomic) __weak id <WAPageableItemBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopPresentation;
- (void)didScroll;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property(nonatomic, getter=isCroppingCurrentItem) BOOL croppingCurrentItem;
- (void)prepareToCancelCropping;
- (void)setViewStateOfCurrentPage:(id)arg1;
- (id)viewStateOfCurrentPage;
- (void)resetViewStates;
- (BOOL)pagingScrollView:(id)arg1 panGestureRecognizerShouldReceiveTouch:(id)arg2;
- (BOOL)canImageToImagePanGestureRecognizerBeReceived;
- (void)handleScrollViewDraggingEnded;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) float fractionalCurrentIndex;
- (id)pageableItemView:(id)arg1 replaceContentStamp:(id)arg2 sample:(id)arg3 newContent:(id)arg4;
- (BOOL)pageableItemViewDidRequestEnterFilterMode:(id)arg1;
- (BOOL)canApplyFilterToItemInPageableItemView:(id)arg1;
- (void)pageableItemView:(id)arg1 didDeleteItemAtLocation:(struct CGPoint)arg2;
- (void)pageableItemView:(id)arg1 shouldEnterPendingDeletionState:(BOOL)arg2;
- (BOOL)pageableItemView:(id)arg1 shouldDeleteItemAtLocation:(struct CGPoint)arg2;
- (id)pageableItemViewContainingViewController:(id)arg1;
- (void)pageableItemViewDidRequestSend:(id)arg1;
- (void)pageableItemViewDidRequestEndCropping:(id)arg1;
- (void)pageableItemViewDidEndEditingText:(id)arg1;
- (void)pageableItemViewWillBeginEditingText:(id)arg1;
- (void)pageableItemViewDidEndFocusedTask:(id)arg1;
- (void)pageableItemViewWillBeginFocusedTask:(id)arg1;
- (void)pageableItemViewDidUpdateThumbnail:(id)arg1;
- (void)endDisableScrolling;
- (void)beginDisableScrolling;
- (id)dequeueOrCreateViewForItem:(id)arg1;
- (void)configurePage:(id)arg1 atIndex:(int)arg2;
- (struct CGRect)frameForPageAtIndex:(int)arg1;
- (id)visiblePageAtIndex:(int)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) WAPageableItemView *currentItemView;
- (id)displayPageAtIndex:(int)arg1;
- (void)updateAccentColor;
@property(nonatomic) float brightness;
- (void)tilePages;
- (void)invalidateAllPages;
- (void)removeItemAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)recycleView:(id)arg1;
- (void)setCurrentIndex:(int)arg1 animated:(BOOL)arg2;
- (void)pause;
- (void)reloadItemAtIndex:(int)arg1;
- (void)reload;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

