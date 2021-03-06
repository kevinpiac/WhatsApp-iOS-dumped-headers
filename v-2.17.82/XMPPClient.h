//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSLock, NSString;
@protocol WADeviceDate, WAServerDate;

@interface XMPPClient : NSObject
{
    unsigned int _lastSentChatState;
    NSLock *_outgoingChatStateLock;
    unsigned int _lastReceivedChatState;
    NSLock *_incomingChatStateLock;
    unsigned int _presence;
    NSDate<WADeviceDate> *_outgoingChatStateTimestamp;
    NSDate<WADeviceDate> *_incomingChatStateTimestamp;
    NSString *_groupJIDForChatState;
    NSDate<WAServerDate> *_lastSeenTimestamp;
    NSString *_jid;
}

@property(copy) NSString *jid; // @synthesize jid=_jid;
@property(retain) NSDate<WAServerDate> *lastSeenTimestamp; // @synthesize lastSeenTimestamp=_lastSeenTimestamp;
@property(copy) NSString *groupJIDForChatState; // @synthesize groupJIDForChatState=_groupJIDForChatState;
@property(retain) NSDate<WADeviceDate> *incomingChatStateTimestamp; // @synthesize incomingChatStateTimestamp=_incomingChatStateTimestamp;
@property(retain) NSDate<WADeviceDate> *outgoingChatStateTimestamp; // @synthesize outgoingChatStateTimestamp=_outgoingChatStateTimestamp;
@property unsigned int presence; // @synthesize presence=_presence;
- (void).cxx_destruct;
@property unsigned int lastReceivedChatState;
@property unsigned int lastSentChatState;
- (void)reset;
- (id)initWithJID:(id)arg1;

@end

