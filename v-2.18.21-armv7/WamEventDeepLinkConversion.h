//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSString;

@interface WamEventDeepLinkConversion : WamEvent
{
    NSString *_deep_link_conversion_source;
    NSString *_deep_link_conversion_data;
}

@property(copy, nonatomic) NSString *deep_link_conversion_data; // @synthesize deep_link_conversion_data=_deep_link_conversion_data;
@property(copy, nonatomic) NSString *deep_link_conversion_source; // @synthesize deep_link_conversion_source=_deep_link_conversion_source;
- (void).cxx_destruct;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

