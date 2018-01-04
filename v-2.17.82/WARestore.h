//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAActionManager.h"

#import "WAUpgradeCallback-Protocol.h"

@class NSMutableArray, NSString, WABackupInformation, WAChatStorage, WACloudBackupManager, WACloudStatus, WATriggeredOperation, XMPPPassiveModeExclusiveConnection;

@interface WARestore : WAActionManager <WAUpgradeCallback>
{
    id _cloudStatusListener;
    BOOL _shouldRestore;
    WATriggeredOperation *_delayedStart;
    NSMutableArray *_untarOperations;
    NSMutableArray *_cryptOperations;
    NSString *_localRestorePath;
    unsigned int _backgroundTask;
    BOOL _additionalSpaceRequired;
    WACloudBackupManager *_manager;
    WAChatStorage *_storage;
    XMPPPassiveModeExclusiveConnection *_exclusiveConnection;
    WABackupInformation *_backupInformation;
    WACloudStatus *_cloudStatus;
    unsigned long long _size;
    unsigned long long _additionalSpaceAmount;
}

+ (unsigned long long)freeSpaceRequiredForBackupOfSize:(unsigned long long)arg1;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
@property(retain, nonatomic) WACloudStatus *cloudStatus; // @synthesize cloudStatus=_cloudStatus;
@property(retain) WABackupInformation *backupInformation; // @synthesize backupInformation=_backupInformation;
@property(retain) XMPPPassiveModeExclusiveConnection *exclusiveConnection; // @synthesize exclusiveConnection=_exclusiveConnection;
@property(readonly, nonatomic) WAChatStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) WACloudBackupManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) unsigned long long additionalSpaceAmount; // @synthesize additionalSpaceAmount=_additionalSpaceAmount;
@property(readonly, nonatomic) BOOL additionalSpaceRequired; // @synthesize additionalSpaceRequired=_additionalSpaceRequired;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)willEnterForeground:(id)arg1;
- (void)endBackgroundTask;
- (void)willEndForegroundTask:(id)arg1;
- (void)calculateSizeParameters;
- (void)unregisterForCloudStatus;
- (void)registerForCloudStatus;
- (unsigned int)maximumPhase;
- (id)errorDomain;
- (void)start;
- (void)removeTemporaryDirectory;
- (void)completeWithReason:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL encounteredTARError;
- (void)addFirstOperations;
- (void)internalStartRestore;
- (void)addOperation:(id)arg1;
- (void)updateBackupInformation:(id)arg1;
- (void)dealloc;
- (id)initWithManager:(id)arg1 chatStorage:(id)arg2 options:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithOptions:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

