//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventActionTakePhotoOrVideo : WamEvent
{
    double _action_take_photo_action_sheet;
    double _action_take_video_action_sheet;
    double _action_take_photo_chat_bar;
    double _action_take_video_chat_bar;
}

@property(nonatomic) double action_take_video_chat_bar; // @synthesize action_take_video_chat_bar=_action_take_video_chat_bar;
@property(nonatomic) double action_take_photo_chat_bar; // @synthesize action_take_photo_chat_bar=_action_take_photo_chat_bar;
@property(nonatomic) double action_take_video_action_sheet; // @synthesize action_take_video_action_sheet=_action_take_video_action_sheet;
@property(nonatomic) double action_take_photo_action_sheet; // @synthesize action_take_photo_action_sheet=_action_take_photo_action_sheet;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
