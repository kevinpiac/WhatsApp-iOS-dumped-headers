//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NoiseFallbackHandshake, NoiseFullHandshake, NoiseResumeHandshake, NoiseStreamCipher, WAECPublicKey, WAPBClientPayload;

@interface NoiseHandshakeManager : NSObject
{
    unsigned long long _handshakeType;
    NoiseStreamCipher *_streamCipher;
    WAPBClientPayload *_loginPayload;
    NoiseFullHandshake *_fullHandshake;
    NoiseResumeHandshake *_resumeHandshake;
    NoiseFallbackHandshake *_fallbackHandshake;
    unsigned long long _handshakeState;
    WAECPublicKey *_serverStaticPublicKey;
}

@property(readonly, nonatomic) WAECPublicKey *serverStaticPublicKey; // @synthesize serverStaticPublicKey=_serverStaticPublicKey;
@property(readonly, nonatomic) unsigned long long handshakeState; // @synthesize handshakeState=_handshakeState;
- (void).cxx_destruct;
- (_Bool)validateNoiseCertificate:(id)arg1 serverHandshakeStaticPublicKey:(id)arg2;
- (void)cleanupOnSuccessOrFail;
@property(readonly, nonatomic) NoiseStreamCipher *streamCipher;
- (void)consumeFrameContents:(id)arg1;
- (id)frameContentsToSend;
- (id)initWithLoginPayload:(id)arg1 clientStaticKeyPair:(id)arg2 serverStaticPublicKey:(id)arg3;
- (id)initWithLoginPayload:(id)arg1 clientStaticKeyPair:(id)arg2;

@end

