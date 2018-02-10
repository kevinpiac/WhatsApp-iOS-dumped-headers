//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKRecordID, CKRecordZone, CKRecordZoneID, NSString, WABackupConfiguration, WABackupKeyManager, WABackupMedia, WAPersistentKeyValueStore;
@protocol OS_dispatch_group;

@interface WABackupManager : NSObject
{
    CKContainer *_container;
    CKDatabase *_database;
    CKRecordZone *_currentZone;
    NSString *_currentPhoneNumber;
    long long _currentAccountStatus;
    _Bool _refreshAccountScheduled;
    NSObject<OS_dispatch_group> *_refreshAccountGroup;
    WAPersistentKeyValueStore *_keyValueStore;
    WABackupConfiguration *_configuration;
    WABackupMedia *_mediaBackup;
    WABackupKeyManager *_keyManager;
}

@property(readonly, nonatomic) WABackupKeyManager *keyManager; // @synthesize keyManager=_keyManager;
@property(readonly, nonatomic) WABackupMedia *mediaBackup; // @synthesize mediaBackup=_mediaBackup;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecordID *metadataRecordID;
@property(readonly, nonatomic) CKRecordZoneID *currentZoneID;
- (void)saveNewMetadataWithCryptor:(id)arg1;
- (void)saveNewMetadata;
- (void)fetchExistingMetadataForZone:(id)arg1;
- (void)saveNewZone;
- (void)fetchExistingZone;
- (void)updateCloudKitBackupIfNeeded;
- (void)changeAccountIdentifier:(id)arg1;
- (void)verifyAccountIdentifier;
- (void)changeAccountStatus:(long long)arg1;
- (void)updateAccountStatus;
- (void)changePhoneNumber:(id)arg1;
- (void)scheduleAccountRefresh;
- (void)prepare;
- (id)initWithChatStorage:(id)arg1 keyValueStore:(id)arg2 connection:(id)arg3;
- (id)init;

@end

