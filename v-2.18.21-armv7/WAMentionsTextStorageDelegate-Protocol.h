//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSTextStorageDelegate-Protocol.h"

@class WAMentionsTextStorage;

@protocol WAMentionsTextStorageDelegate <NSTextStorageDelegate>
- (void)textStorage:(WAMentionsTextStorage *)arg1 didChangeSelectedRange:(struct _NSRange)arg2;
- (void)textStorageDidStopEditingMention:(WAMentionsTextStorage *)arg1;
- (void)textStorage:(WAMentionsTextStorage *)arg1 didEditMentionInRange:(struct _NSRange)arg2;
@end

