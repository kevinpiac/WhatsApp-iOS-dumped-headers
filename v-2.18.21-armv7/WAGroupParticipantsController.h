//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WATableRow;
@protocol WAGroupParticipantsControllerContentUpdatesDelegate, WAGroupParticipantsControllerDelegate;

@interface WAGroupParticipantsController : NSObject <NSFetchedResultsControllerDelegate>
{
    BOOL _showingAllParticipants;
    BOOL _performingFetchedResultsControllerUpdates;
    NSFetchedResultsController *_fetchedResultsController;
    NSMutableSet *_insertedOrUpdatedItems;
    NSMutableSet *_removedItems;
    id <WAGroupParticipantsControllerDelegate> _delegate;
    id <WAGroupParticipantsControllerContentUpdatesDelegate> _contentUpdatesDelegate;
    NSString *_groupJID;
    WATableRow *_rowExpandParticipantList;
    WATableRow *_rowNoParticipants;
    NSArray *_supplementaryTopItems;
    NSMutableArray *_sortedVisibleItems;
    NSMutableDictionary *_fixedParticipantNameForSort;
    NSMutableSet *_unknownContactParticipants;
    NSMutableDictionary *_pendingOrErroredParticipants;
}

@property(retain, nonatomic) NSMutableDictionary *pendingOrErroredParticipants; // @synthesize pendingOrErroredParticipants=_pendingOrErroredParticipants;
@property(retain, nonatomic) NSMutableSet *unknownContactParticipants; // @synthesize unknownContactParticipants=_unknownContactParticipants;
@property(retain, nonatomic) NSMutableDictionary *fixedParticipantNameForSort; // @synthesize fixedParticipantNameForSort=_fixedParticipantNameForSort;
@property(retain, nonatomic) NSMutableArray *sortedVisibleItems; // @synthesize sortedVisibleItems=_sortedVisibleItems;
@property(copy, nonatomic) NSArray *supplementaryTopItems; // @synthesize supplementaryTopItems=_supplementaryTopItems;
@property(retain, nonatomic) WATableRow *rowNoParticipants; // @synthesize rowNoParticipants=_rowNoParticipants;
@property(retain, nonatomic) WATableRow *rowExpandParticipantList; // @synthesize rowExpandParticipantList=_rowExpandParticipantList;
@property(readonly, copy, nonatomic) NSString *groupJID; // @synthesize groupJID=_groupJID;
@property(nonatomic) __weak id <WAGroupParticipantsControllerContentUpdatesDelegate> contentUpdatesDelegate; // @synthesize contentUpdatesDelegate=_contentUpdatesDelegate;
@property(nonatomic) __weak id <WAGroupParticipantsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)compareGroupParticipantOrTableRow:(id)arg1 toGroupParticipantOrTableRow:(id)arg2 referenceSupplementaryTopItems:(id)arg3;
- (int)compareSupplementaryTopItem:(id)arg1 toSupplementaryTopItem:(id)arg2 referenceSupplementaryTopItems:(id)arg3;
- (int)compareGroupParticipant:(id)arg1 toGroupParticipant:(id)arg2;
- (id)nameForJID:(id)arg1;
- (int)compareGroupParticipantsByJID:(id)arg1 toParticipant:(id)arg2;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned int)arg3 forChangeType:(unsigned int)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)setupFetchedResultsControllerIfNeeded;
- (void)didChangeContent;
- (void)notifyDelegateOfChangedIndexes:(id)arg1;
- (void)notifyDelegateWillChangeContent;
- (id)insertOrUpdateItems:(id)arg1 includeUnknownContacts:(BOOL)arg2 usingReference:(id)arg3 referenceSupplementaryTopItems:(id)arg4;
- (void)insertItem:(id)arg1 intoSortedArray:(id)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)removeItems:(id)arg1 usingReference:(id)arg2 referenceSupplementaryTopItems:(id)arg3;
- (unsigned int)indexOfItem:(id)arg1 inArray:(id)arg2 referenceSupplementaryTopItems:(id)arg3;
- (id)indexSetOfItems:(id)arg1 inArray:(id)arg2 referenceSupplementaryTopItems:(id)arg3;
- (void)willChangeContent;
- (id)updateShowMoreRowAndExpendedStateUsingReference:(id)arg1;
- (void)updateNotParticipantsRow;
- (void)updateSupplementaryTopItems;
- (id)stateForParticipantItem:(id)arg1;
- (void)setStateIfPossible:(id)arg1 forParticipantItem:(id)arg2;
- (BOOL)canUpdateToState:(id)arg1 fromState:(id)arg2;
- (void)clearOrUpdatePendingParticipantsWithExpectedStates:(id)arg1 perParticipantErrors:(id)arg2;
- (void)clearOrUpdatePendingParticipant:(id)arg1 forExpectedContext:(unsigned int)arg2 withError:(id)arg3;
- (void)markPendingParticipants:(id)arg1;
- (void)markPendingParticipant:(id)arg1 forContext:(unsigned int)arg2;
- (void)enumerateMemberStatePairs:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addParticipants:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retryAddingGroupParticipant:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOrRetryGroupParticipants:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didSelectRowAtIndex:(int)arg1;
- (void)didSelectRowItem:(id)arg1;
- (id)cellForTableRowIndex:(int)arg1;
- (id)participantForTableRowIndex:(int)arg1;
- (void)endIgnoringChanges;
- (void)startIgnoringChanges;
- (void)loadController;
@property(readonly, nonatomic) int numberOfParticipants;
@property(readonly, nonatomic) int rowCount;
- (void)dealloc;
- (id)initWithGroupJID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

