//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventIphoneMediaPicker : WamEvent
{
    double _iphone_media_picker_delay;
}

@property(nonatomic) double iphone_media_picker_delay_milliseconds; // @synthesize iphone_media_picker_delay_milliseconds=_iphone_media_picker_delay;
@property(nonatomic) double iphone_media_picker_delay_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

