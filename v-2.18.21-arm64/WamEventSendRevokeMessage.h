//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventSendRevokeMessage : WamEvent
{
    double _message_type;
    double _message_media_type;
    double _revoke_send_delay;
}

@property(nonatomic) double revoke_send_delay; // @synthesize revoke_send_delay=_revoke_send_delay;
@property(nonatomic) double message_media_type; // @synthesize message_media_type=_message_media_type;
@property(nonatomic) double message_type; // @synthesize message_type=_message_type;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
