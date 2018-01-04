//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMPPConnectionHandler-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, WAWebClientSession, XMPPConnection;
@protocol WAWebClientDelegate;

@interface WAWebClient : NSObject <XMPPConnectionHandler>
{
    XMPPConnection *_xmppConnection;
    NSMutableDictionary *_deferredSyncTasks;
    BOOL _available;
    double _lastActiveTriggerTime;
    NSMutableDictionary *_chatStates;
    WAWebClientSession *_currentSession;
    NSMutableArray *_requestsPendingChallenge;
    NSString *_actionResponseCacheEpoch;
    NSMutableDictionary *_actionResponseCache;
    NSMutableDictionary *_issuedChallenges;
    NSString *_lastSyncedBrowserID;
    BOOL _didResumeOnDifferentBrowser;
    BOOL _idleTimerDisabled;
    NSDate *_lastForwardMostContactedChats;
    id <WAWebClientDelegate> _delegate;
}

+ (BOOL)isSupported;
@property(nonatomic) __weak id <WAWebClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)e2eIdentityChanged:(id)arg1;
- (void)batteryLevelOrStateDidChange:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)reenableIdleTimer;
- (void)disableIdleTimer;
- (void)handleChallengeResponse:(id)arg1;
- (id)challengeWithNotificationID:(id)arg1 webRef:(id)arg2 browserID:(id)arg3 syncType:(id)arg4;
- (void)sendChallengeToServerForRequest:(id)arg1 notificationID:(id)arg2 syncType:(id)arg3;
- (void)reportMediaResponseCode:(unsigned int)arg1 mediaURL:(id)arg2 mediaKey:(id)arg3 forRequestID:(id)arg4;
- (void)notifyAddedOrUpdatedContacts:(id)arg1 removedJIDs:(id)arg2 removeMissingJIDs:(BOOL)arg3;
- (void)notifyAllChatsArchived:(BOOL)arg1;
- (void)notifyAllChatsDeleted;
- (void)notifyChatDeleted:(id)arg1;
- (void)notifyAllChatsCleared;
- (void)notifyChatCleared:(id)arg1 beforeDate:(id)arg2 ofKind:(id)arg3 shouldDeleteStarred:(BOOL)arg4;
- (void)notifyMessagesStarredStateChanged:(id)arg1 starred:(BOOL)arg2 inChatJID:(id)arg3;
- (void)notifyMessagesDeleted:(id)arg1 inChatSession:(id)arg2;
- (void)notifyChangeOfMuteStateForJID:(id)arg1;
- (void)notifyChangeOfPinnedStateInChatSession:(id)arg1;
- (void)notifyChangeOfArchiveStateInChatSession:(id)arg1;
- (void)notifyChangeOfNameInChatSessions:(id)arg1;
- (void)markStatusAsSeen:(id)arg1;
- (void)markNotSpamChatWithJID:(id)arg1;
- (void)markChatWithJID:(id)arg1 read:(BOOL)arg2;
- (void)notifyStatusChangeInMessage:(id)arg1;
- (void)sendModifyTagForChatSession:(id)arg1;
- (void)sendUpdateForChatSession:(id)arg1;
- (void)forwardMessage:(id)arg1 invisible:(BOOL)arg2 update:(BOOL)arg3;
- (void)forwardMessagesIfNeeded:(id)arg1 fromChatSession:(id)arg2 update:(BOOL)arg3;
- (void)transactionDidProcessMessages:(id)arg1;
- (void)pauseOutgoingChatStateForJID:(id)arg1;
- (void)setOutgoingChatState:(unsigned int)arg1 forJID:(id)arg2;
- (unsigned int)outgoingChatStateForJID:(id)arg1;
- (void)sendGenericErrorResponse:(int)arg1 andAckNotification:(id)arg2;
- (void)notifyGenericErrorResponse:(int)arg1 requestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)outgoingMessagesAndPTTFromMessages:(id)arg1 withStatusUpdateAfterTimestamp:(double)arg2 lastTimestamp:(double *)arg3;
- (BOOL)isJIDCurrentUser:(id)arg1;
- (void)forwardMostContactedChatsIfNeeded;
- (void)forwardMostContactedChats;
- (void)forwardMostContactedChatsForSession:(id)arg1;
- (void)sendResumeResponseWithChatSessionStates:(id)arg1 forNotification:(id)arg2;
- (void)sendJIDsOfMembersInBroadcastList:(id)arg1 forSession:(id)arg2;
- (void)sendContactsForNotification:(id)arg1 forSession:(id)arg2 isDuplicate:(BOOL)arg3 isPreemptive:(BOOL)arg4;
- (void)sendChatSessionsForNotification:(id)arg1 forSession:(id)arg2 isDuplicate:(BOOL)arg3 isPreemptive:(BOOL)arg4;
- (void)sendPreemptiveResponseForSession:(id)arg1;
- (void)forwardRecentMessagesInChats:(id)arg1 forSession:(id)arg2;
@property(nonatomic, getter=isAvailable) BOOL available;
- (void)handleAddContacts:(id)arg1 inNotification:(id)arg2;
- (void)internalHandleSetStatusPrivacyTo:(int)arg1 element:(id)arg2 inNotification:(id)arg3;
- (void)handleContactsPrivacy:(id)arg1 inNotification:(id)arg2;
- (void)handleWhitelistPrivacy:(id)arg1 inNotification:(id)arg2;
- (void)handleBlacklistPrivacy:(id)arg1 inNotification:(id)arg2;
- (void)handleSetProfile:(id)arg1 inNotification:(id)arg2;
- (void)setBlocked:(BOOL)arg1 forElement:(id)arg2 inNotification:(id)arg3;
- (void)handleRemoveBlock:(id)arg1 inNotification:(id)arg2;
- (void)handleAddBlock:(id)arg1 inNotification:(id)arg2;
- (void)handleCreateGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleSubjectGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleLeaveGroup:(id)arg1 inNotification:(id)arg2;
- (void)handlePromoteGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleAddGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleRemoveGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleDeletePicture:(id)arg1 inNotification:(id)arg2;
- (void)handleSetPicture:(id)arg1 inNotification:(id)arg2;
- (void)handleSpamChat:(id)arg1 inNotification:(id)arg2;
- (void)handleSetSpam:(id)arg1 inNotification:(id)arg2;
- (void)handlePinChat:(id)arg1 inNotification:(id)arg2;
- (void)setStarredState:(BOOL)arg1 forElement:(id)arg2 inNotification:(id)arg3;
- (void)handleUnstarChat:(id)arg1 inNotification:(id)arg2;
- (void)handleStarChat:(id)arg1 inNotification:(id)arg2;
- (void)handleMuteChat:(id)arg1 inNotification:(id)arg2;
- (void)setArchivedState:(BOOL)arg1 forElement:(id)arg2 inNotification:(id)arg3;
- (void)handleUnarchiveChat:(id)arg1 inNotification:(id)arg2;
- (void)handleArchiveChat:(id)arg1 inNotification:(id)arg2;
- (void)handleClearChat:(id)arg1 inNotification:(id)arg2;
- (void)handleDeleteChat:(id)arg1 inNotification:(id)arg2;
- (void)handlePlayedReceived:(id)arg1 inNotification:(id)arg2;
- (void)handleSetStatus:(id)arg1 inNotification:(id)arg2;
- (void)handleSetRead:(id)arg1 inNotification:(id)arg2;
- (void)handleRecordingPresence:(id)arg1 inNotification:(id)arg2;
- (void)handlePausedPresence:(id)arg1 inNotification:(id)arg2;
- (void)handleComposingPresence:(id)arg1 inNotification:(id)arg2;
- (void)handleSubscribePresence:(id)arg1 inNotification:(id)arg2;
- (void)handleUnavailablePresence:(id)arg1 inNotification:(id)arg2;
- (void)handleAvailablePresence:(id)arg1 inNotification:(id)arg2;
- (void)handleDebugAction:(id)arg1 inNotification:(id)arg2;
- (void)handleSetAction:(id)arg1 inNotification:(id)arg2;
- (void)handleRelayAction:(id)arg1 inNotification:(id)arg2;
- (void)handleNotificationQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleStatusQuery:(id)arg1 inNotification:(id)arg2;
- (void)sendFullStatusResponseForNotification:(id)arg1;
- (void)handleVcardQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleUrlQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleIdentityQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleStarQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleSearchQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleGroupQuery:(id)arg1 inNotification:(id)arg2;
- (void)handlePreviewQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleMessageInfoQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleReceiptQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleResumeQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleMediaQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleMediaMessageQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleMessageQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleContactsQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleChatQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleActionQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleSyncQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleDeleteAction:(id)arg1 inNotification:(id)arg2;
- (void)rejectServerLoginWithWebRef:(id)arg1 reason:(unsigned int)arg2;
- (void)handlePersistentLoginRequestErrorForRequest:(id)arg1;
- (void)acceptPersistentLoginRequest:(id)arg1;
- (void)handleSyncAction:(id)arg1 inNotification:(id)arg2;
- (void)handleTask:(id)arg1 inNotification:(id)arg2;
- (void)handleAllDeferredTasks;
- (BOOL)handleNotification:(id)arg1 onConnection:(id)arg2;
- (void)connectionDidReceiveOfflineCompleteMarker:(id)arg1;
- (BOOL)handleLoginResponseStanza:(id)arg1 onConnection:(id)arg2;
- (void)xmppConnection:(id)arg1 initialConfigurationAsync:(CDUnknownBlockType)arg2;
- (void)handleRequestError:(id)arg1 name:(id)arg2;
- (void)clearCurrentSession;
- (void)makeSessionCurrent:(id)arg1;
- (void)terminateCurrentSessionWithReason:(unsigned int)arg1;
- (void)beginNewSessionWithQRCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginSessionWithQRCode:(id)arg1 completion:(id)arg2;
- (void)removeSessionWithData:(id)arg1;
- (id)allSavedSessionDataObjects;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic) BOOL hasActiveSession;
- (void)dealloc;
- (id)initWithXMPPConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

