//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPRequest.h"

@interface XMPPUPISetMPINRequest : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithCredentialId:(id)arg1 deviceId:(id)arg2 transactionId:(id)arg3 otp:(id)arg4 mpin:(id)arg5 atmPin:(id)arg6 lastDigits:(id)arg7 expiryMonth:(id)arg8 expiryYear:(id)arg9 defaultDebit:(BOOL)arg10 defaultCredit:(BOOL)arg11 completion:(CDUnknownBlockType)arg12;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end
