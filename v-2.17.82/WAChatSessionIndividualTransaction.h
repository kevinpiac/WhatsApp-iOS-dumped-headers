//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatSessionNormalTransaction.h"

@interface WAChatSessionIndividualTransaction : WAChatSessionNormalTransaction
{
}

- (id)insertSystemEvent:(int)arg1 fromJID:(id)arg2 date:(id)arg3;
- (BOOL)shouldInsertSystemEventOfType:(int)arg1;
- (void)didInsertChatSession;
- (void)updatePendingGhostMessages:(id)arg1;
- (void)updateChatSessionWithMessage:(id)arg1;

@end

