//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventAppLaunch : WamEvent
{
    double _app_launch_t;
    double _app_launch_cpu_t;
    double _app_launch_main_pre_t;
    double _app_launch_main_run_t;
    double _app_launch_type_t;
    double _iphone_auto_ui_unload;
}

@property(nonatomic) double iphone_auto_ui_unload; // @synthesize iphone_auto_ui_unload=_iphone_auto_ui_unload;
@property(nonatomic) double app_launch_type_t; // @synthesize app_launch_type_t=_app_launch_type_t;
@property(nonatomic) double app_launch_main_run_t_milliseconds; // @synthesize app_launch_main_run_t_milliseconds=_app_launch_main_run_t;
@property(nonatomic) double app_launch_main_pre_t_milliseconds; // @synthesize app_launch_main_pre_t_milliseconds=_app_launch_main_pre_t;
@property(nonatomic) double app_launch_cpu_t_milliseconds; // @synthesize app_launch_cpu_t_milliseconds=_app_launch_cpu_t;
@property(nonatomic) double app_launch_t_milliseconds; // @synthesize app_launch_t_milliseconds=_app_launch_t;
@property(nonatomic) double app_launch_main_run_t_seconds;
@property(nonatomic) double app_launch_main_pre_t_seconds;
@property(nonatomic) double app_launch_cpu_t_seconds;
@property(nonatomic) double app_launch_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

