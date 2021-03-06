//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACloudStatus.h"

@class NSDate, NSMutableDictionary, NSSet, NSString, WASharedMetadataQuery, WAWeakTimer;

@interface WARealCloudStatus : WACloudStatus
{
    BOOL _valid;
    BOOL _inProgress;
    unsigned long long _totalSize;
    unsigned long long _completedSize;
    NSSet *_errorCodes;
    NSMutableDictionary *_sizeResults;
    NSMutableDictionary *_sizeIncluders;
    BOOL _corruptionDetected;
    WASharedMetadataQuery *_query;
    NSString *_loadingKey;
    NSString *_loadedKey;
    NSString *_percentKey;
    NSDate *_lastForcedRefreshDate;
    NSDate *_lastQueryUpdateDate;
    unsigned int _errorTrackerLoadingCount;
    unsigned int _errorTrackerNeitherCount;
    NSDate *_lastErrorLoggedDate;
    WAWeakTimer *_finishTimer;
    WAWeakTimer *_potentialErrorTimer;
}

+ (id)percentKeyForMode:(unsigned int)arg1;
+ (id)loadedKeyForMode:(unsigned int)arg1;
+ (id)loadingKeyForMode:(unsigned int)arg1;
@property(retain, nonatomic) WAWeakTimer *potentialErrorTimer; // @synthesize potentialErrorTimer=_potentialErrorTimer;
@property(retain, nonatomic) WAWeakTimer *finishTimer; // @synthesize finishTimer=_finishTimer;
@property(retain, nonatomic) NSDate *lastErrorLoggedDate; // @synthesize lastErrorLoggedDate=_lastErrorLoggedDate;
@property(nonatomic, getter=isCorruptionDetected) BOOL corruptionDetected; // @synthesize corruptionDetected=_corruptionDetected;
@property(nonatomic) unsigned int errorTrackerNeitherCount; // @synthesize errorTrackerNeitherCount=_errorTrackerNeitherCount;
@property(nonatomic) unsigned int errorTrackerLoadingCount; // @synthesize errorTrackerLoadingCount=_errorTrackerLoadingCount;
@property(retain, nonatomic) NSDate *lastQueryUpdateDate; // @synthesize lastQueryUpdateDate=_lastQueryUpdateDate;
@property(retain, nonatomic) NSDate *lastForcedRefreshDate; // @synthesize lastForcedRefreshDate=_lastForcedRefreshDate;
@property(copy, nonatomic) NSString *percentKey; // @synthesize percentKey=_percentKey;
@property(copy, nonatomic) NSString *loadedKey; // @synthesize loadedKey=_loadedKey;
@property(copy, nonatomic) NSString *loadingKey; // @synthesize loadingKey=_loadingKey;
@property(retain, nonatomic) WASharedMetadataQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (id)addListenerWithBlock:(CDUnknownBlockType)arg1 shouldSendImmediateUpdate:(BOOL)arg2;
- (void)logFileNamesWithProblems;
- (void)logStuckFileNamesFromQuery:(id)arg1;
- (void)processSharedQuery:(id)arg1;
- (void)invalidateQuery;
- (void)forceRefresh;
- (BOOL)checkForCorruptionInQuery:(id)arg1;
- (id)errorCodes;
- (void)setErrorCodes:(id)arg1;
- (void)reportDelayedErrorCodes:(id)arg1;
- (void)reportErrors:(id)arg1 afterDelay:(double)arg2;
- (void)printListOfCodes:(id)arg1;
- (void)checkForErrorsWithNetworkStatus:(unsigned long)arg1;
- (void)networkStatusDidChange:(id)arg1;
- (void)updateErrorValuesFromQuery:(id)arg1;
- (void)finishWithDelay_done;
- (void)finishWithDelay;
- (void)cancelFinishWithDelay;
- (void)updateValuesFromQuery:(id)arg1;
- (id)indicatorsForItem:(id)arg1;
- (void)processQueryIfPossible;
- (void)processQueryFromNotification:(id)arg1;
- (void)processQuery:(id)arg1;
- (id)localizedStatusTextWithOptions:(unsigned int)arg1;
- (void)forKey:(id)arg1 setFileIncluder:(CDUnknownBlockType)arg2;
- (unsigned long long)sizeForKey:(id)arg1;
- (unsigned long long)completedSize;
- (unsigned long long)totalSize;
- (BOOL)inProgress;
- (BOOL)isValid;
- (void)dealloc;
- (void)setFileIncluder:(CDUnknownBlockType)arg1;
- (id)initWithManager:(id)arg1 mode:(unsigned int)arg2;
- (id)initWithMode:(unsigned int)arg1;

@end

