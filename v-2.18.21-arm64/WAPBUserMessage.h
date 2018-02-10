//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, WAPBMessage, WAPBReceipts;

@interface WAPBUserMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) WAPBMessage *e2EMessage; // @dynamic e2EMessage;
@property(nonatomic) unsigned long long e2EVersion; // @dynamic e2EVersion;
@property(nonatomic) unsigned int filteredRecipientCount; // @dynamic filteredRecipientCount;
@property(copy, nonatomic) NSData *futureProofData; // @dynamic futureProofData;
@property(nonatomic) long long futureProofEncVersion; // @dynamic futureProofEncVersion;
@property(nonatomic) _Bool hasE2EMessage; // @dynamic hasE2EMessage;
@property(nonatomic) _Bool hasE2EVersion; // @dynamic hasE2EVersion;
@property(nonatomic) _Bool hasFilteredRecipientCount; // @dynamic hasFilteredRecipientCount;
@property(nonatomic) _Bool hasFutureProofData; // @dynamic hasFutureProofData;
@property(nonatomic) _Bool hasFutureProofEncVersion; // @dynamic hasFutureProofEncVersion;
@property(nonatomic) _Bool hasIsOutgoingBroadcast; // @dynamic hasIsOutgoingBroadcast;
@property(nonatomic) _Bool hasMediaPath; // @dynamic hasMediaPath;
@property(nonatomic) _Bool hasMulticast; // @dynamic hasMulticast;
@property(nonatomic) _Bool hasPhash; // @dynamic hasPhash;
@property(nonatomic) _Bool hasPushName; // @dynamic hasPushName;
@property(nonatomic) _Bool hasReceipts; // @dynamic hasReceipts;
@property(nonatomic) _Bool hasReceiptsVersion; // @dynamic hasReceiptsVersion;
@property(nonatomic) _Bool hasStarred; // @dynamic hasStarred;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasThumbPath; // @dynamic hasThumbPath;
@property(nonatomic) _Bool isOutgoingBroadcast; // @dynamic isOutgoingBroadcast;
@property(copy, nonatomic) NSString *mediaPath; // @dynamic mediaPath;
@property(nonatomic) _Bool multicast; // @dynamic multicast;
@property(copy, nonatomic) NSString *phash; // @dynamic phash;
@property(copy, nonatomic) NSString *pushName; // @dynamic pushName;
@property(retain, nonatomic) WAPBReceipts *receipts; // @dynamic receipts;
@property(nonatomic) unsigned long long receiptsVersion; // @dynamic receiptsVersion;
@property(nonatomic) _Bool starred; // @dynamic starred;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *thumbPath; // @dynamic thumbPath;

@end
