//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAChatSession, WAContact, WAMessage, WAMessageAttributedTextSliceLink, WAMessageContainerView;
@protocol UIViewControllerTransitionCoordinator;

@protocol WAMessageContainerViewDelegate <NSObject>
- (_Bool)isMessageContainerViewInEditingMode:(WAMessageContainerView *)arg1;
- (_Bool)shouldAllowShowMessageInfoFromMessageContainerView:(WAMessageContainerView *)arg1;
- (_Bool)shouldAllowReplyToMessageFromMessageContainerView:(WAMessageContainerView *)arg1;
- (void)messageContainerViewDidSendAgainPayment:(WAMessageContainerView *)arg1;
- (void)messageContainerViewDidAcceptPayment:(WAMessageContainerView *)arg1;
- (void)messageContainerViewDidRequestStopLocationSharing:(WAMessageContainerView *)arg1;
- (void)messageContainerViewDidRequestViewLiveLocation:(WAMessageContainerView *)arg1;
- (unsigned long long)presentationContextForMessageContainerView:(WAMessageContainerView *)arg1;
- (void)messageContainerViewDidRequestStopNetworkTransfer:(WAMessageContainerView *)arg1;
- (void)messageContainerViewDidRequestStartNetworkTransfer:(WAMessageContainerView *)arg1;
- (void)messageContainerViewDidRequestStopPlayback:(WAMessageContainerView *)arg1;
- (void)messageContainerViewDidRequestStartPlayback:(WAMessageContainerView *)arg1;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didRequestOpenQuotedChatSession:(WAChatSession *)arg2;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didRequestScrollToQuotedMessage:(WAMessage *)arg2;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didRequestShowAllContacts:(WAMessage *)arg2;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didRequestMessageContact:(WAContact *)arg2;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didRequestInviteContact:(WAContact *)arg2;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didRequestSaveContact:(WAContact *)arg2;
- (void)messageContainerViewDidInvalidateLayout:(WAMessageContainerView *)arg1;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didRequestShowOptionsForLink:(WAMessageAttributedTextSliceLink *)arg2;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didRequestHandleLink:(WAMessageAttributedTextSliceLink *)arg2;
- (id <UIViewControllerTransitionCoordinator>)transitionCoordinatorForMessageContainerView:(WAMessageContainerView *)arg1;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didReceiveLongPressAtPoint:(struct CGPoint)arg2;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didReceiveDoubleTapAtPoint:(struct CGPoint)arg2;
- (void)messageContainerView:(WAMessageContainerView *)arg1 didReceiveSingleTapAtPoint:(struct CGPoint)arg2;
@end

