//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol WADeviceDate;

@interface ExecutionTimeProfiler : NSObject
{
    NSMutableDictionary *beginDates;
    NSMutableDictionary *endDates;
    NSDate<WADeviceDate> *beginDate;
    NSDate<WADeviceDate> *endDate;
}

@property(retain, nonatomic) NSDate<WADeviceDate> *endDate; // @synthesize endDate;
@property(retain, nonatomic) NSDate<WADeviceDate> *beginDate; // @synthesize beginDate;
- (void).cxx_destruct;
- (id)result;
- (double)durationForTask:(id)arg1;
- (double)timeFromStart;
- (double)totalTime;
- (void)resetTask:(id)arg1;
- (BOOL)taskEnded:(id)arg1;
- (void)endTask:(id)arg1;
- (void)beginTask:(id)arg1;
- (void)end;
- (void)begin;
- (id)init;

@end
