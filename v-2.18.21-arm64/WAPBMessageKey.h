//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface WAPBMessageKey : GPBMessage
{
}

+ (id)descriptor;
- (void)addStanzaId:(id)arg1 remoteJid:(id)arg2 participant:(id)arg3 fromMe:(_Bool)arg4;

// Remaining properties
@property(nonatomic) _Bool fromMe; // @dynamic fromMe;
@property(nonatomic) _Bool hasFromMe; // @dynamic hasFromMe;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasParticipant; // @dynamic hasParticipant;
@property(nonatomic) _Bool hasRemoteJid; // @dynamic hasRemoteJid;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *participant; // @dynamic participant;
@property(copy, nonatomic) NSString *remoteJid; // @dynamic remoteJid;

@end

