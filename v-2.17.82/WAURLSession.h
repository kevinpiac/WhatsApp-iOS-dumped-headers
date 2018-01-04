//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURLSession, WAURLSessionManager;

@interface WAURLSession : NSObject
{
    NSMutableArray *_tasks;
    BOOL _isLoaded;
    NSMutableArray *_deferredOperations;
    NSURLSession *_URLSession;
    NSString *_identifier;
    CDUnknownBlockType _completionHandler;
    WAURLSessionManager *_sessionManager;
}

@property(nonatomic) __weak WAURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (void).cxx_destruct;
- (void)restoreTasks;
- (id)savedTasksFilePath;
- (void)saveTasks;
- (void)cancelAll;
- (void)resumeAll;
- (void)suspendAll;
@property(readonly, nonatomic) NSArray *allTaskIdentifiers;
- (void)updateResumeOffsetInTaskData:(id)arg1;
- (id)addDownloadTaskWithTaskData:(id)arg1;
- (id)taskWithIdentifier:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)flushDeferredTaskOperations;
- (BOOL)isBackgroundSession;
- (id)initWithURLSession:(id)arg1 identifier:(id)arg2;

@end
