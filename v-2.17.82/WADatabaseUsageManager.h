//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSByteCountFormatter;
@protocol OS_dispatch_queue;

@interface WADatabaseUsageManager : NSObject
{
    // Error parsing type: AL, name: _loadingIndex
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSByteCountFormatter *_formatter;
}

+ (id)currentMessageTypes;
- (void).cxx_destruct;
- (id)localizedStringForByteCount:(unsigned long long)arg1;
- (void)cancel;
- (id)fileSizeForChatSession:(id)arg1 ofType:(int)arg2 inContext:(id)arg3;
- (unsigned int)messageCountForChatSession:(id)arg1 ofType:(int)arg2 inContext:(id)arg3;
- (void)loadForChatSession:(id)arg1 withUpdateInterval:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

@end

