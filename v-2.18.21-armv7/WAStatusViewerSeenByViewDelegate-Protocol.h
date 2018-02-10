//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIPanGestureRecognizer, WAActionSheetPresenter, WAStatusViewerSeenByView;

@protocol WAStatusViewerSeenByViewDelegate <NSObject>
- (BOOL)canHideUserJID:(NSString *)arg1 fromStatusViewSeenByView:(WAStatusViewerSeenByView *)arg2;
- (void)statusViewSeenByView:(WAStatusViewerSeenByView *)arg1 didRequestPresentActionSheet:(WAActionSheetPresenter *)arg2;
- (void)statusViewSeenByView:(WAStatusViewerSeenByView *)arg1 didRequestHideUserJID:(NSString *)arg2;
- (void)statusViewSeenByViewDidRequestRemoveMessage:(WAStatusViewerSeenByView *)arg1;
- (void)statusViewSeenByViewDidRequestForwardMessage:(WAStatusViewerSeenByView *)arg1;
- (void)statusViewSeenByView:(WAStatusViewerSeenByView *)arg1 didReceivePanGesture:(UIPanGestureRecognizer *)arg2;
- (void)statusViewSeenByViewDidResize:(WAStatusViewerSeenByView *)arg1;
- (void)statusViewSeenByViewDidRequestDismiss:(WAStatusViewerSeenByView *)arg1;
@end

