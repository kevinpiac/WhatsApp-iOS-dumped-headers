//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface WAPBReceipts_Receipt : GPBMessage
{
}

+ (id)descriptor;
+ (id)receiptForJID:(id)arg1 receiptDictionary:(id)arg2;
- (id)receiptDictionary;
@property(readonly, nonatomic) NSString *jid;

// Remaining properties
@property(copy, nonatomic) NSString *contactName; // @dynamic contactName;
@property(nonatomic) _Bool hasContactName; // @dynamic hasContactName;
@property(nonatomic) _Bool hasServerType; // @dynamic hasServerType;
@property(nonatomic) _Bool hasTimestampDelivered; // @dynamic hasTimestampDelivered;
@property(nonatomic) _Bool hasTimestampPlayed; // @dynamic hasTimestampPlayed;
@property(nonatomic) _Bool hasTimestampRead; // @dynamic hasTimestampRead;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) int serverType; // @dynamic serverType;
@property(nonatomic) unsigned long long timestampDelivered; // @dynamic timestampDelivered;
@property(nonatomic) unsigned long long timestampPlayed; // @dynamic timestampPlayed;
@property(nonatomic) unsigned long long timestampRead; // @dynamic timestampRead;
@property(copy, nonatomic) NSString *user; // @dynamic user;

@end

