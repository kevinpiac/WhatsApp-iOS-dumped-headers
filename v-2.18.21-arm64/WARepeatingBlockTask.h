//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABlockTask.h"

@class NSDate, WATaskQueue;
@protocol WADeviceDate;

@interface WARepeatingBlockTask : WABlockTask
{
    unsigned long long _mode;
    WATaskQueue *_rescheduleQueue;
    NSDate<WADeviceDate> *_lastRunTimestamp;
    double _delayInterval;
}

+ (void)resetLastRunTimestampForTaskWithUniqueIdentifier:(id)arg1;
@property double delayInterval; // @synthesize delayInterval=_delayInterval;
@property(retain) NSDate<WADeviceDate> *lastRunTimestamp; // @synthesize lastRunTimestamp=_lastRunTimestamp;
- (void).cxx_destruct;
- (void)saveLastRunTimestamp;
- (id)loadLastRunTimestamp;
- (void)runTaskFromQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleDelayedRun:(double)arg1;
- (_Bool)scheduleNextRunIfNeeded;
- (void)scheduleTaskOnQueue:(id)arg1 delayInterval:(double)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 mode:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;

@end

