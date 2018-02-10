//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL;

@interface WAStorage : NSObject
{
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPersistentStore *_persistentStore;
    BOOL _savingPrimaryContext;
    long _availableRecoveryOptions;
    BOOL _skipBackup;
    NSString *_modelName;
    BOOL _databaseLoaded;
    NSURL *_databaseStoreURL;
    long _databaseRecoveryOption;
    NSManagedObjectContext *_internalManagedObjectContext;
}

+ (BOOL)useMainQueueDatabaseConcurrencyType;
+ (void)configureDatabasePRAGMAs:(id)arg1;
+ (void)configureDatabaseOptions:(id)arg1;
@property(retain) NSManagedObjectContext *internalManagedObjectContext; // @synthesize internalManagedObjectContext=_internalManagedObjectContext;
@property(readonly, nonatomic) long databaseRecoveryOption; // @synthesize databaseRecoveryOption=_databaseRecoveryOption;
@property(getter=isDatabaseLoaded) BOOL databaseLoaded; // @synthesize databaseLoaded=_databaseLoaded;
@property(readonly, nonatomic) NSURL *databaseStoreURL; // @synthesize databaseStoreURL=_databaseStoreURL;
- (void).cxx_destruct;
- (void)mutateDatabaseMetadata:(CDUnknownBlockType)arg1;
- (id)databaseMetadata:(id *)arg1;
@property(readonly, copy) NSDictionary *databaseMetadata;
- (void)saveBackgroundContext:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)saveDatabase:(id *)arg1;
- (void)logRecursiveDatabaseSave;
- (void)didSaveDatabaseContext:(id)arg1;
- (void)handleDatabaseContext:(id)arg1 saveError:(id)arg2;
- (void)reportDatabaseContext:(id)arg1 saveError:(id)arg2;
- (BOOL)willSaveDatabaseContext:(id)arg1;
- (void)handleDatabaseContext:(id)arg1 queryError:(id)arg2;
- (void)reportDatabaseContext:(id)arg1 queryError:(id)arg2;
- (BOOL)updateFetchedDatabaseResults:(id)arg1;
- (id)fetchedDatabaseResults:(id)arg1 delegate:(id)arg2 sectionNameKeyPath:(id)arg3;
- (id)executeDatabaseRequest:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)executeDatabaseRequest:(id)arg1 context:(id)arg2;
- (id)executeDatabaseRequest:(id)arg1;
- (id)countForDatabaseFetchRequest:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)countForDatabaseFetchRequest:(id)arg1 context:(id)arg2;
- (id)countForDatabaseFetchRequest:(id)arg1;
- (id)executeDatabaseFetchRequest:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)executeDatabaseFetchRequest:(id)arg1 context:(id)arg2;
- (id)executeDatabaseFetchRequest:(id)arg1;
- (void)executeDatabaseFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)internalContextWithConcurrencyType:(unsigned int)arg1;
- (id)createBackgroundContext;
@property(readonly) NSManagedObjectContext *managedObjectContext;
- (void)deleteDatabase;
- (void)dropDatabase;
- (BOOL)needsDatabaseMigrationForMetadata:(id)arg1;
- (BOOL)needsDatabaseRepairGetMetadata:(out id *)arg1;
- (void)didAddPersistentStore;
- (void)willAddPersistentStore;
- (long)internalLoadDatabase;
- (BOOL)loadDatabase;
- (id)databaseLoadOptions;
- (void)willPerformRecoveryOption:(long)arg1;
- (void)didCreateDatabase;
@property(readonly, copy, nonatomic) NSDictionary *databaseOptions;
- (id)initWithStorage:(id)arg1;
- (id)initWithModelName:(id)arg1 storeURL:(id)arg2 blacklistBackup:(BOOL)arg3;
- (void)loadDatabaseDangerouslyIfNeeded;
- (void)loadDatabaseDangerously;

@end

