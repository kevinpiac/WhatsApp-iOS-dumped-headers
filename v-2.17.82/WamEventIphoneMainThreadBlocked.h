//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventIphoneMainThreadBlocked : WamEvent
{
    double _main_thread_blocked_t;
}

@property(nonatomic) double main_thread_blocked_t_milliseconds; // @synthesize main_thread_blocked_t_milliseconds=_main_thread_blocked_t;
@property(nonatomic) double main_thread_blocked_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

