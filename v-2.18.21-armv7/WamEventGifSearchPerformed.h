//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSString;

@interface WamEventGifSearchPerformed : WamEvent
{
    NSString *_input_language_code;
    NSString *_language_code;
    double _round_trip_time;
    double _gif_search_provider;
}

@property(copy, nonatomic) NSString *language_code; // @synthesize language_code=_language_code;
@property(copy, nonatomic) NSString *input_language_code; // @synthesize input_language_code=_input_language_code;
@property(nonatomic) double gif_search_provider; // @synthesize gif_search_provider=_gif_search_provider;
@property(nonatomic) double round_trip_time_milliseconds; // @synthesize round_trip_time_milliseconds=_round_trip_time;
- (void).cxx_destruct;
@property(nonatomic) double round_trip_time_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
