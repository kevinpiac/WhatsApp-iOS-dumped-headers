//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSString;

@interface WamEventPlacesApiQuery : WamEvent
{
    NSString *_places_api_failure_description;
    NSString *_places_api_query_string;
    double _places_api_response_t;
    double _places_api_source;
    double _places_api_source_default;
    double _places_api_response;
    double _places_api_request_index;
    double _places_api_cached;
    double _places_api_places_count;
}

@property(nonatomic) double places_api_places_count; // @synthesize places_api_places_count=_places_api_places_count;
@property(copy, nonatomic) NSString *places_api_query_string; // @synthesize places_api_query_string=_places_api_query_string;
@property(nonatomic) double places_api_cached; // @synthesize places_api_cached=_places_api_cached;
@property(nonatomic) double places_api_request_index; // @synthesize places_api_request_index=_places_api_request_index;
@property(copy, nonatomic) NSString *places_api_failure_description; // @synthesize places_api_failure_description=_places_api_failure_description;
@property(nonatomic) double places_api_response; // @synthesize places_api_response=_places_api_response;
@property(nonatomic) double places_api_source_default; // @synthesize places_api_source_default=_places_api_source_default;
@property(nonatomic) double places_api_source; // @synthesize places_api_source=_places_api_source;
@property(nonatomic) double places_api_response_t_milliseconds; // @synthesize places_api_response_t_milliseconds=_places_api_response_t;
- (void).cxx_destruct;
@property(nonatomic) double places_api_response_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

