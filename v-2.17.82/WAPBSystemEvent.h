//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class WAPBSystemEvent_Encrypt, WAPBSystemEvent_Identity, WAPBSystemEvent_MissedCall;

@interface WAPBSystemEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) WAPBSystemEvent_Encrypt *encryptionChange; // @dynamic encryptionChange;
@property(retain, nonatomic) WAPBSystemEvent_Identity *identityChange; // @dynamic identityChange;
@property(retain, nonatomic) WAPBSystemEvent_MissedCall *missedCall; // @dynamic missedCall;
@property(readonly, nonatomic) int typeOneOfCase; // @dynamic typeOneOfCase;

@end
