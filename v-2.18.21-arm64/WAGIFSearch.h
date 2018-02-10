//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession, NSURLSessionDataTask, WAGIFQuery;

@interface WAGIFSearch : NSObject
{
    NSURLSessionDataTask *_fetchTask;
    NSURLSession *_session;
    unsigned long long _batchSize;
    WAGIFQuery *_query;
    WAGIFQuery *_canonicalQuery;
}

+ (Class)searchResponseClass;
+ (unsigned long long)maximumNumberOfBatchesToLoad;
+ (id)searchBarPlaceholder;
+ (long long)preferredGIFSearchProvider;
+ (long long)gifSearchProviderServerProp;
+ (id)newPreferredGIFSearchWithBatchSize:(unsigned long long)arg1;
+ (Class)preferredSearchClass;
@property(readonly, nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly, nonatomic) WAGIFQuery *canonicalQuery; // @synthesize canonicalQuery=_canonicalQuery;
@property(retain, nonatomic) WAGIFQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSearching;
- (void)invalidate;
- (void)performSearchForQuery:(id)arg1 withRetriesLeft:(int)arg2;
- (void)searchForCurrentQueryWithRetries:(int)arg1;
- (id)urlSession;
- (id)newQueryWithText:(id)arg1 language:(id)arg2 batchToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithBatchSize:(unsigned long long)arg1;

@end
