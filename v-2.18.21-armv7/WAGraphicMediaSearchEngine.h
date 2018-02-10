//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase, NSMutableDictionary, NSSet, NSString, WAAssetMetadataManager;
@protocol OS_dispatch_queue;

@interface WAGraphicMediaSearchEngine : NSObject
{
    WAAssetMetadataManager *_metadataManager;
    FMDatabase *_database;
    NSString *_columns;
    NSString *_path;
    NSSet *_supportedLanguages;
    NSSet *_languages;
    NSMutableDictionary *_tokenizers;
    NSObject<OS_dispatch_queue> *_privateQueue;
}

+ (id)sqlRightHandSide:(id)arg1;
+ (id)sqlRightHandSideWithWildcards:(id)arg1;
@property(copy, nonatomic) NSSet *languages; // @synthesize languages=_languages;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void).cxx_destruct;
- (id)searchForQuery:(id)arg1 language:(id)arg2 columnToSelect:(id)arg3 columnToMatch:(id)arg4;
- (id)reallySearchForQuery:(id)arg1 withKeywordColumn:(id)arg2 columnToSelect:(id)arg3 language:(id)arg4;
- (void)addSearchResultWithOffsets:(id)arg1 value:(id)arg2 terms:(id)arg3 language:(id)arg4 toResultIndex:(id)arg5;
- (double)scoreWithOffsets:(id)arg1 terms:(id)arg2;
- (id)fullTextMatchExpressionForTerms:(id)arg1;
- (id)searchTermsInQuery:(id)arg1;
- (id)tableNameForLanguage:(id)arg1;
- (void)populateDatabaseWithBlock:(CDUnknownBlockType)arg1;
- (id)searchResultsWithLanguage:(id)arg1 score:(int)arg2 values:(id)arg3;
- (BOOL)databaseSupportsLanguage:(id)arg1;
- (id)parseMedia:(id)arg1;
- (BOOL)openCreateOrRecreateDatabaseIfNeeded;
- (BOOL)createTableForLanguage:(id)arg1;
- (BOOL)openOrCreateDatabaseIfNeeded;
- (BOOL)isOnPrivateQueue;
- (void)deleteDatabase;
- (id)searchWithQuery:(id)arg1 language:(id)arg2 inColumn:(id)arg3 forColumn:(id)arg4 onQueue:(id)arg5 withBlock:(CDUnknownBlockType)arg6;
- (BOOL)addPhrases:(id)arg1 forKey:(id)arg2 languageCode:(id)arg3;
- (void)populateWithStandardData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)deleteDatabaseAndMetadataWithKeys:(id)arg1;
- (void)getSupportedLanguages:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithColumns:(id)arg1 languages:(id)arg2 metadataManager:(id)arg3 databasePath:(id)arg4;

@end

