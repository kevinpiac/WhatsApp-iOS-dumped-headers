//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATriggeredOperation.h"

@class NSArray, NSMutableArray, NSString, WABackup, WABackupKey, WACloudInteractionOperation, WARequireOperation;

@interface WAPrepareBackupOperation : WATriggeredOperation
{
    WABackup *_backup;
    WABackupKey *_encryptionKey;
    NSString *_userDefaultsPath;
    NSMutableArray *_fileOperations;
    NSArray *_tarOperations;
    WARequireOperation *_tarRequireOperation;
    WACloudInteractionOperation *_uploadOperation;
    NSString *_localBackupPath;
}

+ (_Bool)getCreationKey:(out id *)arg1 fileKey:(out id *)arg2 forPath:(id)arg3;
@property(copy, nonatomic) NSString *localBackupPath; // @synthesize localBackupPath=_localBackupPath;
- (void).cxx_destruct;
- (id)createEncryptionOperationForFileAtPath:(id)arg1 usingName:(id)arg2;
- (id)localPathForName:(id)arg1;
- (id)prepareTAROperations;
- (void)addFieldStatsReportingToTAROperations:(id)arg1;
- (id)generateTarFilePathsAndSplitHints:(id)arg1;
- (struct NSArray *)processFilePaths:(id)arg1 relativeToPath:(id)arg2 withHint:(out id *)arg3;
- (id)queryTarFilePaths;
- (id)storeUserDefaultsToDictionary;
- (void)saveUserDefaultsWithCompletion:(CDUnknownBlockType)arg1;
- (void)createLocalBackupDirectory;
- (_Bool)calculatePotentialBackupSize;
- (_Bool)checkForRegistration;
- (_Bool)checkForCorruption;
- (_Bool)requireChatStore;
- (_Bool)requireConnection;
- (_Bool)checkBattery;
- (_Bool)checkRecentInProgress;
- (void)removeFileFromBackup:(id)arg1;
- (id)configureCopyForSQLiteDatabaseAtPath:(id)arg1 temporaryPath:(id *)arg2;
- (id)configureCopyForFileAtPath:(id)arg1;
- (void)continueAfterSave;
- (void)continueWithEncryptionKey;
- (void)continueAfterMainThreadChecks;
- (void)performTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finish;
- (id)initWithBackup:(id)arg1;
- (id)initWithDependenciesRequired:(_Bool)arg1;

@end

