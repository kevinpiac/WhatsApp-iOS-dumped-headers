//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSString;

@interface WamEventBusinessMute : WamEvent
{
    double _mute_t;
    NSString *_mutee_id;
}

@property(copy, nonatomic) NSString *mutee_id; // @synthesize mutee_id=_mutee_id;
@property(nonatomic) double mute_t_milliseconds; // @synthesize mute_t_milliseconds=_mute_t;
- (void).cxx_destruct;
@property(nonatomic) double mute_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

