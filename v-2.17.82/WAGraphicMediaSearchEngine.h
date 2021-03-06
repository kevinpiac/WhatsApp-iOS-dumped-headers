//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase, NSSet, NSString, WAAssetMetadataManager;
@protocol OS_dispatch_queue;

@interface WAGraphicMediaSearchEngine : NSObject
{
    WAAssetMetadataManager *_metadataManager;
    FMDatabase *_database;
    NSString *_columns;
    NSString *_path;
    NSSet *_supportedLanguages;
    NSSet *_languages;
    NSObject<OS_dispatch_queue> *_privateQueue;
}

+ (id)sqlRightHandSide:(id)arg1;
+ (id)sqlRightHandSideWithWildcards:(id)arg1;
@property(copy, nonatomic) NSSet *languages; // @synthesize languages=_languages;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void).cxx_destruct;
- (id)searchResultsWithLanguage:(id)arg1 matchType:(unsigned int)arg2 values:(id)arg3;
- (BOOL)databaseSupportsLanguage:(id)arg1;
- (id)parseMedia:(id)arg1;
- (BOOL)openCreateOrRecreateDatabaseIfNeeded;
- (BOOL)openOrCreateDatabaseIfNeeded;
- (BOOL)isOnPrivateQueue;
- (id)searchDatabase:(id)arg1 forQuery:(id)arg2 withTokens:(id)arg3 forColumn:(id)arg4;
- (id)valuesMatchingLiteralTokens:(id)arg1 language:(id)arg2 selectFromColumn:(id)arg3;
- (id)prefixAndExactMatchesForFullTextSearchTokens:(id)arg1 language:(id)arg2 searchColumn:(id)arg3 selectFromColumn:(id)arg4;
- (id)search:(id)arg1 language:(id)arg2 inColumn:(id)arg3 forColumn:(id)arg4 onQueue:(id)arg5 withBlock:(CDUnknownBlockType)arg6;
- (void)populateDatabase:(id)arg1 orderedItems:(id)arg2;
- (void)deleteDatabaseAndMetadataWithKeys:(id)arg1;
- (void)deleteDatabase;
- (void)getSupportedLanguages:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithColumns:(id)arg1 languages:(id)arg2 metadataManager:(id)arg3 databasePath:(id)arg4;

@end

