//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventBackup : WamEvent
{
    double _backup_restore_t;
    double _backup_restore_result;
    double _backup_restore_is_full;
    double _backup_restore_is_wifi;
    double _backup_restore_retry_count;
    double _backup_restore_include_videos;
    double _backup_restore_finished_over_wifi;
    double _backup_restore_stage;
    double _backup_restore_total_size;
    double _backup_restore_chatdb_size;
    double _backup_restore_media_size;
    double _backup_restore_transfer_size;
    double _backup_restore_transfer_failed_size;
    double _backup_restore_media_file_count;
    double _backup_restore_network_request_count;
    double _backup_files_deleted_in_scrub_count;
    double _backup_network_setting;
    double _backup_schedule;
}

@property(nonatomic) double backup_schedule; // @synthesize backup_schedule=_backup_schedule;
@property(nonatomic) double backup_network_setting; // @synthesize backup_network_setting=_backup_network_setting;
@property(nonatomic) double backup_files_deleted_in_scrub_count; // @synthesize backup_files_deleted_in_scrub_count=_backup_files_deleted_in_scrub_count;
@property(nonatomic) double backup_restore_network_request_count; // @synthesize backup_restore_network_request_count=_backup_restore_network_request_count;
@property(nonatomic) double backup_restore_media_file_count; // @synthesize backup_restore_media_file_count=_backup_restore_media_file_count;
@property(nonatomic) double backup_restore_transfer_failed_size; // @synthesize backup_restore_transfer_failed_size=_backup_restore_transfer_failed_size;
@property(nonatomic) double backup_restore_transfer_size; // @synthesize backup_restore_transfer_size=_backup_restore_transfer_size;
@property(nonatomic) double backup_restore_media_size; // @synthesize backup_restore_media_size=_backup_restore_media_size;
@property(nonatomic) double backup_restore_chatdb_size; // @synthesize backup_restore_chatdb_size=_backup_restore_chatdb_size;
@property(nonatomic) double backup_restore_total_size; // @synthesize backup_restore_total_size=_backup_restore_total_size;
@property(nonatomic) double backup_restore_stage; // @synthesize backup_restore_stage=_backup_restore_stage;
@property(nonatomic) double backup_restore_finished_over_wifi; // @synthesize backup_restore_finished_over_wifi=_backup_restore_finished_over_wifi;
@property(nonatomic) double backup_restore_include_videos; // @synthesize backup_restore_include_videos=_backup_restore_include_videos;
@property(nonatomic) double backup_restore_retry_count; // @synthesize backup_restore_retry_count=_backup_restore_retry_count;
@property(nonatomic) double backup_restore_is_wifi; // @synthesize backup_restore_is_wifi=_backup_restore_is_wifi;
@property(nonatomic) double backup_restore_is_full; // @synthesize backup_restore_is_full=_backup_restore_is_full;
@property(nonatomic) double backup_restore_result; // @synthesize backup_restore_result=_backup_restore_result;
@property(nonatomic) double backup_restore_t_milliseconds; // @synthesize backup_restore_t_milliseconds=_backup_restore_t;
@property(nonatomic) double backup_restore_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
