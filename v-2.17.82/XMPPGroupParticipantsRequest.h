//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPGroupRequest.h"

@class NSArray;

@interface XMPPGroupParticipantsRequest : XMPPGroupRequest
{
    NSArray *_participantJIDs;
}

+ (void)modifyRequestsWithJID:(id)arg1 shouldInitialize:(BOOL)arg2 action:(CDUnknownBlockType)arg3;
+ (BOOL)hasPendingRequestsForGroupJID:(id)arg1 participantJID:(id)arg2;
@property(readonly, nonatomic) NSArray *participantJIDs; // @synthesize participantJIDs=_participantJIDs;
- (void).cxx_destruct;
- (void)willEnqueue;
- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (void)removeFromActive;
- (id)initWithGroupJID:(id)arg1 participantJIDs:(id)arg2;

@end

