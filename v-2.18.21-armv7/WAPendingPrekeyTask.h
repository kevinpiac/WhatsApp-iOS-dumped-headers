//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WAPendingPrekeyTask : NSObject
{
    NSMutableSet *_pendingJids;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSMutableSet *pendingJids; // @synthesize pendingJids=_pendingJids;
- (void).cxx_destruct;
- (void)finishedWaitingForJid:(id)arg1;
@property(readonly, nonatomic) BOOL finished;
- (id)initWithPendingJids:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
