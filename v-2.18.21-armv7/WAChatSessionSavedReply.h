//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, WAChatSession, WAMessage, WARichText;

@interface WAChatSessionSavedReply : NSObject <NSCopying>
{
    NSString *_stanzaID;
    NSString *_chatJID;
    unsigned int _lastEditEpoch;
    WARichText *_text;
    WAChatSession *_parentChatSession;
}

@property(nonatomic) __weak WAChatSession *parentChatSession; // @synthesize parentChatSession=_parentChatSession;
@property(copy, nonatomic) WARichText *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *stringRepresentation;
@property(retain, nonatomic) WAChatSession *quotedChatSession;
@property(retain, nonatomic) WAMessage *quotedMessage;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStringRepresentation:(id)arg1;

@end
