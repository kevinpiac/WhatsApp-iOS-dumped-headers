//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPGroupRequest.h"

@interface XMPPRequestCreateGroup : XMPPGroupRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithSubject:(id)arg1 description:(id)arg2 participantJIDs:(id)arg3 key:(id)arg4 locked:(_Bool)arg5 webClientRequestID:(id)arg6 completion:(CDUnknownBlockType)arg7;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

