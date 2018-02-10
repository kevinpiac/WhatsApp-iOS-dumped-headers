//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSString;

@interface WamEventEmojiSearchEmojiSelected : WamEvent
{
    double _emoji_search_rank_of_selected_emoji;
    double _emoji_search_result_count;
    double _emoji_search_ui_id;
    NSString *_input_language_code;
    NSString *_language_code;
}

@property(copy, nonatomic) NSString *language_code; // @synthesize language_code=_language_code;
@property(copy, nonatomic) NSString *input_language_code; // @synthesize input_language_code=_input_language_code;
@property(nonatomic) double emoji_search_ui_id; // @synthesize emoji_search_ui_id=_emoji_search_ui_id;
@property(nonatomic) double emoji_search_result_count; // @synthesize emoji_search_result_count=_emoji_search_result_count;
@property(nonatomic) double emoji_search_rank_of_selected_emoji; // @synthesize emoji_search_rank_of_selected_emoji=_emoji_search_rank_of_selected_emoji;
- (void).cxx_destruct;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

