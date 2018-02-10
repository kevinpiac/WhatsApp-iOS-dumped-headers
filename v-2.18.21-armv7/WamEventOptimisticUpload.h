//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventOptimisticUpload : WamEvent
{
    double _opt_upload_available_t;
    double _media_type;
    double _opt_supplied;
    double _opt_ignored_disabled;
    double _opt_ignored_stopped;
    double _opt_ignored_not_appropriate;
    double _opt_added;
    double _opt_deleted_b4_upload;
    double _opt_deleted_upload_ok;
    double _opt_deleted_upload_not_ok;
    double _opt_sent_b4_upload;
    double _opt_sent_upload_ok;
    double _opt_sent_upload_not_ok;
    double _opt_sent_upload_useful;
    double _opt_upload_context;
}

@property(nonatomic) double opt_upload_context; // @synthesize opt_upload_context=_opt_upload_context;
@property(nonatomic) double opt_sent_upload_useful; // @synthesize opt_sent_upload_useful=_opt_sent_upload_useful;
@property(nonatomic) double opt_sent_upload_not_ok; // @synthesize opt_sent_upload_not_ok=_opt_sent_upload_not_ok;
@property(nonatomic) double opt_sent_upload_ok; // @synthesize opt_sent_upload_ok=_opt_sent_upload_ok;
@property(nonatomic) double opt_sent_b4_upload; // @synthesize opt_sent_b4_upload=_opt_sent_b4_upload;
@property(nonatomic) double opt_deleted_upload_not_ok; // @synthesize opt_deleted_upload_not_ok=_opt_deleted_upload_not_ok;
@property(nonatomic) double opt_deleted_upload_ok; // @synthesize opt_deleted_upload_ok=_opt_deleted_upload_ok;
@property(nonatomic) double opt_deleted_b4_upload; // @synthesize opt_deleted_b4_upload=_opt_deleted_b4_upload;
@property(nonatomic) double opt_added; // @synthesize opt_added=_opt_added;
@property(nonatomic) double opt_ignored_not_appropriate; // @synthesize opt_ignored_not_appropriate=_opt_ignored_not_appropriate;
@property(nonatomic) double opt_ignored_stopped; // @synthesize opt_ignored_stopped=_opt_ignored_stopped;
@property(nonatomic) double opt_ignored_disabled; // @synthesize opt_ignored_disabled=_opt_ignored_disabled;
@property(nonatomic) double opt_supplied; // @synthesize opt_supplied=_opt_supplied;
@property(nonatomic) double media_type; // @synthesize media_type=_media_type;
@property(nonatomic) double opt_upload_available_t_milliseconds; // @synthesize opt_upload_available_t_milliseconds=_opt_upload_available_t;
@property(nonatomic) double opt_upload_available_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
