//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSString;

@interface WamEventMemoryStat : WamEvent
{
    NSString *_process_type;
    double _working_set_size;
    double _working_set_peak_size;
    double _private_bytes;
    double _shared_bytes;
    double _uptime;
    double _has_verified_number;
    double _num_messages;
}

@property(nonatomic) double num_messages; // @synthesize num_messages=_num_messages;
@property(nonatomic) double has_verified_number; // @synthesize has_verified_number=_has_verified_number;
@property(nonatomic) double uptime; // @synthesize uptime=_uptime;
@property(copy, nonatomic) NSString *process_type; // @synthesize process_type=_process_type;
@property(nonatomic) double shared_bytes; // @synthesize shared_bytes=_shared_bytes;
@property(nonatomic) double private_bytes; // @synthesize private_bytes=_private_bytes;
@property(nonatomic) double working_set_peak_size; // @synthesize working_set_peak_size=_working_set_peak_size;
@property(nonatomic) double working_set_size; // @synthesize working_set_size=_working_set_size;
- (void).cxx_destruct;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

