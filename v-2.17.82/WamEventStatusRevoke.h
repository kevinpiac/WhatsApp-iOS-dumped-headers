//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventStatusRevoke : WamEvent
{
    double _status_session_id;
    double _media_type;
    double _status_life_t;
}

@property(nonatomic) double status_life_t; // @synthesize status_life_t=_status_life_t;
@property(nonatomic) double media_type; // @synthesize media_type=_media_type;
@property(nonatomic) double status_session_id; // @synthesize status_session_id=_status_session_id;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
