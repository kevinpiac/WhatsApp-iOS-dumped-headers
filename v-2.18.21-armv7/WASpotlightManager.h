//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSSearchableIndexDelegate-Protocol.h"

@class CSSearchableIndex, NSMutableDictionary, NSString, WAProfilePictureManager, WASpotlightPictureManager, WATaskQueue;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WASpotlightManager : NSObject <CSSearchableIndexDelegate>
{
    CDUnknownBlockType _resetAllBlock;
    NSObject<OS_dispatch_group> *_registeredGroup;
    NSMutableDictionary *_registeredIndexers;
    CSSearchableIndex *_searchIndex;
    WATaskQueue *_taskQueue;
    NSObject<OS_dispatch_queue> *_queue;
    WASpotlightPictureManager *_pictureManager;
}

+ (BOOL)isCoreSpotlightEnabled;
@property(readonly, nonatomic) WASpotlightPictureManager *pictureManager; // @synthesize pictureManager=_pictureManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) WATaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void).cxx_destruct;
- (void)internalRemoveItemsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)internalRemoveItemsInDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)internalIndexSearchableItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)mapIdentifiers:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)removeAllItemsAndResetIndexesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (id)chatPresenterForIdentifier:(id)arg1;
- (void)runWhenDelegateRegistered:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isDelegateRegistered) BOOL delegateRegistered;
- (void)registerDelegate;
- (void)registerIndexer:(id)arg1;
@property(retain, nonatomic) WAProfilePictureManager *profilePictureManager;
- (id)initWithResetAction:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

