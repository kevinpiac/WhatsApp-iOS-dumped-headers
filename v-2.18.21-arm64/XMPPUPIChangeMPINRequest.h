//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPRequest.h"

@interface XMPPUPIChangeMPINRequest : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithCredentialId:(id)arg1 deviceId:(id)arg2 transactionId:(id)arg3 oldMpin:(id)arg4 newMpin:(id)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end
