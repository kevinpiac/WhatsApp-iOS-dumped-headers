//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface WAPBWebNotificationsInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNotifyMessageCount; // @dynamic hasNotifyMessageCount;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasUnreadChats; // @dynamic hasUnreadChats;
@property(nonatomic) unsigned int notifyMessageCount; // @dynamic notifyMessageCount;
@property(retain, nonatomic) NSMutableArray *notifyMessagesArray; // @dynamic notifyMessagesArray;
@property(readonly, nonatomic) unsigned long long notifyMessagesArray_Count; // @dynamic notifyMessagesArray_Count;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(nonatomic) unsigned int unreadChats; // @dynamic unreadChats;

@end

