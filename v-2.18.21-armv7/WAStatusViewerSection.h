//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WAChatSession, WAMessage;

@interface WAStatusViewerSection : NSObject
{
    BOOL _isLoaded;
    WAMessage *_initialMessage;
    NSArray *_messages;
    int _maxSortNotIncluding;
    int _unreadCount;
    BOOL _containsDeletedMessage;
    WAChatSession *_chatSession;
    int _currentIndex;
}

@property(readonly, nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (void).cxx_destruct;
- (void)chatStorageDidDeleteMessages:(id)arg1;
- (BOOL)decrementIndex;
- (BOOL)incrementIndex;
@property(readonly) WAMessage *nextMessage;
@property(readonly) WAMessage *currentMessage;
- (BOOL)isReplyEnabled;
- (BOOL)isCurrentMessageOwnStatus;
@property(readonly, nonatomic) int count;
@property(readonly, nonatomic) BOOL containsUnread;
- (void)removeDeletedMessagesIfNeededMovingToNext:(BOOL)arg1;
- (void)removeDeletedMessagesIfNeeded;
- (void)loadIfNeeded;
- (void)dealloc;
- (id)initWithChatSession:(id)arg1 initialMessage:(id)arg2;

@end

