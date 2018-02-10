//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WASignalDecryptRequest : NSObject
{
    BOOL _performProtobufValidation;
    int _version;
    unsigned int _messageType;
    NSData *_ciphertextMessage;
}

@property(readonly, nonatomic) BOOL performProtobufValidation; // @synthesize performProtobufValidation=_performProtobufValidation;
@property(readonly, nonatomic) NSData *ciphertextMessage; // @synthesize ciphertextMessage=_ciphertextMessage;
@property(readonly, nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)initWithVersion:(int)arg1 messageType:(unsigned int)arg2 ciphertextMessage:(id)arg3 performProtobufValidation:(BOOL)arg4;
- (id)initWithVersion:(int)arg1 messageType:(unsigned int)arg2 ciphertextMessage:(id)arg3;

@end
