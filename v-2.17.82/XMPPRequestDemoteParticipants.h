//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPGroupParticipantsRequest.h"

@interface XMPPRequestDemoteParticipants : XMPPGroupParticipantsRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithGroupJID:(id)arg1 participantJIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

