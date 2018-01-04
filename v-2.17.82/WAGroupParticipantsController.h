//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSString, WATableRow, WATableSection;
@protocol WAGroupParticipantsControllerDelegate;

@interface WAGroupParticipantsController : NSObject <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_fetchedResultsController;
    int _numberOfVisibleParticipants;
    BOOL _participantListExpanded;
    BOOL _loaded;
    id <WAGroupParticipantsControllerDelegate> _delegate;
    NSString *_groupJID;
    WATableRow *_rowExpandParticipantList;
    WATableRow *_rowNoParticipants;
    NSArray *_supplementaryTopRows;
    WATableSection *_tableSection;
    NSArray *_groupParticipants;
}

@property(readonly, nonatomic) NSArray *groupParticipants; // @synthesize groupParticipants=_groupParticipants;
@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) WATableSection *tableSection; // @synthesize tableSection=_tableSection;
@property(copy, nonatomic) NSArray *supplementaryTopRows; // @synthesize supplementaryTopRows=_supplementaryTopRows;
@property(retain, nonatomic) WATableRow *rowNoParticipants; // @synthesize rowNoParticipants=_rowNoParticipants;
@property(retain, nonatomic) WATableRow *rowExpandParticipantList; // @synthesize rowExpandParticipantList=_rowExpandParticipantList;
@property(readonly, copy, nonatomic) NSString *groupJID; // @synthesize groupJID=_groupJID;
@property(nonatomic) __weak id <WAGroupParticipantsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned int)tableRowIndexForParticipantIndex:(unsigned int)arg1;
- (id)participantForTableRowIndex:(int)arg1;
- (BOOL)isTableRowIndexForParticipantRow:(int)arg1;
- (void)endIgnoringChanges;
- (void)startIgnoringChanges;
- (void)internalAddParticipantsWithGroupMembers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retryAddingGroupParticipant:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addParticipants:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int numberOfParticipants;
- (void)loadController;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned int)arg3 forChangeType:(unsigned int)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)setupFetchedResultsControllerIfNeeded;
- (void)expandListOfParticipantsAnimated:(BOOL)arg1;
- (void)setGroupParticipants:(id)arg1 sort:(BOOL)arg2 canExpandList:(BOOL)arg3;
- (void)removeGroupParticipant:(id)arg1;
- (void)addGroupParticipants:(id)arg1;
- (void)reloadTableSectionRows;
- (void)dealloc;
- (id)initWithGroupJID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
