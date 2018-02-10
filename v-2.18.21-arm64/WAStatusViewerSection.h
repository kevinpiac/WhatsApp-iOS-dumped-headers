//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WAChatSession, WAMessage;

@interface WAStatusViewerSection : NSObject
{
    _Bool _isLoaded;
    WAMessage *_initialMessage;
    NSArray *_messages;
    int _maxSortNotIncluding;
    long long _unreadCount;
    _Bool _containsDeletedMessage;
    WAChatSession *_chatSession;
    long long _currentIndex;
}

@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (void).cxx_destruct;
- (void)chatStorageDidDeleteMessages:(id)arg1;
- (_Bool)decrementIndex;
- (_Bool)incrementIndex;
@property(readonly) WAMessage *nextMessage;
@property(readonly) WAMessage *currentMessage;
- (_Bool)isReplyEnabled;
- (_Bool)isCurrentMessageOwnStatus;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) _Bool containsUnread;
- (void)removeDeletedMessagesIfNeededMovingToNext:(_Bool)arg1;
- (void)removeDeletedMessagesIfNeeded;
- (void)loadIfNeeded;
- (void)dealloc;
- (id)initWithChatSession:(id)arg1 initialMessage:(id)arg2;

@end

