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
    long long _lastCallType;
    _Bool _lastCallEstablished;
    NSString *_lastincomingCallID;
    NSString *_lastOutgoingCallPeerJID;
    CXStartCallAction *_lastStartCallAction;
    _Bool _callHasVideo;
}

+ (_Bool)callProviderEnabledForCallWithVideo:(_Bool)arg1;
+ (_Bool)videoCallEnabled;
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
- (void)reportEndCallWithReason:(long long)arg1;
- (void)reportIncomingCallFromParticipantJIDs:(id)arg1 callId:(id)arg2 hasVideo:(_Bool)arg3;
- (void)startOutgoingCallToJid:(id)arg1 hasVideo:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isCallOngoing;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
