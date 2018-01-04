//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CXProviderDelegate-Protocol.h"

@class CXCallController, CXProvider, CXStartCallAction, NSString, NSUUID;

@interface WACallProviderDelegate : NSObject <CXProviderDelegate>
{
    CXProvider *_provider;
    CXCallController *_callController;
    NSUUID *_lastCallUUID;
    int _lastCallType;
    BOOL _lastCallEstablished;
    NSString *_lastincomingCallID;
    NSString *_lastPeerJID;
    CXStartCallAction *_lastStartCallAction;
    BOOL _callHasVideo;
}

+ (BOOL)callProviderEnabledForCallWithVideo:(BOOL)arg1;
+ (BOOL)videoCallEnabled;
- (void).cxx_destruct;
- (void)callDidBecomeConnected:(id)arg1;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;
- (void)providerDidReset:(id)arg1;
- (void)resetAudioSession;
- (void)configureAudioSession;
- (void)reportEndCallWithReason:(int)arg1;
- (void)reportIncomingCallFromJid:(id)arg1 callId:(id)arg2 hasVideo:(BOOL)arg3;
- (void)startOutgoingCallToJid:(id)arg1 hasVideo:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isCallOngoing;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

