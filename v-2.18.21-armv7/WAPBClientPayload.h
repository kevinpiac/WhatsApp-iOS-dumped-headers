//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSData, NSString, WAPBClientPayload_UserAgent, WAPBClientPayload_WebInfo;

@interface WAPBClientPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *clientFeaturesArray; // @dynamic clientFeaturesArray;
@property(readonly, nonatomic) unsigned int clientFeaturesArray_Count; // @dynamic clientFeaturesArray_Count;
@property(nonatomic) int connectReason; // @dynamic connectReason;
@property(nonatomic) int connectType; // @dynamic connectType;
@property(nonatomic) BOOL hasConnectReason; // @dynamic hasConnectReason;
@property(nonatomic) BOOL hasConnectType; // @dynamic hasConnectType;
@property(nonatomic) BOOL hasIosAppExtension; // @dynamic hasIosAppExtension;
@property(nonatomic) BOOL hasLegacyPassword; // @dynamic hasLegacyPassword;
@property(nonatomic) BOOL hasPassive; // @dynamic hasPassive;
@property(nonatomic) BOOL hasPushName; // @dynamic hasPushName;
@property(nonatomic) BOOL hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) BOOL hasShortConnect; // @dynamic hasShortConnect;
@property(nonatomic) BOOL hasUserAgent; // @dynamic hasUserAgent;
@property(nonatomic) BOOL hasUsername; // @dynamic hasUsername;
@property(nonatomic) BOOL hasWebInfo; // @dynamic hasWebInfo;
@property(nonatomic) int iosAppExtension; // @dynamic iosAppExtension;
@property(copy, nonatomic) NSData *legacyPassword; // @dynamic legacyPassword;
@property(nonatomic) BOOL passive; // @dynamic passive;
@property(copy, nonatomic) NSString *pushName; // @dynamic pushName;
@property(nonatomic) int sessionId; // @dynamic sessionId;
@property(nonatomic) BOOL shortConnect; // @dynamic shortConnect;
@property(retain, nonatomic) WAPBClientPayload_UserAgent *userAgent; // @dynamic userAgent;
@property(nonatomic) unsigned long long username; // @dynamic username;
@property(retain, nonatomic) WAPBClientPayload_WebInfo *webInfo; // @dynamic webInfo;

@end

