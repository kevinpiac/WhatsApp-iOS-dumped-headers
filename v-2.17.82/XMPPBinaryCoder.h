//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMPPTokenizer;

@interface XMPPBinaryCoder : NSObject
{
    XMPPTokenizer *_tokenizer;
}

+ (unsigned char)characterFromNibble:(unsigned char)arg1;
+ (unsigned char)characterFromHex:(unsigned char)arg1;
- (void).cxx_destruct;
- (id)readList:(id)arg1 offset:(unsigned int *)arg2 error:(unsigned int *)arg3;
- (id)decodeHexFromData:(id)arg1 discardLast:(BOOL)arg2;
- (id)decodeNibblesFromData:(id)arg1 discardLast:(BOOL)arg2;
- (id)readString:(id)arg1 offset:(unsigned int *)arg2 error:(unsigned int *)arg3;
- (unsigned int)readListLength:(id)arg1 offset:(unsigned int *)arg2 error:(unsigned int *)arg3;
- (id)readElement:(id)arg1 offset:(unsigned int *)arg2 error:(unsigned int *)arg3;
- (unsigned char)getToken:(id)arg1 index:(unsigned int)arg2;
- (unsigned int)isCanRead:(unsigned int)arg1 from:(id)arg2 offset:(unsigned int)arg3 error:(unsigned int *)arg4;
- (id)encodeListHeader:(unsigned int)arg1;
- (id)encodeHex:(id)arg1;
- (id)encodeNibble:(id)arg1;
- (id)encodeJID:(id)arg1;
- (id)encodeData:(id)arg1;
- (id)encodeString:(id)arg1;
- (id)encodeList:(id)arg1;
- (id)unserialize:(id)arg1 streamError:(out char *)arg2;
- (id)serialize:(id)arg1 compressed:(BOOL)arg2;
- (id)initForWeb;
- (id)init;

@end

