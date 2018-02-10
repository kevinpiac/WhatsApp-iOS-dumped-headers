//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSString;

@interface WamEventEmojiSearchSessionStopped : WamEvent
{
    NSString *_input_language_code;
    NSString *_language_code;
    double _emoji_search_count_emoji_selected;
    double _emoji_search_ui_id;
}

@property(copy, nonatomic) NSString *language_code; // @synthesize language_code=_language_code;
@property(copy, nonatomic) NSString *input_language_code; // @synthesize input_language_code=_input_language_code;
@property(nonatomic) double emoji_search_ui_id; // @synthesize emoji_search_ui_id=_emoji_search_ui_id;
@property(nonatomic) double emoji_search_count_emoji_selected; // @synthesize emoji_search_count_emoji_selected=_emoji_search_count_emoji_selected;
- (void).cxx_destruct;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

