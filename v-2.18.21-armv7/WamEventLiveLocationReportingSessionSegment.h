//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventLiveLocationReportingSessionSegment : WamEvent
{
    double _segment_t;
    double _segment_number;
    double _segment_number_of_updates;
    double _segment_algorithm;
    double _segment_battery_level_change;
    double _segment_battery_charging;
    double _segment_backoff_stage;
}

@property(nonatomic) double segment_backoff_stage; // @synthesize segment_backoff_stage=_segment_backoff_stage;
@property(nonatomic) double segment_battery_charging; // @synthesize segment_battery_charging=_segment_battery_charging;
@property(nonatomic) double segment_battery_level_change; // @synthesize segment_battery_level_change=_segment_battery_level_change;
@property(nonatomic) double segment_algorithm; // @synthesize segment_algorithm=_segment_algorithm;
@property(nonatomic) double segment_number_of_updates; // @synthesize segment_number_of_updates=_segment_number_of_updates;
@property(nonatomic) double segment_number; // @synthesize segment_number=_segment_number;
@property(nonatomic) double segment_t_milliseconds; // @synthesize segment_t_milliseconds=_segment_t;
@property(nonatomic) double segment_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

