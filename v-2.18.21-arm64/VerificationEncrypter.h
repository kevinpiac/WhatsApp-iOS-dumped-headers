//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VerificationEncrypter : NSObject
{
}

+ (void)removeRecoveryTokenFile;
+ (void)removeRecoveryTokenFromKeychain;
+ (_Bool)storeRecoveryToken:(id)arg1;
+ (_Bool)storeRecoveryToken:(id)arg1 forPhoneNumber:(id)arg2;
+ (id)recoveryToken;
+ (id)recoveryTokenForPhoneNumber:(id)arg1;
+ (id)generateRecoveryToken;
+ (id)abbreviatedPhoneNumber:(id)arg1;
+ (id)recoveryTokenFromFileForPhoneNumber:(id)arg1;
+ (_Bool)writeRecoveryTokenToFile:(id)arg1 ccAndPhoneNumber:(id)arg2;
+ (id)recoveryTokenFilePath;
+ (id)readRecoveryTokenFromKeychain;
+ (void)writeRecoveryTokenToKeychain:(id)arg1;
+ (id)decryptData:(id)arg1 saltLength:(unsigned long long)arg2 encodedSecret:(id)arg3 phoneNumberSecret:(id)arg4;
+ (id)saltAndEncryptData:(id)arg1 saltLength:(unsigned long long)arg2 encodedSecret:(id)arg3 phoneNumberSecret:(id)arg4;
+ (id)encryptionKeyFromSalt:(id)arg1 encodedSecret:(id)arg2 phoneNumberSecret:(id)arg3;

@end

