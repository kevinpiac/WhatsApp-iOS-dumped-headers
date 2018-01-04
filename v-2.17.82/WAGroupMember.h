//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, WAChatSession;

@interface WAGroupMember : NSManagedObject
{
    int _change;
    BOOL _blocked;
    NSString *_statusMessage;
}

@property(nonatomic) BOOL blocked; // @synthesize blocked=_blocked;
@property(copy, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isUnknownContact) BOOL unknownContact;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) WAChatSession *chatSession; // @dynamic chatSession;
@property(nonatomic) int contactABID; // @dynamic contactABID;
@property(copy, nonatomic) NSString *contactIdentifier; // @dynamic contactIdentifier;
@property(nonatomic) BOOL isActive; // @dynamic isActive;
@property(nonatomic) BOOL isAdmin; // @dynamic isAdmin;
@property(copy, nonatomic) NSString *memberJID; // @dynamic memberJID;
@property(retain, nonatomic) NSNumber *senderKeySent; // @dynamic senderKeySent;

@end
