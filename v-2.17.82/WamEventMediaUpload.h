//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSString;

@interface WamEventMediaUpload : WamEvent
{
    NSString *_route_hostname;
    NSString *_route_ip;
    NSString *_url;
    NSString *_media_ip;
    NSString *_media_exception;
    double _media_upload_t;
    double _connect_t;
    double _route_selection_delay_t;
    double _user_visible_t;
    double _resume_check_t;
    double _network_upload_t;
    double _request_iq_t;
    double _upload_response_wait_t;
    double _route_response_ttl;
    double _queue_time;
    double _media_type;
    double _media_upload_result;
    double _message_is_forward;
    double _retry_count;
    double _attempt_count;
    double _media_used_cdn;
    double _transcoded;
    double _is_reuse;
    double _upload_resume_point;
    double _mms_version;
    double _http_response_code;
    double _media_size;
    double _e2e_media_encryption;
    double _optimistic_flag;
    double _is_streaming_upload;
    double _is_manual;
    double _bytes_transferred;
    double _network_stack;
    double _is_like_document;
    double _concurrent_uploads;
    double _allows_ip_hints;
}

@property(nonatomic) double allows_ip_hints; // @synthesize allows_ip_hints=_allows_ip_hints;
@property(nonatomic) double concurrent_uploads; // @synthesize concurrent_uploads=_concurrent_uploads;
@property(nonatomic) double is_like_document; // @synthesize is_like_document=_is_like_document;
@property(copy, nonatomic) NSString *media_exception; // @synthesize media_exception=_media_exception;
@property(copy, nonatomic) NSString *media_ip; // @synthesize media_ip=_media_ip;
@property(nonatomic) double network_stack; // @synthesize network_stack=_network_stack;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double bytes_transferred; // @synthesize bytes_transferred=_bytes_transferred;
@property(nonatomic) double is_manual; // @synthesize is_manual=_is_manual;
@property(nonatomic) double is_streaming_upload; // @synthesize is_streaming_upload=_is_streaming_upload;
@property(nonatomic) double optimistic_flag; // @synthesize optimistic_flag=_optimistic_flag;
@property(nonatomic) double e2e_media_encryption; // @synthesize e2e_media_encryption=_e2e_media_encryption;
@property(nonatomic) double media_size; // @synthesize media_size=_media_size;
@property(nonatomic) double http_response_code; // @synthesize http_response_code=_http_response_code;
@property(nonatomic) double mms_version; // @synthesize mms_version=_mms_version;
@property(nonatomic) double upload_resume_point; // @synthesize upload_resume_point=_upload_resume_point;
@property(nonatomic) double is_reuse; // @synthesize is_reuse=_is_reuse;
@property(copy, nonatomic) NSString *route_ip; // @synthesize route_ip=_route_ip;
@property(copy, nonatomic) NSString *route_hostname; // @synthesize route_hostname=_route_hostname;
@property(nonatomic) double transcoded; // @synthesize transcoded=_transcoded;
@property(nonatomic) double media_used_cdn; // @synthesize media_used_cdn=_media_used_cdn;
@property(nonatomic) double attempt_count; // @synthesize attempt_count=_attempt_count;
@property(nonatomic) double retry_count; // @synthesize retry_count=_retry_count;
@property(nonatomic) double message_is_forward; // @synthesize message_is_forward=_message_is_forward;
@property(nonatomic) double media_upload_result; // @synthesize media_upload_result=_media_upload_result;
@property(nonatomic) double media_type; // @synthesize media_type=_media_type;
@property(nonatomic) double queue_time_milliseconds; // @synthesize queue_time_milliseconds=_queue_time;
@property(nonatomic) double route_response_ttl_milliseconds; // @synthesize route_response_ttl_milliseconds=_route_response_ttl;
@property(nonatomic) double upload_response_wait_t_milliseconds; // @synthesize upload_response_wait_t_milliseconds=_upload_response_wait_t;
@property(nonatomic) double request_iq_t_milliseconds; // @synthesize request_iq_t_milliseconds=_request_iq_t;
@property(nonatomic) double network_upload_t_milliseconds; // @synthesize network_upload_t_milliseconds=_network_upload_t;
@property(nonatomic) double resume_check_t_milliseconds; // @synthesize resume_check_t_milliseconds=_resume_check_t;
@property(nonatomic) double user_visible_t_milliseconds; // @synthesize user_visible_t_milliseconds=_user_visible_t;
@property(nonatomic) double route_selection_delay_t_milliseconds; // @synthesize route_selection_delay_t_milliseconds=_route_selection_delay_t;
@property(nonatomic) double connect_t_milliseconds; // @synthesize connect_t_milliseconds=_connect_t;
@property(nonatomic) double media_upload_t_milliseconds; // @synthesize media_upload_t_milliseconds=_media_upload_t;
- (void).cxx_destruct;
@property(nonatomic) double queue_time_seconds;
@property(nonatomic) double route_response_ttl_seconds;
@property(nonatomic) double upload_response_wait_t_seconds;
@property(nonatomic) double request_iq_t_seconds;
@property(nonatomic) double network_upload_t_seconds;
@property(nonatomic) double resume_check_t_seconds;
@property(nonatomic) double user_visible_t_seconds;
@property(nonatomic) double route_selection_delay_t_seconds;
@property(nonatomic) double connect_t_seconds;
@property(nonatomic) double media_upload_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

