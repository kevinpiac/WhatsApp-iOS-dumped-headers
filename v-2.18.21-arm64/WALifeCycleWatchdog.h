//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WALifeCycleWatchdog : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _mode;
    _Bool _isWatchdogTimeoutEnabled;
}

- (void).cxx_destruct;
- (void)raiseExceptionForWatchdogMode:(unsigned long long)arg1;
- (void)didUpdateServerProperties:(id)arg1;
- (double)timeoutForMode:(unsigned long long)arg1;
- (void)startWatchdogWithMode:(unsigned long long)arg1 timeElapsed:(double)arg2;
- (void)dealloc;
- (id)init;

@end

