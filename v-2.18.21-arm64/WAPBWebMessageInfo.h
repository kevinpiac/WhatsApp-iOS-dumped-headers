//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, WAPBMessage, WAPBMessageKey;

@interface WAPBWebMessageInfo : GPBMessage
{
}

+ (id)descriptor;
+ (id)messageInfoFromWAMessage:(id)arg1 isAction:(_Bool)arg2;

// Remaining properties
@property(nonatomic) _Bool URLNumber; // @dynamic URLNumber;
@property(nonatomic) _Bool URLText; // @dynamic URLText;
@property(nonatomic) _Bool broadcast; // @dynamic broadcast;
@property(nonatomic) _Bool clearMedia; // @dynamic clearMedia;
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(nonatomic) _Bool hasBroadcast; // @dynamic hasBroadcast;
@property(nonatomic) _Bool hasClearMedia; // @dynamic hasClearMedia;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasIgnore; // @dynamic hasIgnore;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasMediaCiphertextSha256; // @dynamic hasMediaCiphertextSha256;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasMessageStubType; // @dynamic hasMessageStubType;
@property(nonatomic) _Bool hasMessageTimestamp; // @dynamic hasMessageTimestamp;
@property(nonatomic) _Bool hasMulticast; // @dynamic hasMulticast;
@property(nonatomic) _Bool hasParticipant; // @dynamic hasParticipant;
@property(nonatomic) _Bool hasPushName; // @dynamic hasPushName;
@property(nonatomic) _Bool hasStarred; // @dynamic hasStarred;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasURLNumber; // @dynamic hasURLNumber;
@property(nonatomic) _Bool hasURLText; // @dynamic hasURLText;
@property(nonatomic) _Bool ignore; // @dynamic ignore;
@property(retain, nonatomic) WAPBMessageKey *key; // @dynamic key;
@property(copy, nonatomic) NSData *mediaCiphertextSha256; // @dynamic mediaCiphertextSha256;
@property(retain, nonatomic) WAPBMessage *message; // @dynamic message;
@property(retain, nonatomic) NSMutableArray *messageStubParametersArray; // @dynamic messageStubParametersArray;
@property(readonly, nonatomic) unsigned long long messageStubParametersArray_Count; // @dynamic messageStubParametersArray_Count;
@property(nonatomic) int messageStubType; // @dynamic messageStubType;
@property(nonatomic) unsigned long long messageTimestamp; // @dynamic messageTimestamp;
@property(nonatomic) _Bool multicast; // @dynamic multicast;
@property(copy, nonatomic) NSString *participant; // @dynamic participant;
@property(copy, nonatomic) NSString *pushName; // @dynamic pushName;
@property(nonatomic) _Bool starred; // @dynamic starred;
@property(nonatomic) int status; // @dynamic status;

@end

