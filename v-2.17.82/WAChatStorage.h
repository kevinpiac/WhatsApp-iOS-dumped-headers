//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatDataStore.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "WAChatStoragePIBackupProtocol-Protocol.h"
#import "WAPersistentRequestManagerRegistering-Protocol.h"
#import "WAUpgradeCallback-Protocol.h"

@class CLLocation, CLLocationManager, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSURL, WAChatSession, WAChatSessionSpotlightIndexer, WAExactTimer, WAMessageSpotlightIndexer, WAMessagesBySessionTask, WASearchEngine, WASpotlightIndexer, WATask;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WAChatStorage : WAChatDataStore <CLLocationManagerDelegate, WAUpgradeCallback, WAChatStoragePIBackupProtocol, WAPersistentRequestManagerRegistering>
{
    unsigned int _failedSaveCounter;
    BOOL _scheduledDelayedSave;
    NSMutableDictionary *_cachedPushNames;
    WASearchEngine *_searchEngine;
    NSObject<OS_dispatch_group> *_searchEngineDispatchGroup;
    NSObject<OS_dispatch_group> *_searchEngineRapidIndexingGroup;
    WATask *_taskIndexMessages;
    WAMessagesBySessionTask *_taskDeleteMessages;
    WAChatSessionSpotlightIndexer *_chatSessionSpotlightIndexer;
    WAMessageSpotlightIndexer *_messageSpotlightIndexer;
    NSMutableSet *_pendingParticipantsRefreshRequests;
    NSMutableDictionary *_pendingOutgoingMessages;
    BOOL _needsRegisterSiriKitOnBecomeActive;
    WAChatSession *_statusChatSession;
    WAExactTimer *_statusPSATimer;
    WAExactTimer *_statusExpirationTimer;
    NSDictionary *_statusExpirationTasks;
    BOOL _statusBadgeVisible;
    NSDictionary *_statusBadges;
    NSObject<OS_dispatch_queue> *_backgroundFetchingQueue;
    BOOL _didEverLoadDatabase;
    NSDate *_statusMarkerDate;
    NSMutableArray *_mediaAutodownloadRetryArray;
    NSMutableArray *_URLSessionTasksToProcessOnCreateMOC;
    CLLocationManager *_locationManager;
    CLLocation *_bestLocation;
    NSMutableSet *_locationQueue;
}

