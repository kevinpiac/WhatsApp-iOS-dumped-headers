//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, WAChatSession, WAChatStorage;

@interface WAMessageBulkDeletionHelper : NSObject
{
    // Error parsing type: AB, name: _canceled
    WAChatStorage *_chatStorage;
    WAChatSession *_chatSession;
    BOOL _fromWebClient;
    NSDate *_filterBeforeDate;
    NSNumber *_filterStarred;
    NSArray *_filterTypes;
    unsigned int _batchLimit;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) unsigned int batchLimit; // @synthesize batchLimit=_batchLimit;
@property(copy, nonatomic) NSArray *filterTypes; // @synthesize filterTypes=_filterTypes;
@property(copy, nonatomic) NSNumber *filterStarred; // @synthesize filterStarred=_filterStarred;
@property(copy, nonatomic) NSDate *filterBeforeDate; // @synthesize filterBeforeDate=_filterBeforeDate;
@property(nonatomic) BOOL fromWebClient; // @synthesize fromWebClient=_fromWebClient;
- (void).cxx_destruct;
- (void)chatStorageDeleteSession;
- (void)chatStorageNotifyDeletedBeforeDate:(id)arg1 ofTypes:(id)arg2 shouldIncludeStarred:(id)arg3;
- (void)chatStorageSaveContext:(id)arg1;
- (id)chatStorageCreateContext;
- (void)internalReportProgress:(float)arg1;
- (void)internalDeleteWithChatSessionID:(id)arg1 messageCounter:(int)arg2 readSort:(int)arg3 detailPredicates:(id)arg4 fetchLimit:(unsigned int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)internalEvaluateWithCompletion:(CDUnknownBlockType)arg1;
- (void)evaluateWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;
@property(readonly, getter=isCanceled) BOOL canceled;
- (id)initWithChatSession:(id)arg1 inChatStorage:(id)arg2;

@end

