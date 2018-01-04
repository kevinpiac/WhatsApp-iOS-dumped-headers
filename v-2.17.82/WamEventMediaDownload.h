//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSString;

@interface WamEventMediaDownload : WamEvent
{
    NSString *_route_hostname;
    NSString *_route_ip;
    NSString *_media_ip;
    NSString *_media_exception;
    double _media_download_t;
    double _connect_t;
    double _route_selection_delay_t;
    double _network_download_t;
    double _file_validation_t;
    double _time_to_first_byte_t;
    double _queue_time;
    double _route_response_ttl;
    double _media_type;
    double _media_download_result;
    double _retry_count;
    double _attempt_count;
    double _media_used_cdn;
    double _bytes_transferred;
    double _is_streaming_media;
    double _is_reuse;
    double _download_resume_point;
    double _mms_version;
    double _media_size;
    double _e2e_media_encryption;
    double _media_download_mode;
    double _network_stack;
    double _http_response_code;
    double _concurrent_downloads;
    double _is_status;
    double _route_request_bypass;
    double _opt_prewarm_enabled;
    double _allows_ip_hints;
}

@property(nonatomic) double allows_ip_hints; // @synthesize allows_ip_hints=_allows_ip_hints;
@property(nonatomic) double opt_prewarm_enabled; // @synthesize opt_prewarm_enabled=_opt_prewarm_enabled;
@property(nonatomic) double route_request_bypass; // @synthesize route_request_bypass=_route_request_bypass;
@property(nonatomic) double is_status; // @synthesize is_status=_is_status;
@property(nonatomic) double concurrent_downloads; // @synthesize concurrent_downloads=_concurrent_downloads;
@property(nonatomic) double http_response_code; // @synthesize http_response_code=_http_response_code;
@property(copy, nonatomic) NSString *media_exception; // @synthesize media_exception=_media_exception;
@property(copy, nonatomic) NSString *media_ip; // @synthesize media_ip=_media_ip;
@property(nonatomic) double network_stack; // @synthesize network_stack=_network_stack;
@property(nonatomic) double media_download_mode; // @synthesize media_download_mode=_media_download_mode;
@property(nonatomic) double e2e_media_encryption; // @synthesize e2e_media_encryption=_e2e_media_encryption;
@property(nonatomic) double media_size; // @synthesize media_size=_media_size;
@property(nonatomic) double mms_version; // @synthesize mms_version=_mms_version;
@property(nonatomic) double download_resume_point; // @synthesize download_resume_point=_download_resume_point;
@property(nonatomic) double is_reuse; // @synthesize is_reuse=_is_reuse;
@property(copy, nonatomic) NSString *route_ip; // @synthesize route_ip=_route_ip;
@property(copy, nonatomic) NSString *route_hostname; // @synthesize route_hostname=_route_hostname;
@property(nonatomic) double is_streaming_media; // @synthesize is_streaming_media=_is_streaming_media;
@property(nonatomic) double bytes_transferred; // @synthesize bytes_transferred=_bytes_transferred;
@property(nonatomic) double media_used_cdn; // @synthesize media_used_cdn=_media_used_cdn;
@property(nonatomic) double attempt_count; // @synthesize attempt_count=_attempt_count;
@property(nonatomic) double retry_count; // @synthesize retry_count=_retry_count;
@property(nonatomic) double media_download_result; // @synthesize media_download_result=_media_download_result;
@property(nonatomic) double media_type; // @synthesize media_type=_media_type;
@property(nonatomic) double route_response_ttl_milliseconds; // @synthesize route_response_ttl_milliseconds=_route_response_ttl;
@property(nonatomic) double queue_time_milliseconds; // @synthesize queue_time_milliseconds=_queue_time;
@property(nonatomic) double time_to_first_byte_t_milliseconds; // @synthesize time_to_first_byte_t_milliseconds=_time_to_first_byte_t;
@property(nonatomic) double file_validation_t_milliseconds; // @synthesize file_validation_t_milliseconds=_file_validation_t;
@property(nonatomic) double network_download_t_milliseconds; // @synthesize network_download_t_milliseconds=_network_download_t;
@property(nonatomic) double route_selection_delay_t_milliseconds; // @synthesize route_selection_delay_t_milliseconds=_route_selection_delay_t;
@property(nonatomic) double connect_t_milliseconds; // @synthesize connect_t_milliseconds=_connect_t;
@property(nonatomic) double media_download_t_milliseconds; // @synthesize media_download_t_milliseconds=_media_download_t;
- (void).cxx_destruct;
@property(nonatomic) double route_response_ttl_seconds;
@property(nonatomic) double queue_time_seconds;
@property(nonatomic) double time_to_first_byte_t_seconds;
@property(nonatomic) double file_validation_t_seconds;
@property(nonatomic) double network_download_t_seconds;
@property(nonatomic) double route_selection_delay_t_seconds;
@property(nonatomic) double connect_t_seconds;
@property(nonatomic) double media_download_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

