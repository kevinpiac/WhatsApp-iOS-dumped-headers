//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, WAEditableImageCompositeView, WAMultiSendMediaItem;
@protocol WAFilterPreviewViewDelegate;

@interface WAFilterPreviewView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isPanDownGestureOnGoing;
    BOOL _isPanUpGestureOnGoing;
    BOOL _isPanLeftGestureOnGoing;
    BOOL _isPanRightGestureOnGoing;
    UIView *_blurEffectView;
    UIPanGestureRecognizer *_panGesture;
    WAEditableImageCompositeView *_compositeView;
    WAMultiSendMediaItem *_currentMediaItem;
    id <WAFilterPreviewViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WAFilterPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAMultiSendMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
- (void).cxx_destruct;
- (void)resetIsPanGestureOnGoing;
- (BOOL)isPanGestureOnGoing;
- (float)transitionCenterY;
- (float)transitionScale;
- (void)gestureRecognizerDidFinish:(id)arg1;
- (void)gestureRecognizerDidChange:(id)arg1;
- (void)gestureRecognizerDidBegan:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)mediaItemDidUpdatePreviewContent:(id)arg1;
- (void)showContentView;
- (void)hideContentView;
- (void)hideCurrentMedia;
- (void)setupCompositeViewImage:(id)arg1;
- (void)reconfigCurrentMediaItem;
- (void)showCurrentMediaWithTimeOffset:(double)arg1;
- (void)layoutCompositeView;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

