//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPaymentUPI : NSObject
{
}

+ (id)CLErrorDomain;
+ (void)resetCLState;
+ (id)getCredentialsPresentedFrom:(id)arg1 paymentAccount:(id)arg2 amount_1000:(id)arg3 payer:(id)arg4 payee:(id)arg5 token:(id)arg6 keys:(id)arg7 checkMpin:(_Bool)arg8 changeMpin:(_Bool)arg9 setMpin:(_Bool)arg10;
+ (id)getChallengeOfType:(id)arg1;
+ (id)generateUniqueTransactionIdentifier;
+ (id)bindDevicePhoneNumbers;
+ (id)generateBindDeviceSMSForVerificationCode:(id)arg1;
+ (void)setLastSentBindDeviceVerificationCode:(id)arg1;
+ (id)lastSentBindDeviceVerificationCode;
+ (void)resetBindDeviceVerificationCode;
+ (id)bindDeviceVerificationCode;
+ (id)mobile;
+ (id)deviceId;
+ (id)appId;
+ (void)notifyAboutCLCompletion:(id)arg1 error:(id)arg2 userInfo:(id)arg3;
+ (id)otpFromCredentials:(id)arg1;
+ (id)nmpinFromCredentials:(id)arg1;
+ (id)mpinFromCredentials:(id)arg1;
+ (id)atmPinFromCredentials:(id)arg1;
+ (id)encryptedBlobFromData:(id)arg1;
+ (id)controlsForOTPLength:(long long)arg1 atmPinLength:(long long)arg2 mPinLength:(long long)arg3 nmPinLength:(long long)arg4;
+ (id)configurationWithResendOTPButton:(_Bool)arg1 bankName:(id)arg2;
+ (id)keyCode;
+ (id)saltWithAppId:(id)arg1 mobile:(id)arg2 deviceId:(id)arg3 transactionId:(id)arg4 amount:(id)arg5 payer:(id)arg6 payee:(id)arg7;
+ (id)hmacForAppId:(id)arg1 mobile:(id)arg2 deviceId:(id)arg3 token:(id)arg4 transactionId:(id)arg5 amount:(id)arg6 payer:(id)arg7 payee:(id)arg8;

@end

