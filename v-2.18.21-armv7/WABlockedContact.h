//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WABlockedContact : NSObject <NSCoding>
{
    BOOL _unblockPending;
    NSString *_jid;
}

@property(nonatomic) BOOL unblockPending; // @synthesize unblockPending=_unblockPending;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (BOOL)isEqualToBlockedContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJID:(id)arg1;

@end