+ (void)updatePlaceholderCountForMessages:(id)arg1;
+ (id)findJIDInPath:(id)arg1;
+ (id)allValidationErrorsFrom:(id)arg1;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (id)refreshStatusETag;
+ (id)statusETag;
+ (double)statusHiddenIntervalFor:(short)arg1;
+ (double)statusVisibleIntervalFor:(short)arg1;
+ (id)backupKeyForMessage:(id)arg1;
+ (id)backupKeyForBackupMessage:(id)arg1;
+ (id)backupKeyForStanzaID:(id)arg1 isFromMe:(BOOL)arg2 remoteJID:(id)arg3;
+ (id)messagesForSession:(id)arg1 minSort:(int)arg2 maxSort:(int)arg3 limit:(unsigned int)arg4 ascending:(BOOL)arg5 withMoc:(id)arg6;
+ (id)messagesForSession:(id)arg1 limit:(unsigned int)arg2 ascending:(BOOL)arg3 withMoc:(id)arg4;
+ (void)performBlock:(CDUnknownBlockType)arg1 onAllChatSessionsWithMoc:(id)arg2 withPrefetchedKeyPaths:(id)arg3 currentChatSession:(id)arg4 shouldCancelBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)allChatSessionsWithMoc:(id)arg1;
@property(retain, nonatomic) NSMutableSet *locationQueue; // @synthesize locationQueue=_locationQueue;
@property(retain, nonatomic) CLLocation *bestLocation; // @synthesize bestLocation=_bestLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSMutableArray *URLSessionTasksToProcessOnCreateMOC; // @synthesize URLSessionTasksToProcessOnCreateMOC=_URLSessionTasksToProcessOnCreateMOC;
@property(retain, nonatomic) NSMutableArray *mediaAutodownloadRetryArray; // @synthesize mediaAutodownloadRetryArray=_mediaAutodownloadRetryArray;
@property(retain) NSDate *statusMarkerDate; // @synthesize statusMarkerDate=_statusMarkerDate;
@property(readonly, nonatomic) WASearchEngine *searchEngine; // @synthesize searchEngine=_searchEngine;
- (void).cxx_destruct;
- (id)existingChatSessionForJID:(id)arg1;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (id)sharedObjectKeyForPersistentRequestManager:(id)arg1;
- (id)allMemberJIDsInBroadcastList:(id)arg1;
- (id)profilePictureItemForJID:(id)arg1 inContext:(id)arg2;
- (id)profilePictureItemForJID:(id)arg1;
- (void)didDetectDatabaseCorruption;
- (void)executeDatabaseFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)executeDatabaseFetchRequest:(id)arg1;
- (void)didCreateDatabase;
- (BOOL)needsDatabaseMigrationForMetadata:(id)arg1;
- (BOOL)needsDatabaseRepairGetMetadata:(out id *)arg1;
- (void)dropDatabase;
- (BOOL)loadDatabase;
- (id)managedObjectContext;
- (id)initWithUniqueIdentifier:(id)arg1 modelName:(id)arg2 storeURL:(id)arg3 blacklistBackup:(BOOL)arg4;
- (id)initWithUniqueIdentifier:(id)arg1;
- (void)indexVCardMentionsForMessages:(id)arg1 context:(id)arg2 contactsStorage:(id)arg3 saveChanges:(BOOL)arg4;
- (id)indexMultiVCardMessagesInContext:(id)arg1 startDate:(id)arg2 limit:(unsigned int)arg3;
- (id)indexVCardMentionsForMessagesInContext:(id)arg1 startDate:(id)arg2 limit:(unsigned int)arg3 contactsStorage:(id)arg4;
- (void)fetchVCardsFromKnownContactsForWhatsAppID:(id)arg1 contactsStorage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)filteredTrustedJIDs:(id)arg1 contactsStorage:(id)arg2 managedObjectContext:(id)arg3;
- (id)filteredTrustedGroupJIDs:(id)arg1 managedObjectContext:(id)arg2;
- (void)processIncomingGroupV2Notification:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)handleInviteCodeResetNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleGroupAnnouncementOnlyNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleDeleteGroupLockedUnlockedNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleDeleteGroupNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleParticipantPromotionDemotionNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleCreateGroupNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleParticipantChangedPhoneNumberNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleParticipantsRemovedNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleParticipantsAddedNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleDescriptionChangeNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)handleSubjectChangeNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)verifiedNameDidUpdate:(id)arg1;
- (void)reallyRegisterHandlersForPersistentRequestManager:(id)arg1;
- (void)chatStorageDidUpdateChatSessions:(id)arg1;
- (void)postGlobalChatSessionUpdateNotification;
@property(readonly, nonatomic) WASpotlightIndexer *chatSessionSpotlightIndexer;
@property(readonly, nonatomic) WAMessageSpotlightIndexer *messageSpotlightIndexer;
- (unsigned int)countAllMessagesOfType:(int)arg1;
- (unsigned int)countEntitiesOfType:(Class)arg1 withPredicate:(id)arg2;
- (unsigned int)countOfMessages;
- (id)tarFilePathsOfTypes:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2;
- (id)thumbnailFilePathsShouldCancel:(CDUnknownBlockType)arg1;
- (id)filePathsForProperty:(id)arg1 ofTypes:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;
- (id)estimatedVideoUploadSize;
- (void)calculatePotentialBackupSize:(CDStruct_ac5c10e2 *)arg1 shouldCancel:(CDUnknownBlockType)arg2;
- (unsigned long long)calculateDocumentTARExpectedSizeWithItemCount:(unsigned int)arg1;
- (long long)calculateThumbnailTARExpectedSizeForSmallItemCount:(unsigned int)arg1 largeItemCount:(unsigned int)arg2 documentItemCount:(unsigned int)arg3;
- (long long)calculateVideoTARExpectedSizeWithItemCount:(unsigned int)arg1;
- (long long)calculateMediaTARExpectedSizeWithItemCount:(unsigned int)arg1 shouldCancel:(CDUnknownBlockType)arg2;
- (long long)calculateStandardTarSizeForCount:(unsigned int)arg1;
- (void)calculateDatabaseSizes:(CDStruct_33dcf794 *)arg1;
- (unsigned long long)sizeForMediaOfType:(int)arg1;
- (void)e2eIdentityChanged:(id)arg1;
- (void)addE2EIdentityChangeEventToChatSession:(id)arg1 groupMember:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)useBestLocationResult:(id)arg1;
- (void)stopLocationManagerIfPossible;
- (void)startLocationManagerIfNecessary;
- (void)oldLocationRequestFailedWithError:(id)arg1 userInfo:(id)arg2;
- (void)oldLocationRequestFinishedWithLocation:(id)arg1 userInfo:(id)arg2;
- (void)requestLocationWithCallbackDictionary:(id)arg1;
- (void)newLocationRequestFailedWithError:(id)arg1 message:(id)arg2;
- (void)newLocationRequestFinishedWithLocation:(id)arg1 message:(id)arg2 startDate:(id)arg3;
- (void)requestLocationForMessage:(id)arg1;
- (id)uniqueKeyOfMostRecentlySentLiveLocationMessageForContact:(id)arg1;
- (void)setLastLiveLocationMessageUniqueKey:(id)arg1 forContact:(id)arg2;
- (id)liveLocationMessageUniqueKeyCache;
- (void)resendPendingReceipts;
- (void)debug_deleteAllOrphanedMessagesNow;
- (void)didBulkDeleteMessagesInChatSession:(id)arg1 beforeDate:(id)arg2 ofTypes:(id)arg3 shouldDeleteStarred:(BOOL)arg4 fromWebClient:(BOOL)arg5;
- (void)deleteMessages:(id)arg1 fromWebClient:(BOOL)arg2;
- (void)clearAllChatSessions;
- (void)deleteAllChatSessions;
- (id)allChatSessionsToEmpty;
- (void)clearChatSession:(id)arg1 fromWebClient:(BOOL)arg2;
- (void)clearChatSession:(id)arg1;
- (void)deleteChatSessions:(id)arg1 fromWebClient:(BOOL)arg2;
- (void)deleteChatSession:(id)arg1 fromWebClient:(BOOL)arg2;
- (void)deleteChatSession:(id)arg1;
- (void)emptyChatSessions:(id)arg1 deleteGroups:(BOOL)arg2 deleteOthers:(BOOL)arg3 notifyWebClient:(BOOL)arg4;
- (void)prepareChatSessionForClearing:(id)arg1;
- (void)addChildMessagesIfNeededForParentMessage:(id)arg1;
- (void)changeStatus:(int)arg1 forOutgoingMessages:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4 userData:(id)arg5 playSound:(out char *)arg6;
- (unsigned int)changeStatus:(int)arg1 forOutgoingMessagesWithStanzas:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4 userData:(id)arg5 playSound:(out char *)arg6;
- (void)sendVideoAtURL:(id)arg1 isGIF:(BOOL)arg2 gifProvider:(id)arg3 caption:(id)arg4 cameraRollReferenceUrl:(id)arg5 messageOrigin:(int)arg6 toChatSessions:(id)arg7 interactiveAnnotations:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)sendDocumentAttachment:(id)arg1 replyingToMessage:(id)arg2 toChatSessions:(id)arg3 openedFromURL:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendMessageWithImage:(id)arg1 caption:(id)arg2 messageOrigin:(int)arg3 toChatSessions:(id)arg4 isImageLikeDocument:(BOOL)arg5 optimisticUploadIdentifier:(id)arg6 interactiveAnnotations:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)sendMessageWithText:(id)arg1 metadata:(id)arg2 toChatSessions:(id)arg3 hasTextFromURL:(BOOL)arg4;
- (id)multicastMessage:(id)arg1 forRemainingSessions:(id)arg2;
- (id)prepareMulticastMessage:(id)arg1 forRemainingSessions:(id)arg2;
- (void)sendVCard:(id)arg1 replyingToMessage:(id)arg2 inChatSession:(id)arg3 openedFromURL:(BOOL)arg4;
- (void)sendVCard:(id)arg1 replyingToMessage:(id)arg2 inChatSession:(id)arg3;
- (void)sendLocationMessage:(id)arg1 place:(id)arg2;
- (void)finishSendingLocationMessage:(id)arg1 place:(id)arg2;
- (void)sendMessageContainingPlace:(id)arg1 liveLocationEndDate:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4 openedFromURL:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (id)messageWithAudioFilePath:(id)arg1 quotedMessage:(id)arg2 inChatSession:(id)arg3 openedFromURL:(BOOL)arg4 removesOriginal:(BOOL)arg5 origin:(int)arg6 durationSeconds:(int)arg7 failMessageSend:(BOOL)arg8 shouldSendMessage:(BOOL)arg9 streaming:(BOOL)arg10 voicemail:(BOOL)arg11 streamingHash:(id)arg12 mediaKey:(id)arg13 error:(out id *)arg14;
- (id)messageWithAudioFilePath:(id)arg1 quotedMessage:(id)arg2 inChatSession:(id)arg3 origin:(int)arg4 durationSeconds:(int)arg5 failMessageSend:(BOOL)arg6 streaming:(BOOL)arg7 voicemail:(BOOL)arg8 streamingHash:(id)arg9 mediaKey:(id)arg10 error:(out id *)arg11;
- (void)sendVideoAtURL:(id)arg1 isGIF:(BOOL)arg2 gifProvider:(id)arg3 caption:(id)arg4 cameraRollReferenceUrl:(id)arg5 replyingToMessage:(id)arg6 messageOrigin:(int)arg7 inChatSession:(id)arg8 openedFromURL:(BOOL)arg9 interactiveAnnotations:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (void)sendVideoAtURL:(id)arg1 isGIF:(BOOL)arg2 gifProvider:(id)arg3 caption:(id)arg4 cameraRollReferenceUrl:(id)arg5 replyingToMessage:(id)arg6 messageOrigin:(int)arg7 inChatSession:(id)arg8 interactiveAnnotations:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)sendVideoAtURL:(id)arg1 caption:(id)arg2 cameraRollReferenceUrl:(id)arg3 replyingToMessage:(id)arg4 messageOrigin:(int)arg5 inChatSession:(id)arg6 openedFromURL:(BOOL)arg7 interactiveAnnotations:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)sendVideoAtURL:(id)arg1 caption:(id)arg2 cameraRollReferenceUrl:(id)arg3 replyingToMessage:(id)arg4 messageOrigin:(int)arg5 inChatSession:(id)arg6 interactiveAnnotations:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)sendMessageWithSticker:(id)arg1 caption:(id)arg2 replyingToMessage:(id)arg3 messageOrigin:(int)arg4 inChatSession:(id)arg5 openedFromURL:(BOOL)arg6;
- (void)sendMessageWithImage:(id)arg1 caption:(id)arg2 replyingToMessage:(id)arg3 messageOrigin:(int)arg4 inChatSession:(id)arg5 isImageLikeDocument:(BOOL)arg6 openedFromURL:(BOOL)arg7 optimisticUploadIdentifier:(id)arg8 interactiveAnnotations:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)sendMessageWithImage:(id)arg1 caption:(id)arg2 replyingToMessage:(id)arg3 messageOrigin:(int)arg4 inChatSession:(id)arg5 isImageLikeDocument:(BOOL)arg6 optimisticUploadIdentifier:(id)arg7 interactiveAnnotations:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)sendMessageWithText:(id)arg1 metadata:(id)arg2 multicast:(BOOL)arg3 replyingToMessage:(id)arg4 inChatSession:(id)arg5 hasTextFromURL:(BOOL)arg6 openedFromURL:(BOOL)arg7;
- (void)sendMessageWithText:(id)arg1 metadata:(id)arg2 multicast:(BOOL)arg3 replyingToMessage:(id)arg4 inChatSession:(id)arg5;
- (void)sendMessageWithText:(id)arg1 metadata:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4 hasTextFromURL:(BOOL)arg5 openedFromURL:(BOOL)arg6;
- (void)sendMessageWithText:(id)arg1 metadata:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4;
- (void)removeInvalidMentionsFromMessage:(id)arg1 forForwardingToChatSession:(id)arg2;
- (BOOL)isChatSessionForExistingUser:(id)arg1;
- (void)reportFieldStatsForSentMessage:(id)arg1 sentSuccess:(BOOL)arg2;
- (unsigned int)forwardMessages:(id)arg1 toChatSessions:(id)arg2;
- (id)copyMessage:(id)arg1 toChatSession:(id)arg2 fullCopy:(BOOL)arg3 isForward:(BOOL)arg4;
- (void)updateUploadAttemptCountForMessage:(id)arg1;
- (void)retrySendingMessage:(id)arg1;
- (void)commitTransactions:(id)arg1 sendMulticastMessages:(id)arg2;
- (void)commitTransactions:(id)arg1 sendMessageGroups:(id)arg2;
- (void)sendMessage:(id)arg1 transaction:(id)arg2;
- (BOOL)prepareMessageSend:(id)arg1;
- (void)resendAllServerErrorReceiptsWithoutAck;
- (void)receivedServerErrorForStanzas:(id)arg1 fromJID:(id)arg2 participantJID:(id)arg3;
- (void)receivedServerErrorAckForStanzaID:(id)arg1 fromJID:(id)arg2 participantJID:(id)arg3 edit:(int)arg4;
- (id)sentMessagesWithStanzaIDs:(id)arg1 jid:(id)arg2;
- (void)receiveError:(id)arg1 forMessage:(id)arg2;
- (id)groupMembersWithJIDs:(id)arg1;
- (void)addExternalMessage:(id)arg1 cachedGroupMembers:(id)arg2 to:(id)arg3;
- (void)internalHandleExternalChatMessages:(id)arg1 transactionChatSessions:(id)arg2 cachedGroupMembers:(id)arg3;
- (BOOL)handleExternalChatMessages:(id)arg1 error:(out id *)arg2;
- (void)modifyContact:(id)arg1 newJID:(id)arg2 timestamp:(id)arg3;
- (void)callLoggerDidAddEvent:(id)arg1;
- (void)checkFutureProofMessages;
- (BOOL)insertOrUpdateIncomingHSMMessageWithText:(id)arg1 messageContainer:(id)arg2 error:(out id *)arg3;
- (id)messagePlaceholderForStanza:(id)arg1;
- (int)setChatSession:(id)arg1 pinned:(BOOL)arg2 notifyWebClient:(BOOL)arg3 webClientPinDate:(id)arg4;
- (id)fetchAllPinnedChatSession;
- (void)setChatSession:(id)arg1 archived:(BOOL)arg2 notifyWebClient:(BOOL)arg3 saveChanges:(BOOL)arg4;
- (void)setChatSession:(id)arg1 archived:(BOOL)arg2;
- (void)setAllChatSessionsArchived:(BOOL)arg1;
- (id)newOrExistingChatSessionsForContacts:(id)arg1 includeStatusChat:(BOOL)arg2;
- (id)insertChatSessionWithJID:(id)arg1 preferredContact:(id)arg2 options:(unsigned int)arg3;
- (id)newOrExistingChatSessionsForJIDs:(id)arg1 preferredContacts:(id)arg2 options:(unsigned int)arg3;
- (id)newOrExistingChatSessionsForGroupMembers:(id)arg1 options:(unsigned int)arg2;
- (id)newOrExistingChatSessionsForContacts:(id)arg1 options:(unsigned int)arg2;
- (id)newOrExistingChatSessionsForJIDs:(id)arg1 options:(unsigned int)arg2;
- (id)newOrExistingChatSessionForJID:(id)arg1 preferredContact:(id)arg2 options:(unsigned int)arg3;
- (id)newOrExistingChatSessionForJID:(id)arg1 options:(unsigned int)arg2;
- (id)newOrExistingChatSessionForContact:(id)arg1 options:(unsigned int)arg2;
- (id)messageWithID:(id)arg1 inContext:(id)arg2;
- (id)messageWithID:(id)arg1;
- (id)messagesForChatSession:(id)arg1 predicate:(id)arg2 limit:(int)arg3 ascending:(BOOL)arg4;
- (id)messagesForChatSession:(id)arg1 limit:(int)arg2;
- (id)messagesForChatSession:(id)arg1 afterSort:(int)arg2 limit:(int)arg3;
- (id)messagesForChatSession:(id)arg1 beforeSort:(int)arg2 limit:(int)arg3;
- (id)jidsOfAllPotentialChatPartnersInContext:(id)arg1;
@property(readonly, nonatomic) BOOL hasUnarchivedUnreadChatSessions;
- (id)chatSessionsWithExpiredSharingLiveLocation;
- (id)chatSessionsSharingLiveLocation;
- (id)allUnarchivedUnreadChatSessions;
@property(readonly, nonatomic) BOOL hasUnarchivedChatSessions;
@property(readonly, nonatomic) BOOL hasArchivedChatSessions;
@property(readonly, nonatomic) unsigned int archivedChatSessionsCount;
@property(readonly, nonatomic) BOOL hasIndividualOrGroupChatSessions;
@property(readonly, nonatomic) BOOL hasChatMessages;
- (id)existingChatSessionsForJIDs:(id)arg1 prefetchRelationships:(id)arg2;
- (id)chatSessionWithObjectID:(id)arg1;
- (id)chatSessionsForContactsUpdateInContext:(id)arg1;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)reportChatsFieldStats;
- (void)registerSiriKitVocabulary;
- (void)registerSiriKitVocabularyIfNeeded;
- (void)changeAfterRestore;
- (void)deleteDatabase;
- (void)saveBackgroundContext:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)delayedSave;
- (void)runDelayedSave:(id)arg1;
- (BOOL)checkAndRepairPotentialValidationErrors:(id)arg1;
- (id)internalSaveMOCAndValidate;
- (BOOL)saveMOCAndValidate:(id *)arg1;
- (BOOL)saveDatabase:(id *)arg1;
- (BOOL)contextContainsUnindexedMessages:(id)arg1;
- (BOOL)arrayContainsUnindexedMessages:(id)arg1;
- (void)postNotificationForModifiedChatSessionJIDs:(id)arg1;
- (id)modifiedChatSessionJIDsFor:(id)arg1;
- (void)performBeforeStoreDrop;
- (void)performAfterVerification;
- (void)performAfterStoreAdd:(BOOL)arg1;
- (void)performAfterInit;
- (void)searchGroupsWithSubjectMatchingSearchText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchChatsWithContacts:(id)arg1 orName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchChatSessionsWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)predicateForGroupsWithSubject:(id)arg1;
- (id)predicateForChatsWithJIDs:(id)arg1 orName:(id)arg2;
- (id)predicateForCommonGroupsWithJID:(id)arg1;
- (id)downloadedRecentMessagesWithPredicate:(id)arg1 limit:(unsigned int)arg2 hashFromMessage:(CDUnknownBlockType)arg3;
- (id)downloadedUniquedRecentGIFMessagesWithLimit:(unsigned int)arg1;
- (id)downloadedUniquedRecentStickerMessagesWithLimit:(unsigned int)arg1;
- (id)cachedPushNames;
- (id)profilePushNameForJID:(id)arg1;
- (void)enumeratePushNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)updatePushNamesForJIDsIfNeeded:(id)arg1;
- (void)pushNamesForJIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)pushNameForJID:(id)arg1;
- (void)registerForLocalNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)updateStatusRankingForAllVisibleChatSessions;
- (void)checkPSADeletion;
- (void)schedulePSADeletionIn:(double)arg1;
- (id)queryIncomingStatusPSASession;
- (void)registerForMessageDeletionNotification;
- (void)registerForMessageReceivedNotification;
- (void)internalBadgeDidChangeExpirationDate;
- (void)hideStatusBadge;
- (void)updateStatusBadgeVisible;
- (BOOL)shouldShowStatusBadge;
@property(readonly, nonatomic, getter=isStatusBadgeVisible) BOOL statusBadgeVisible;
- (void)internalPrepareStatusBadge;
- (void)registerForMessageUpdatedNotification;
- (void)registerForMessagesAddedNotification;
- (void)registerForServerShiftNotification;
- (void)rescheduleAllStatusExpirationTasks;
- (void)scheduleUpdateExpirationDate;
- (void)scheduleDelayedUpdateExpirationDate;
- (void)scheduleStatusExpirationTasks;
- (void)postVisibleExpirationDateChangedNotification;
- (id)nextVisibleStatusExpirationDate;
- (BOOL)statusMessageExpired:(id)arg1;
- (id)statusOldestMessageDateForType:(short)arg1;
- (void)updateLastStatusExpirationDate;
- (void)updateStatusListMembers;
@property(readonly, nonatomic) WAChatSession *statusChatSession;
- (id)existingStatusChatSession;
- (void)markCallAsSpam:(id)arg1 calleeJID:(id)arg2 callerJID:(id)arg3 isVideo:(BOOL)arg4 durationInMilliseconds:(int)arg5 terminatorJID:(id)arg6 terminationReason:(id)arg7;
- (void)reportJIDAsSpam:(id)arg1 reportOrigin:(unsigned int)arg2;
- (void)markChatSessionAsSpam:(id)arg1 reportOrigin:(unsigned int)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)markChatSessionAsTrusted:(id)arg1 fromWebClient:(BOOL)arg2;
- (void)revokeIncomingMessage:(id)arg1 updatedStanzaID:(id)arg2 outOfOrder:(BOOL)arg3 revokeDate:(id)arg4;
- (void)revokeMessage:(id)arg1 fromWebClient:(BOOL)arg2 updatedStanzaID:(id)arg3;
- (void)revokeMessage:(id)arg1;
- (void)cleanUpMessageBeforeRevoking:(id)arg1;
- (id)removeOrphanedFilesTaskForStore:(id)arg1;
- (id)orphanedFileTaskForStore:(id)arg1;
- (void)addAllExistingFilePathsToStore:(id)arg1;
- (void)searchForOrphanedMediaFilesIfNeededUsingQueue:(id)arg1;
- (id)task_fixSpotlightStatus;
- (id)task_cleanStreamingMediaKeyCache;
- (id)task_indexMultiVCards;
- (id)task_indexVCardsMentions;
- (id)task_retryIndexMessages;
- (id)task_deleteMessagesWithoutChatSessions;
- (id)task_extractWebURLs;
- (id)createIndexMessagesTask;
- (id)createDeleteMessagesTask;
@property(readonly, nonatomic) WATask *taskDeleteMessages;
- (void)startIndexingMessages;
- (void)setUpRecurringTasks;
- (BOOL)relayOutgoingMessage:(id)arg1;
- (id)messagePlaceholderForWebMessageInfo:(id)arg1;
- (id)allOutgoingMessagesAndPTTInChatSessionIncludingAndAfterMessage:(id)arg1;
- (id)recentMessagesInChatSession:(id)arg1 activity:(int)arg2;
- (id)messagesForChatSession:(id)arg1 offset:(int)arg2 limit:(int)arg3;
- (id)allChatSessions;
- (unsigned int)countMessagesInChatSession:(id)arg1 ofType:(int)arg2;
- (unsigned int)countMediaMessagesInChatSession:(id)arg1;
- (unsigned int)countMessagesInChatSession:(id)arg1;
- (id)messagesInChatSession:(id)arg1 ofType:(int)arg2 count:(unsigned int)arg3 sortOrder:(unsigned int)arg4 withOrder:(unsigned int)arg5 relativeToMessageID:(id)arg6;
- (id)mediaMessagesInChatSession:(id)arg1 count:(unsigned int)arg2 sortOrder:(unsigned int)arg3 withOrder:(unsigned int)arg4 relativeToMessageID:(id)arg5;
- (id)messagesInChatSession:(id)arg1 count:(unsigned int)arg2 sortOrder:(unsigned int)arg3 withOrder:(unsigned int)arg4 relativeToMessageID:(id)arg5;
- (id)messagesPredicateForChatSession:(id)arg1 type:(int)arg2 beforeMessage:(id)arg3 afterMessage:(id)arg4;
- (id)messagesWithMessageIDs:(id)arg1 inChatSession:(id)arg2;
- (void)sendPayment:(long long)arg1 currency:(id)arg2 credentialId:(id)arg3 note:(id)arg4 mentions:(id)arg5 receiverJID:(id)arg6 receiverHandle:(id)arg7 senderHandle:(id)arg8 clTransactionId:(id)arg9 encryptedMpin:(id)arg10 replyingToMessage:(id)arg11 inChatSession:(id)arg12;
- (BOOL)internalPerformCommonMigration:(id)arg1;
- (BOOL)internalPerformMediaSectionIDMigration:(id)arg1;
- (BOOL)internalPerformManualMigration:(unsigned int)arg1 storage:(id)arg2;
- (BOOL)internalMigrateLoadedChatDatabase:(id)arg1 metadata:(id)arg2;
- (BOOL)internalMigrateChatDatabase;
- (id)generateMigrateStoreURL;
- (id)backupDatabaseStoreURL;
- (BOOL)needManualMigration:(unsigned int *)arg1 mediaSectionMigration:(char *)arg2 forMetadata:(id)arg3;
- (void)reportMigrationTimeFieldStatsWithDuration:(double)arg1 databaseSize:(long long)arg2;
- (void)migrateChatDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recoverChatDatabaseFromFailedMigration;
- (BOOL)removeDocIDColumnUsingSQLite;
- (BOOL)removeDocIDColumnUsingBatchUpdate:(id)arg1;
- (BOOL)removeSearchIndex:(id)arg1;
- (BOOL)migrateMediaSectionID:(id)arg1;
- (id)validMessageObjectIDsInMediaItems:(id)arg1 storage:(id)arg2;
- (void)migrateVCardAndLocationSearch:(id)arg1;
- (void)migrateChatNotificationSettings:(id)arg1;
- (void)migrateGroupAdminAndCreator:(id)arg1;
- (void)migrateChatSessionProperties:(id)arg1;
- (void)updateLastMessageForChatSessionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetPSAChatSession;
- (void)prepareBroadcastMessagesForStanzaIDs:(id)arg1 shouldCancelBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareBroadcastMessage:(id)arg1;
- (void)addMessagesForBackupMessages:(id)arg1 includesSort:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)existingMessagesForStanzaIDs:(id)arg1;
- (void)fetchChatSessionsAndMessagesForBackupMessages:(id)arg1;
- (void)messagesForBackupKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)addChatForBackupChat:(id)arg1;
- (void)deleteAllMedia;
- (void)fetchLocationMessagesInChatSession:(id)arg1 afterDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)hasSentMedia;
- (id)sidelistJIDs;
- (void)fetchChatHistoryMonthsForJID:(id)arg1 year:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchChatHistoryYearsForJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)internalFetchChatHistoryForChatWithJID:(id)arg1 year:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (int)numberOfMessagesInChatSession:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (id)earliestAndLatestMessageDateInChatSession:(id)arg1 year:(int)arg2;
- (id)firstMessageInChatSession:(id)arg1 forDate:(id)arg2;
- (id)messagesDictionariesWithPredicate:(id)arg1 startOffset:(unsigned int)arg2 limit:(unsigned int)arg3 groupBy:(id)arg4 propertiesToFetch:(id)arg5;
- (id)messagesWithPredicate:(id)arg1 startOffset:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)downloadedStarredMessagesOfType:(int)arg1 startOffset:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)starredMessagesOfType:(int)arg1 startOffset:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)starredMessagesInChatSessionsWithJIDs:(id)arg1 olderThanMessageID:(id)arg2 startOffset:(unsigned int)arg3 limit:(unsigned int)arg4 gifOnly:(BOOL)arg5;
- (id)starredMessagesInChatSessionsWithJIDs:(id)arg1 startOffset:(unsigned int)arg2 limit:(unsigned int)arg3;
- (void)markMessages:(id)arg1 asStarred:(BOOL)arg2 notifyWebClient:(BOOL)arg3;
- (void)addGroupPictureChangeEventToWAChatSession:(id)arg1 authorJID:(id)arg2 timestamp:(id)arg3;
- (void)addGroupPictureDeleteEventToWAChatSession:(id)arg1 authorJID:(id)arg2 timestamp:(id)arg3;
- (void)requestAndMergeAllListsFromServerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)insertListIfNeeded:(id)arg1;
- (void)requestListsIfNeeded;
- (id)createNewList;
- (id)assignNewBroadcastJID;
- (void)clearOldParticipantHistory;
- (BOOL)clearParticipantHistoryWithPredicate:(id)arg1;
- (void)markParticipantsWithJIDs:(id)arg1 admin:(BOOL)arg2 chatSession:(id)arg3 notification:(id)arg4;
- (void)requestPromotionOfMemberWithJID:(id)arg1 inGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateGroupsAfterPhoneNumberChangeFrom:(id)arg1 to:(id)arg2;
- (id)enumerateActiveGroupMembersWithJID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)modifyParticipantInChatSession:(id)arg1 oldJID:(id)arg2 newJID:(id)arg3 timestamp:(id)arg4;
- (void)removeParticipantsWithJIDs:(id)arg1 fromChatSession:(id)arg2 groupNotification:(id)arg3;
- (void)requestRemovalOfMemberJIDs:(id)arg1 fromGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestAdditionOfParticipantsWithJIDs:(id)arg1 toGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)syncGroupsOnlyIfNecessary;
- (void)requestParticipatingGroups:(BOOL)arg1 retryIfNecessary:(BOOL)arg2 requestType:(unsigned int)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)requestParticipatingGroups:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestInfoForGroupWithJID:(id)arg1 requestType:(unsigned int)arg2;
- (void)requestInfoForGroupWithJID:(id)arg1;
- (void)requestAnnouncementOnlyChangeForGroupWithJID:(id)arg1 to:(BOOL)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestLockedStateChangeForGroupWithJID:(id)arg1 to:(BOOL)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestDescriptionChangeForGroupWithJID:(id)arg1 to:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestSubjectChangeForGroupWithJID:(id)arg1 to:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)endGroupWithWAChatSession:(id)arg1 participantUnknown:(BOOL)arg2 groupNotification:(id)arg3;
- (void)setAnnouncementOnly:(BOOL)arg1 forChatSession:(id)arg2 groupNotification:(id)arg3;
- (void)setLockedState:(BOOL)arg1 forChatSession:(id)arg2 groupNotification:(id)arg3;
- (void)requestGroupEndForWAChatSession:(id)arg1;
- (void)requestToLeaveGroupWithJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestGroupCreateForChatSession:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retryGroupCreateForChatSession:(id)arg1;
- (void)finishCreationOfGroupWithTempJID:(id)arg1 usingXMPPGroup:(id)arg2;
- (void)createChatSessionForContacts:(id)arg1 subject:(id)arg2 description:(id)arg3 picture:(id)arg4 webClientRequestID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)createChatSessionForContactJIDs:(id)arg1 subject:(id)arg2 description:(id)arg3 picture:(id)arg4 webClientRequestID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)legacyPrepareChatSession:(id)arg1 subject:(id)arg2 notification:(id)arg3;
- (void)setInviteCode:(id)arg1 forChatSession:(id)arg2 groupNotification:(id)arg3;
- (BOOL)isJID:(id)arg1 participantInGroupWithJID:(id)arg2;
- (BOOL)hasGroupChatSessions;
- (void)checkForFailedSearchRestore;
- (void)reportSearchIndexStatsIfNeededWithLastIndexedMessagesCount:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)hasSufficientFreeDiskSpaceForSearchIndexing;
- (void)countMessagesMatchingText:(id)arg1 chatSessionJIDs:(id)arg2 type:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)searchMessagesMatchingText:(id)arg1 chatSessionJIDs:(id)arg2 starredOnly:(BOOL)arg3 type:(int)arg4 offset:(unsigned int)arg5 limit:(unsigned int)arg6 completion:(CDUnknownBlockType)arg7;
- (void)runWithTimeout:(double)arg1 orWhenIndexUpdated:(CDUnknownBlockType)arg2;
- (void)setShouldIndexRapidly:(BOOL)arg1;
- (id)chatSessionsMostContactedSince:(id)arg1 preferredContentType:(int)arg2 limit:(unsigned int)arg3;
- (id)mostContactedChatsWithPreferredContentType:(int)arg1 limit:(unsigned int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSURL *databaseStoreURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
