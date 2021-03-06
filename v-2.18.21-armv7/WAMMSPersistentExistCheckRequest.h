//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPersistentRequest.h"

@class NSDate, WAMMSTaskDescription, WAMessageID;

@interface WAMMSPersistentExistCheckRequest : WAPersistentRequest
{
    WAMMSTaskDescription *_taskDescription;
    NSDate *_startDate;
    WAMessageID *_messageID;
}

- (void).cxx_destruct;
- (void)updateMediaWithResult:(id)arg1;
- (double)delayBeforeRetry;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)canBegin;
- (id)initWithTaskDescription:(id)arg1 messageID:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

