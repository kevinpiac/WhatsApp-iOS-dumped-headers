//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventAddressbookSync : WamEvent
{
    double _addressbook_sync_t;
    double _addressbook_sync_is_reg;
    double _addressbook_sync_error_code;
    double _addressbook_sync_result_type;
}

@property(nonatomic) double addressbook_sync_result_type; // @synthesize addressbook_sync_result_type=_addressbook_sync_result_type;
@property(nonatomic) double addressbook_sync_error_code; // @synthesize addressbook_sync_error_code=_addressbook_sync_error_code;
@property(nonatomic) double addressbook_sync_is_reg; // @synthesize addressbook_sync_is_reg=_addressbook_sync_is_reg;
@property(nonatomic) double addressbook_sync_t_milliseconds; // @synthesize addressbook_sync_t_milliseconds=_addressbook_sync_t;
@property(nonatomic) double addressbook_sync_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
