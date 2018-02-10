//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, WACircularBuffer, WAMediaKey;

@interface WAMediaSidecarDecryptor : NSObject
{
    WAMediaKey *_mediaKey;
    NSData *_streamingSidecar;
    unsigned long long _curOffset;
    unsigned long long _ciphertextEntityLength;
    struct _CCCryptor *_aesRef;
    CDStruct_43cfb2c2 _curHmacCtx;
    NSMutableData *_plaintextBuffer;
    WACircularBuffer *_ivCircularBuffer;
    _Bool _unpadded;
    _Bool _complete;
}

@property(readonly, nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) unsigned long long curOffset; // @synthesize curOffset=_curOffset;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)outputLengthForInputLength:(unsigned long long)arg1;
- (_Bool)updateWithCiphertextIn:(const void *)arg1 ciphertextInLength:(unsigned long long)arg2 plaintextOut:(void *)arg3 plaintextOutLength:(unsigned long long)arg4 plaintextOutMoved:(unsigned long long *)arg5;
- (id)initWithMediaKey:(id)arg1 streamingSidecar:(id)arg2 streamingIV:(id)arg3 chunkIndex:(unsigned long long)arg4 ciphertextEntityLength:(unsigned long long)arg5;

@end
