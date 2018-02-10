//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (Additions)
- (BOOL)wa_hasSqliteDatabaseFilesAtPath:(id)arg1;
- (BOOL)wa_linkSqliteDatabaseAtPath:(id)arg1 toPath:(id)arg2 error:(out id *)arg3;
- (BOOL)wa_moveSqliteDatabaseAtPath:(id)arg1 toPath:(id)arg2 error:(out id *)arg3;
- (BOOL)wa_copySqliteDatabaseAtPath:(id)arg1 toPath:(id)arg2 error:(out id *)arg3;
- (BOOL)wa_removeSqliteDatabaseAtPath:(id)arg1 error:(out id *)arg2;
- (BOOL)wa_copyItemAtPath:(id)arg1 toPath:(id)arg2 copyFlags:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)wa_linkItemAtPath:(id)arg1 toPath:(id)arg2;
- (BOOL)wa_removeItemAtPathIfExists:(id)arg1 error:(out id *)arg2;
- (BOOL)wa_fastRemoveItemAtPath:(id)arg1;
- (BOOL)wa_fastRemoveItemAtPath:(id)arg1 shouldUseSlowFallback:(BOOL)arg2;
- (BOOL)wa_isFileAccessibleAtPath:(id)arg1;
- (void)wa_logFilePermissionDetailsForPath:(id)arg1;
- (void)wa_logPermissionDetailsIfNecessaryForFileError:(id)arg1;
- (BOOL)wa_setReadAndWritePermissionsForItemAtPath:(id)arg1;
- (BOOL)wa_prepareFilePathForWritingImpl:(id)arg1 tryAgainOnPermissionsError:(BOOL)arg2;
- (BOOL)wa_prepareFilePathForWriting:(id)arg1;
- (BOOL)wa_hasSufficientDiskSpaceToUseCamera;
- (id)wa_freeDiskSpace;
- (id)wa_totalDiskSpace;
- (id)wa_numberForFileSystemKey:(id)arg1;
- (unsigned int)wa_storageStatus;
- (unsigned long long)sizeOfFileAtPath:(id)arg1;
- (unsigned long long)wa_sizeOfDirectoryAtPath:(id)arg1 error:(out id *)arg2;
@end
