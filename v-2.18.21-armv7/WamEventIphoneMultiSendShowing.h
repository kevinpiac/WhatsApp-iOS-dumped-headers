//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventIphoneMultiSendShowing : WamEvent
{
    double _iphone_multi_send_shown_t;
    double _iphone_multi_send_showing_origin;
    double _iphone_multi_send_shown_type;
    double _iphone_multi_send_showing_prev_image_count;
    double _iphone_multi_send_showing_current_image_count;
}

@property(nonatomic) double iphone_multi_send_showing_current_image_count; // @synthesize iphone_multi_send_showing_current_image_count=_iphone_multi_send_showing_current_image_count;
@property(nonatomic) double iphone_multi_send_showing_prev_image_count; // @synthesize iphone_multi_send_showing_prev_image_count=_iphone_multi_send_showing_prev_image_count;
@property(nonatomic) double iphone_multi_send_shown_type; // @synthesize iphone_multi_send_shown_type=_iphone_multi_send_shown_type;
@property(nonatomic) double iphone_multi_send_showing_origin; // @synthesize iphone_multi_send_showing_origin=_iphone_multi_send_showing_origin;
@property(nonatomic) double iphone_multi_send_shown_t_milliseconds; // @synthesize iphone_multi_send_shown_t_milliseconds=_iphone_multi_send_shown_t;
@property(nonatomic) double iphone_multi_send_shown_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
