//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStorage.h"

@interface WAAutoMigratingStorage : WAStorage
{
    _Bool _keepExistingIndexes;
}

+ (void)initialize;
+ (_Bool)supportsKeepingExistingIndexes;
- (void)didAddPersistentStore;
- (void)willAddPersistentStore;
- (_Bool)needsDatabaseMigrationForMetadata:(id)arg1;
- (id)initWithStorage:(id)arg1 keepExistingIndexes:(_Bool)arg2;
- (id)initWithModelName:(id)arg1 storeURL:(id)arg2 blacklistBackup:(_Bool)arg3;
- (id)initWithModelName:(id)arg1 storeURL:(id)arg2 blacklistBackup:(_Bool)arg3 keepExistingIndexes:(_Bool)arg4;

@end

