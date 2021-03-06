//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSInputStream, NSMutableData;

@interface WAMediaCipher : NSObject
{
    struct _CCCryptor *_cryptorRef;
    CDStruct_43cfb2c2 _runningHmacContext;
    struct CC_SHA256state_st _runningEncShaContext;
    struct CC_SHA256state_st _runningPlainShaContext;
    NSMutableData *_sidecar;
    unsigned int _sidecarCurrentChunk;
    NSMutableData *_sidecarChunkBuffer;
    NSData *_encDigest;
    NSData *_plainDigest;
    NSData *_cipherKey;
    NSData *_macKey;
    NSData *_refKey;
    NSData *_iv;
    NSData *_remainingChunk;
    NSData *_encryptedChunkData;
    NSInputStream *_inputStream;
}

+ (id)calculateDigestOfFileAtPath:(id)arg1;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(copy, nonatomic) NSData *encryptedChunkData; // @synthesize encryptedChunkData=_encryptedChunkData;
@property(copy, nonatomic) NSData *remainingChunk; // @synthesize remainingChunk=_remainingChunk;
@property(copy, nonatomic) NSData *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSData *refKey; // @synthesize refKey=_refKey;
@property(copy, nonatomic) NSData *macKey; // @synthesize macKey=_macKey;
@property(copy, nonatomic) NSData *cipherKey; // @synthesize cipherKey=_cipherKey;
@property(readonly, nonatomic) NSData *plainDigest; // @synthesize plainDigest=_plainDigest;
@property(readonly, nonatomic) NSData *encDigest; // @synthesize encDigest=_encDigest;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *streamingSidecar;
- (BOOL)encryptFileSeekTo:(unsigned int)arg1 seekData:(id)arg2;
- (id)encryptFileNextDataChunk;
- (void)encryptFileInitWithPath:(id)arg1;
- (id)sidecarDecryptDataForBuffer:(id)arg1 final:(BOOL)arg2;
- (void)sidecarDecryptSeekToChunk:(unsigned int)arg1;
- (BOOL)sidecarDecryptInit:(id)arg1;
- (id)streamDecryptFinalForBuffer:(const char *)arg1 length:(int)arg2;
- (id)streamDecryptedDataForBuffer:(const char *)arg1 length:(int)arg2;
- (BOOL)streamDecryptInit;
- (id)referenceForJid:(id)arg1;
- (void)appendSidecarDataForCiphertext:(id)arg1 final:(BOOL)arg2;
- (id)streamEncryptFinalData;
- (id)streamEncryptDataForChunk:(id)arg1;
- (BOOL)streamEncryptInit;
- (BOOL)initCryptorInMode:(unsigned int)arg1 iv:(const void *)arg2;
- (id)encryptedDataForData:(id)arg1;
- (BOOL)decryptFileAtURL:(id)arg1 toURL:(id)arg2;
- (void)dealloc;
- (id)initWithKey:(id)arg1 mediaType:(int)arg2;

@end

