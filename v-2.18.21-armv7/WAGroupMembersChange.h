//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatStorageManagedObject.h"

@class NSString;

@interface WAGroupMembersChange : WAChatStorageManagedObject
{
}

+ (id)insertEntryForGroupJIDImpl:(id)arg1 changeTime:(id)arg2 jid:(id)arg3 oldPhash:(id)arg4 changeAction:(int)arg5 inContext:(id)arg6;
+ (id)insertSnapshotEntryForGroupJID:(id)arg1 changeTime:(id)arg2 participants:(id)arg3 oldPhash:(id)arg4 inContext:(id)arg5;
+ (id)insertEntryForGroupJID:(id)arg1 changeTime:(id)arg2 jid:(id)arg3 oldPhash:(id)arg4 changeAction:(int)arg5 inContext:(id)arg6;

// Remaining properties
@property(nonatomic) double changeDate; // @dynamic changeDate;
@property(nonatomic) int changeType; // @dynamic changeType;
@property(copy, nonatomic) NSString *groupJID; // @dynamic groupJID;
@property(copy, nonatomic) NSString *memberJids; // @dynamic memberJids;
@property(copy, nonatomic) NSString *phashBeforeChange; // @dynamic phashBeforeChange;

@end

