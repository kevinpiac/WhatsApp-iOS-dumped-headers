//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBMessage, NSString;

@interface WASignalManagerEncryptionRequest : NSObject
{
    GPBMessage *_message;
    NSString *_jid;
}

@property(readonly, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(readonly, nonatomic) GPBMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL fastRatchet;
- (id)initWithMessage:(id)arg1 jid:(id)arg2;

@end

