//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASpotlightIndexer.h"

@class WAChatStorage;

@interface WAMessageSpotlightIndexer : WASpotlightIndexer
{
    WAChatStorage *_chatStorage;
}

+ (_Bool)shouldResetAll;
+ (id)domainSafeJID:(id)arg1;
- (void).cxx_destruct;
- (void)internalResetSearchableItemsForChatSession:(id)arg1;
- (id)internalFetchObjectIDsForItemIdentifiers:(id)arg1 context:(id)arg2;
- (id)internalFetchItemsWithBaseRequest:(id)arg1 context:(id)arg2;
- (id)searchableItemForIndexableItem:(id)arg1 usingItemIdentifier:(id)arg2;
- (id)internalChatPresenterForItemIdentifier:(id)arg1;
- (void)removeItemsWithJID:(id)arg1;
- (id)itemIdentifierForIndexableItem:(id)arg1;
- (id)stringByInterspersingZeroLengthSpaces:(id)arg1;
- (id)domainForJID:(id)arg1;
- (id)initWithUniqueDomain:(id)arg1 storage:(id)arg2 entityType:(Class)arg3 keySelector:(SEL)arg4 countPerRequest:(unsigned long long)arg5 resetPredicate:(id)arg6;
- (id)initWithChatStorage:(id)arg1;

@end

