//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableSet, NSSet, WAChatCellData, WAMessage;
@protocol WAChatMessagesControllerDelegate;

@interface WAChatMessagesController : NSObject
{
    NSMutableArray *_sections;
    unsigned long long _bottomPanelMode;
    _Bool _needsUpdateBottomPanelCell;
    NSMutableSet *_allMessagesIndex;
    _Bool _needsRebuildAllMessagesIndex;
    _Bool _createsAlbums;
    _Bool _evictsMessagesAutomatically;
    id <WAChatMessagesControllerDelegate> _delegate;
    NSSet *_highlightedTerms;
    unsigned long long _cellDataStyle;
}

@property(readonly, nonatomic) _Bool evictsMessagesAutomatically; // @synthesize evictsMessagesAutomatically=_evictsMessagesAutomatically;
@property(readonly, nonatomic) _Bool createsAlbums; // @synthesize createsAlbums=_createsAlbums;
@property(readonly, nonatomic) unsigned long long cellDataStyle; // @synthesize cellDataStyle=_cellDataStyle;
@property(copy, nonatomic) NSSet *highlightedTerms; // @synthesize highlightedTerms=_highlightedTerms;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <WAChatMessagesControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isContentTrusted) _Bool contentTrusted;
- (void)updateBottomPanelMode;
- (void)updateBottomPanelCellIfNeeded;
- (void)setNeedsUpdateBottomPanelCell;
- (void)prependMessages:(id)arg1 animated:(_Bool)arg2;
- (_Bool)appendMessages:(id)arg1 firstUnreadMessage:(id)arg2 updateMessages:(id)arg3 totalUnreadCount:(long long)arg4 searchResultMessageIDs:(id)arg5 dividerBehavior:(unsigned long long)arg6 createAlbumsIfNeeded:(_Bool)arg7 didSkipCreatingAlbums:(_Bool *)arg8 animated:(_Bool)arg9;
- (void)rebuildSectionsAsNeeded;
- (void)clearSearchResultIndicators;
- (id)messagesSeparatedByRevokedMessagesFromMessages:(id)arg1;
- (void)deleteChatCellDataObjects:(id)arg1 whileUpdatingChatCellDataObjects:(id)arg2 skipAlbumProcessing:(_Bool)arg3 animated:(_Bool)arg4;
- (void)updateCellDataForMessages:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)removeInvalidMessagesAnimated:(_Bool)arg1;
- (long long)evictMessagesKeepingChatCellDataObjects:(id)arg1 evictEarliest:(_Bool)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic) WAMessage *lastMessage;
@property(readonly, nonatomic) WAMessage *firstMessage;
@property(readonly, nonatomic) WAChatCellData *lastChatCellData;
- (void)enumerateChatCellDataUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeUnreadDividerWithAnimation:(_Bool)arg1;
- (id)chatCellDataForMessage:(id)arg1;
- (id)allUnsentMessagesOnSameDateAsMessage:(id)arg1;
- (id)indexPathOfChatCellData:(id)arg1;
- (id)indexPathOfMessage:(id)arg1;
- (_Bool)containsMessage:(id)arg1;
- (id)chatCellDataAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *bottomMostIndexPath;
- (void)removeAllMessages;
- (id)titleForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) NSIndexPath *bottomPanelCellIndexPath;
@property(readonly, nonatomic) NSIndexPath *dividerIndexPath;
@property(readonly, nonatomic) long long cellDataCount;
@property(readonly, nonatomic) long long messageCount;
- (id)initWithOptions:(unsigned long long)arg1;

@end

