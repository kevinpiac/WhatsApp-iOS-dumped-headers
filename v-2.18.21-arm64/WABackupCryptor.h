//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WABackupCryptor : NSObject
{
    NSData *_encryptionKey;
    NSData *_verificationKey;
}

- (void).cxx_destruct;
- (id)dataForBlob:(id)arg1 error:(id *)arg2;
- (id)blobForData:(id)arg1 error:(id *)arg2;
- (_Bool)decryptFileWithOptions:(unsigned long long)arg1 fromPath:(id)arg2 toPath:(id)arg3 header:(id)arg4 error:(id *)arg5;
- (_Bool)encryptFileWithOptions:(unsigned long long)arg1 fromPath:(id)arg2 toPath:(id)arg3 header:(id)arg4 error:(id *)arg5;
- (_Bool)cryptFileWithOperation:(unsigned int)arg1 fromPath:(id)arg2 toPath:(id)arg3 header:(id)arg4 mutableHeader:(id)arg5 error:(id *)arg6;
- (id)initWithEncryptionKey:(id)arg1 verificationKey:(id)arg2;

@end
