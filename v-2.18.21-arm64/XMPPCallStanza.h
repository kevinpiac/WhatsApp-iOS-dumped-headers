//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPStanza.h"

@class NSString;

@interface XMPPCallStanza : XMPPStanza
{
    unsigned long long _type;
}

+ (unsigned long long)typeForString:(id)arg1;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)stringsForTypes;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *reason;
@property(copy, nonatomic) NSString *terminator;
@property(copy, nonatomic) NSString *mediaType;
@property(nonatomic) int duration;
- (id)callInfo;
- (id)initWithFromJID:(id)arg1 toJID:(id)arg2 type:(unsigned long long)arg3;

@end

