//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface WAActivityMonitor : NSObject
{
    NSNumber *_firstEventTime;
    NSNumber *_lastEventTime;
    NSMutableDictionary *_bitmaps;
    int _type;
}

+ (id)sharedActivityMonitor;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)triggeredEventWithTimestamp:(id)arg1;
- (void)triggeredEvent;
- (void)submitSessionWithLength:(int)arg1 startTime:(double)arg2;
- (void)submitBitArrayWithDictionary:(id)arg1 length:(int)arg2 startTime:(double)arg3;
- (void)endMonitoringWithEndTime:(id)arg1;
- (void)endMonitoring;
@property(readonly, nonatomic) NSNumber *lastEventTime;
- (double)currentAbsoluteTime;
- (id)init;

@end

