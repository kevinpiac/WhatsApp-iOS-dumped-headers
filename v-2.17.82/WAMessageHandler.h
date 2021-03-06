//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WABatchDispatcher, XMPPConnection;
@protocol OS_dispatch_queue;

@interface WAMessageHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    WABatchDispatcher *_ingressDispatcher;
    WABatchDispatcher *_egressDispatcher;
    // Error parsing type: AB, name: _batchesMessages
    XMPPConnection *_xmppConnection;
    NSMutableDictionary *_currentlyProcessingMessages;
    NSMutableDictionary *_revokedMessageSignals;
}

+ (void)recordMessageReceivedEventForWAMessage:(id)arg1 isOffline:(BOOL)arg2;
+ (id)decryptRequestFromEncNode:(id)arg1 withRetryCount:(out char *)arg2;
+ (id)messagesForStanzaIds:(id)arg1 inContext:(id)arg2;
- (void).cxx_destruct;
- (BOOL)shouldIgnoreMessageRevocationSignal:(id)arg1;
- (void)handleBatchedDecryptedMessages:(id)arg1;
- (void)processDecryptionResultsForMessageStanza:(id)arg1 plaintextProtobuf:(id)arg2 decryptJournalIdToClear:(id)arg3 error:(id)arg4 retryCount:(unsigned char)arg5;
- (void)handleBatchedMessageStanzas:(id)arg1;
- (void)flush;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)handleMessageStanza:(id)arg1;
@property(nonatomic) BOOL batchesMessages;
- (id)initWithXMPPConnection:(id)arg1;

@end

