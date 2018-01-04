//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventMessageSend : WamEvent
{
    double _message_forward_age_t;
    double _message_send_t;
    double _message_send_result;
    double _message_type;
    double _message_media_type;
    double _message_is_forward;
    double _message_is_fast_forward;
    double _fast_forward_enabled;
    double _message_is_fanout;
    double _retry_count;
    double _message_is_international;
    double _media_caption_present;
    double _e2e_ciphertext_version;
    double _e2e_ciphertext_type;
    double _message_send_opt_upload_enabled;
}

@property(nonatomic) double message_send_opt_upload_enabled; // @synthesize message_send_opt_upload_enabled=_message_send_opt_upload_enabled;
@property(nonatomic) double e2e_ciphertext_type; // @synthesize e2e_ciphertext_type=_e2e_ciphertext_type;
@property(nonatomic) double e2e_ciphertext_version; // @synthesize e2e_ciphertext_version=_e2e_ciphertext_version;
@property(nonatomic) double media_caption_present; // @synthesize media_caption_present=_media_caption_present;
@property(nonatomic) double message_is_international; // @synthesize message_is_international=_message_is_international;
@property(nonatomic) double retry_count; // @synthesize retry_count=_retry_count;
@property(nonatomic) double message_is_fanout; // @synthesize message_is_fanout=_message_is_fanout;
@property(nonatomic) double fast_forward_enabled; // @synthesize fast_forward_enabled=_fast_forward_enabled;
@property(nonatomic) double message_is_fast_forward; // @synthesize message_is_fast_forward=_message_is_fast_forward;
@property(nonatomic) double message_is_forward; // @synthesize message_is_forward=_message_is_forward;
@property(nonatomic) double message_media_type; // @synthesize message_media_type=_message_media_type;
@property(nonatomic) double message_type; // @synthesize message_type=_message_type;
@property(nonatomic) double message_send_result; // @synthesize message_send_result=_message_send_result;
@property(nonatomic) double message_send_t_milliseconds; // @synthesize message_send_t_milliseconds=_message_send_t;
@property(nonatomic) double message_forward_age_t_milliseconds; // @synthesize message_forward_age_t_milliseconds=_message_forward_age_t;
@property(nonatomic) double message_send_t_seconds;
@property(nonatomic) double message_forward_age_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

