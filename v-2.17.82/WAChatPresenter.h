//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet, WAChatSession, WAMessage;

@interface WAChatPresenter : NSObject
{
    CDUnknownBlockType _loadChatSession;
    WAChatSession *_chatSession;
    BOOL _configureScrollToBottom;
    BOOL _configureShowKeyboard;
    WAMessage *_configureShowMessage;
    NSSet *_configureShowTerms;
    NSMutableArray *_configureBlocks;
}

+ (id)forMessage:(id)arg1 searchTerms:(id)arg2;
+ (id)forJID:(id)arg1 preferredContact:(id)arg2;
+ (id)forJID:(id)arg1;
+ (id)forContact:(id)arg1;
+ (id)forChatSession:(id)arg1;
- (void).cxx_destruct;
- (void)runIfValid:(CDUnknownBlockType)arg1;
- (id)loadChatSession;
- (void)configureViewController:(id)arg1;
- (BOOL)canReuseViewController:(id)arg1;
- (id)addBlock:(CDUnknownBlockType)arg1;
- (id)addKeyboard;
- (id)addScrollToBottom;
- (id)initWithDeferredChatSession:(CDUnknownBlockType)arg1;
- (id)init;

@end

