//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAUpgradeCallback-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, WABlockedContactsList, WAJID;
@protocol OS_dispatch_queue, WAChatStoragePIBackupProtocol;

@interface WASQLBackupManager : NSObject <WAUpgradeCallback>
{
    struct debugInfo _debugInfo;
    NSObject<OS_dispatch_queue> *_updateLogQueue;
    struct sqlite3 *_updateLogDB;
    NSObject<OS_dispatch_queue> *_queue;
    struct sqlite3 *_messagesDB;
    struct sqlite3 *_chatDB;
    struct sqlite3 *_exportProgressDB;
    NSMutableDictionary *_exportProgress;
    BOOL _shouldResumeOnForeground;
    struct sqlite3 *_importProgressDB;
    NSMutableSet *_importingMessageKeys;
    NSMutableSet *_importingChatJIDs;
    unsigned int _totalImportingCount;
    unsigned int _completedCount;
    float _progress;
    NSArray *_cachedMessageJIDs;
    WAJID *_lastCachedMessageJID;
    unsigned int _cachedMessageJIDIndex;
    BOOL _canRequestAdditionalMessageJIDs;
    NSMutableDictionary *_importProgress;
    NSArray *_largeBatchCachedMessageJIDs;
    WAJID *_largeBatchLastCachedMessageJID;
    unsigned int _largeBatchCachedMessageJIDIndex;
    BOOL _largeBatchCanRequestAdditionalMessageJIDs;
    NSMutableDictionary *_largeBatchImportProgress;
    NSObject<OS_dispatch_queue> *_mediaItemInfoQueue;
    NSMutableDictionary *_mediaRestoreIDMap;
    NSMutableDictionary *_mediaBackupKeyMap;
    NSArray *_updatesRequiringResume;
    unsigned int _nextResumedUpdateIndex;
    BOOL _endQuietTimeCalled;
    BOOL _beginRestoreCalled;
    CDUnknownBlockType _restoreProgressDidUpdateBlock;
    int _state;
}

+ (void)clearAndDisableIfNecessary;
+ (id)internalSharedManager:(BOOL)arg1;
+ (id)sharedManager;
+ (id)userDefaults;
+ (id)directory;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (void)deleteAllHistoricPaths;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType restoreProgressDidUpdateBlock; // @synthesize restoreProgressDidUpdateBlock=_restoreProgressDidUpdateBlock;
- (void).cxx_destruct;
- (id)newManagedObjectContextForExport;
- (void)beginRestoreWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL canBeginNewRestore;
- (BOOL)hasEnoughFreeSpaceForRestore;
- (unsigned long long)requiredFreeSpaceForRestore;
- (void)clearAndDisable;
- (void)resume;
@property(readonly, nonatomic) BOOL restoreInProgress;
- (BOOL)shouldShowRepairUIOnLaunch;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initPrivate;
- (id)chatBackupPath;
- (id)messageBackupPath;
- (id)directory;
- (BOOL)enabled;
- (id)taskPrefix;
@property(readonly, nonatomic) WABlockedContactsList *blockedContactsList;
@property(readonly, nonatomic) id <WAChatStoragePIBackupProtocol> chatStorage;
- (int)stateFromDefaults;
- (id)fetchProgressForJid:(id)arg1;
- (BOOL)updateExportProgress:(int)arg1 completed:(BOOL)arg2 forJID:(id)arg3;
- (id)resumeExportTask;
- (void)resumeExport;
- (id)exportProgressPath;
- (BOOL)updateImportProgress:(int)arg1 completed:(BOOL)arg2 forJID:(id)arg3 replace:(BOOL)arg4;
- (void)reallyBeginRestoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)importInitialMessagesFromChats:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)importAllChatsWithCompletion:(CDUnknownBlockType)arg1;
- (void)recomputeProgress;
- (void)updateProgress;
- (id)importProgressPath;
- (id)restoreTaskWithDescription:(id)arg1 largeBatch:(BOOL)arg2;
- (void)rescheduleWithUpdatedProgresses:(id)arg1 largeBatch:(BOOL)arg2 importCount:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)completeRestore;
- (id)retrieveMessagesWithMessageKeys:(id *)arg1 largeBatch:(BOOL)arg2 updateProgresses:(id *)arg3;
- (id)progressForJID:(id)arg1 localProgress:(id)arg2;
- (id)nextJID:(BOOL)arg1;
- (id)nextJIDWithLastJID:(id *)arg1 cachedMessageJIDs:(id *)arg2 cachedIndex:(unsigned int *)arg3 canRequestAdditional:(char *)arg4;
- (void)queueBackgroundRestore;
- (void)groupMember:(id)arg1 didSaveWithChangeType:(int)arg2;
- (int)groupMemberWillSave:(id)arg1;
- (void)chat:(id)arg1 didSaveWithChangeType:(int)arg2;
- (int)chatWillSave:(id)arg1;
- (BOOL)chatIsImporting:(id)arg1;
- (void)forceUpdateForChat:(id)arg1;
- (BOOL)updateMediaPath:(id)arg1 forMessageKey:(id)arg2;
- (void)mediaItem:(id)arg1 didSaveWithChangeType:(int)arg2;
- (int)mediaItemWillSave:(id)arg1;
- (void)message:(id)arg1 didSaveWithChangeType:(int)arg2;
- (int)messageWillSave:(id)arg1;
- (void)messageWillChangeIdentity:(id)arg1;
- (BOOL)messageIsImporting:(id)arg1;
- (BOOL)messageIsImportingForKey:(id)arg1;
- (void)forceUpdateForMessage:(id)arg1;
- (void)updateMediaItemIDsForMessage:(id)arg1;
- (void)objectDidSaveWithChangeType:(int)arg1 logType:(int)arg2 logIdentifier:(id)arg3 willPerformBlock:(CDUnknownBlockType)arg4 deleteBlock:(CDUnknownBlockType)arg5 insertBlock:(CDUnknownBlockType)arg6 updateSQLBlock:(CDUnknownBlockType)arg7;
- (void)deleteEntryForLogType:(int)arg1 Identifier:(id)arg2;
- (int)willSaveObject:(id)arg1 isImporting:(BOOL)arg2 forceDelete:(BOOL)arg3 logType:(int)arg4 logIdentifier:(id)arg5 backupIdentifier:(id)arg6 hasChangesBlock:(CDUnknownBlockType)arg7 hasSQLOnlyChangesBlock:(CDUnknownBlockType)arg8;
- (BOOL)objectHasTrackedChanges:(id)arg1 trackedProperties:(id)arg2;
- (id)updateLogPath;
- (id)resumeUpdateTask;
- (void)resumeUpdateForChatWithLog:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeUpdateForMessageWithLog:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)nextUpdatedItem;
- (void)resumeBackupUpdates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

