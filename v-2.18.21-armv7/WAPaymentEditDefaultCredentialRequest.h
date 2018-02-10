//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentRequest.h"

@class NSString;

@interface WAPaymentEditDefaultCredentialRequest : WAPaymentRequest
{
    BOOL _defaultFlag;
    NSString *_credentialId;
    NSString *_deviceId;
}

+ (id)identifier;
@property(readonly, nonatomic) BOOL defaultFlag; // @synthesize defaultFlag=_defaultFlag;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDeviceId:(id)arg1 credentialId:(id)arg2 makeDefault:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

