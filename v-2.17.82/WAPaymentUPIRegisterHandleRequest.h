//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentRequest.h"

@class NSString;

@interface WAPaymentUPIRegisterHandleRequest : WAPaymentRequest
{
    BOOL _defaultDebit;
    BOOL _defaultCredit;
    NSString *_bankInfo;
    NSString *_deviceId;
}

+ (id)identifier;
@property(readonly, nonatomic) BOOL defaultCredit; // @synthesize defaultCredit=_defaultCredit;
@property(readonly, nonatomic) BOOL defaultDebit; // @synthesize defaultDebit=_defaultDebit;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *bankInfo; // @synthesize bankInfo=_bankInfo;
- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBankInfo:(id)arg1 deviceId:(id)arg2 defaultDebit:(BOOL)arg3 defaultCredit:(BOOL)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

